// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun.h"
#include "BaseCharacter.h"
#include "DrawDebugHelpers.h"
#include "Net/UnrealNetwork.h"
// Sets default values
AGun::AGun()
{
	bReplicates = true;
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	DamagePerBullet = 0;

	MaxAmmoPerMagazine = 30;
	InitialAmmoCount = 270;
	CurrentLeftAmmo = InitialAmmoCount;
	LeftAmmoInMagazine = MaxAmmoPerMagazine;

	bIsStartedReload = false;
}

// Called when the game starts or when spawned
void AGun::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGun::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AGun, CurrentLeftAmmo);
	DOREPLIFETIME(AGun, LeftAmmoInMagazine);
}
void AGun::PostInitProperties() // 에디터에서 초기값 변경시 바로바로 적용됨
{
	Super::PostInitProperties();
	CurrentLeftAmmo = InitialAmmoCount;
}
#if WITH_EDITOR
void AGun::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	if (PropertyChangedEvent.GetPropertyName() == TEXT("InitialAmmoCount"))
	{
		CurrentLeftAmmo = InitialAmmoCount;
	}
}
#endif
bool AGun::CanFire() const
{

	return LeftAmmoInMagazine > 0 && !IsReloading();
}


void AGun::Fire()
{
	// 발사 불가능 한 경우 무시
	if (!CanFire())
		return;

	if (GetNetMode() != ENetMode::NM_Standalone) // 넷모드가 StandAlone이 아닐때
	{
		APawn* Pawn = Cast<APawn>(GetOwner());
		if (Pawn)
		{
			// 총의 Owner가 LocallyControlled 인 경우만 Fire동기화!
			if (Pawn->IsLocallyControlled())
			{
				// 서버에서 호출한 경우 모든 클라에게 동기화
				if (Pawn->HasAuthority())
				{
					MulticastFire(true);
				}
				else // 클라에서 호출한 경우 서버로 동기화
				{
					ServerFire();
				}
			}
		}
		else
		{
			//방어코드, Pawn이 없거나 총기의 Owner가 없거나
		}
	}
	OnFire();

	// 총알 감소
	LeftAmmoInMagazine = FMath::Max(LeftAmmoInMagazine -1, 0); // 인자 두개중 가장 큰 값이 들어감

	// LineTrace
	if (HasAuthority())
	{
		// 실제 발사할 시작 위치
		FVector StartFireLocation; // Line Trace 시작 위치
		FVector EndFireLocation; // Line Trace 끝 위치
		FVector FireDirection;

		if (GetOwner() != nullptr)
		{
			FVector EyeLocation; // 현재 Eye(Actor Location + APawn::BaseEyeHeight) 위치
			FRotator EyeRotation; // 현재 카메라가 보고있는 방향
			GetOwner()->GetActorEyesViewPoint(EyeLocation, EyeRotation);

			StartFireLocation = EyeLocation;

			FireDirection = EyeRotation.Vector();
			EndFireLocation = StartFireLocation + FireDirection * 10000;
		}

		FHitResult Hit;
		FCollisionQueryParams QueryParams;
		QueryParams.AddIgnoredActor(this); // 발사하는 Gun 엑터 제외
		QueryParams.AddIgnoredActor(GetOwner()); // 발사하는 Gun 엑터를 가지고있는 캐릭터도 제외
		if (GetWorld()->LineTraceSingleByObjectType(Hit, StartFireLocation, EndFireLocation, FCollisionObjectQueryParams(ECollisionChannel::ECC_Visibility), QueryParams))
		{
			DrawDebugLine(GetWorld(), StartFireLocation, EndFireLocation, FColor::Red, false, 10.f, SDPG_World, 1.f);
			DrawDebugSphere(GetWorld(), Hit.ImpactPoint, 10.f, 12, FColor::Green, false, 10.f, SDPG_World, 1.f);

			UE_LOG(LogTemp, Log, TEXT("누군가 맞음! 맞은 놈 -> %s"), *Hit.Actor->GetName());

			ABaseCharacter* BaseCharacter = Cast<ABaseCharacter>(Hit.Actor);
			if (BaseCharacter != nullptr)
			{
				FPointDamageEvent DamageEvent;
				DamageEvent.DamageTypeClass = nullptr;
				DamageEvent.Damage = DamagePerBullet;
				DamageEvent.HitInfo = Hit;
				DamageEvent.ShotDirection = FireDirection;

				BaseCharacter->TakeDamage(DamagePerBullet, DamageEvent, nullptr, GetOwner());

				//UE_LOG(LogTemp, Log, TEXT("맞은 사람 현재 체력 %d"), BaseCharacter->GetCurrentHealth());
			} 
			else
			{

				FPointDamageEvent DamageEvent;
				DamageEvent.DamageTypeClass = nullptr;
				DamageEvent.Damage = DamagePerBullet;
				DamageEvent.HitInfo = Hit;
				DamageEvent.ShotDirection = FireDirection;

				Hit.Actor->TakeDamage(DamagePerBullet, DamageEvent, nullptr, GetOwner());
			}
		}
		else
		{
			DrawDebugLine(GetWorld(), StartFireLocation, EndFireLocation, FColor::Blue, false, 10.f, SDPG_World, 1.f);
		}
	}
}

