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
void AGun::PostInitProperties() // �����Ϳ��� �ʱⰪ ����� �ٷιٷ� �����
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
	// �߻� �Ұ��� �� ��� ����
	if (!CanFire())
		return;

	if (GetNetMode() != ENetMode::NM_Standalone) // �ݸ�尡 StandAlone�� �ƴҶ�
	{
		APawn* Pawn = Cast<APawn>(GetOwner());
		if (Pawn)
		{
			// ���� Owner�� LocallyControlled �� ��츸 Fire����ȭ!
			if (Pawn->IsLocallyControlled())
			{
				// �������� ȣ���� ��� ��� Ŭ�󿡰� ����ȭ
				if (Pawn->HasAuthority())
				{
					MulticastFire(true);
				}
				else // Ŭ�󿡼� ȣ���� ��� ������ ����ȭ
				{
					ServerFire();
				}
			}
		}
		else
		{
			//����ڵ�, Pawn�� ���ų� �ѱ��� Owner�� ���ų�
		}
	}
	OnFire();

	// �Ѿ� ����
	LeftAmmoInMagazine = FMath::Max(LeftAmmoInMagazine -1, 0); // ���� �ΰ��� ���� ū ���� ��

	// LineTrace
	if (HasAuthority())
	{
		// ���� �߻��� ���� ��ġ
		FVector StartFireLocation; // Line Trace ���� ��ġ
		FVector EndFireLocation; // Line Trace �� ��ġ
		FVector FireDirection;

		if (GetOwner() != nullptr)
		{
			FVector EyeLocation; // ���� Eye(Actor Location + APawn::BaseEyeHeight) ��ġ
			FRotator EyeRotation; // ���� ī�޶� �����ִ� ����
			GetOwner()->GetActorEyesViewPoint(EyeLocation, EyeRotation);

			StartFireLocation = EyeLocation;

			FireDirection = EyeRotation.Vector();
			EndFireLocation = StartFireLocation + FireDirection * 10000;
		}

		FHitResult Hit;
		FCollisionQueryParams QueryParams;
		QueryParams.AddIgnoredActor(this); // �߻��ϴ� Gun ���� ����
		QueryParams.AddIgnoredActor(GetOwner()); // �߻��ϴ� Gun ���͸� �������ִ� ĳ���͵� ����
		if (GetWorld()->LineTraceSingleByObjectType(Hit, StartFireLocation, EndFireLocation, FCollisionObjectQueryParams(ECollisionChannel::ECC_Visibility), QueryParams))
		{
			DrawDebugLine(GetWorld(), StartFireLocation, EndFireLocation, FColor::Red, false, 10.f, SDPG_World, 1.f);
			DrawDebugSphere(GetWorld(), Hit.ImpactPoint, 10.f, 12, FColor::Green, false, 10.f, SDPG_World, 1.f);

			UE_LOG(LogTemp, Log, TEXT("������ ����! ���� �� -> %s"), *Hit.Actor->GetName());

			ABaseCharacter* BaseCharacter = Cast<ABaseCharacter>(Hit.Actor);
			if (BaseCharacter != nullptr)
			{
				FPointDamageEvent DamageEvent;
				DamageEvent.DamageTypeClass = nullptr;
				DamageEvent.Damage = DamagePerBullet;
				DamageEvent.HitInfo = Hit;
				DamageEvent.ShotDirection = FireDirection;

				BaseCharacter->TakeDamage(DamagePerBullet, DamageEvent, nullptr, GetOwner());

				//UE_LOG(LogTemp, Log, TEXT("���� ��� ���� ü�� %d"), BaseCharacter->GetCurrentHealth());
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
	return CurrentLeftAmmo > 0 &&  //���� ź ����
		// �̹� Reloading ���� ���¸� Reloading �Ұ�
		IsReloading() == false;
}

void AGun::ServerStartReload_Implementation()
{
	StartReload();
	// �������� ���� Ŭ���̾�Ʈ�鿡�Ե� Reload ȣ���ϵ���..

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
	
	// źâ���� �ִ� MaxAmmoPerMagazine ���� ����,
	// ���� ź���� MaxAmmoPerMagazine ���� �۰� ������ �ش� �Ѿ˸� �帲
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
	if (OwnerPawn && OwnerPawn->IsLocallyControlled()) // Listen �������� �ι� ȣ�� ����ϱ� - HasAuthoriy���ǳֱ�
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