void AGun::ServerFire_Implementation()
{
	Fire();

	MulticastFire(false);
}

void AGun::MulticastFire_Implementation(bool NeedIncludeAutonomousProxy)
{
	if (HasAuthority() == false)
	{
		if (NeedIncludeAutonomousProxy)
		{
			Fire();
		}
		else
		{
			if (GetOwner()->GetLocalRole() == ROLE_SimulatedProxy)
			{
				Fire();
			}
		}
	}
}

FVector AGun::GetMuzzleLocation_Implementation() const
{
	return GetActorLocation();
}

bool AGun::CanReload() const
{
	return CurrentLeftAmmo > 0 &&  //남은 탄 없음
		// 이미 Reloading 중인 상태면 Reloading 불가
		IsReloading() == false;
}

void AGun::ServerStartReload_Implementation()
{
	StartReload();
	// 소유권이 없는 클라이언트들에게도 Reload 호출하도록..

	MulticastStartReload();
}

void AGun::MulticastStartReload_Implementation()
{
	if (GetOwner()->GetLocalRole() == ROLE_SimulatedProxy)
	{
		StartReload();
	}
}
void AGun::StartReload()
{
	bIsStartedReload = true;


	OnStartReload();
}
void AGun::EndReload()
{
	// Reload Start?
	if (IsReloading() == false)
		return;

	bIsStartedReload = false; 
	
	// 탄창에는 최대 MaxAmmoPerMagazine 까지 들어가고,
	// 남은 탄수가 MaxAmmoPerMagazine 보다 작게 있으면 해당 총알만 드림
	const int ConsumeAmmo = (MaxAmmoPerMagazine - LeftAmmoInMagazine);
	const int SupplyAmmo = FMath::Min(ConsumeAmmo, CurrentLeftAmmo);
	LeftAmmoInMagazine += SupplyAmmo;
	CurrentLeftAmmo -= SupplyAmmo;

	

	
	OnEndReload();
}
bool AGun::IsReloading_Implementation() const
{
	return bIsStartedReload;
}
bool AGun::TryReload()
{
	if (!CanReload())
		return false;

	StartReload();

	APawn* OwnerPawn = Cast<APawn>(GetOwner());
	if (OwnerPawn && OwnerPawn->IsLocallyControlled()) // Listen 서버에서 두번 호출 고려하기 - HasAuthoriy조건넣기
	{
		if (OwnerPawn->HasAuthority())
		{
			MulticastStartReload();
		}
		else
		{
			ServerStartReload();
		}
	}
	return true;
}
