// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacter.h"
#include "Net/UnrealNetwork.h"

// Sets default values
ABaseCharacter::ABaseCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MaxHealth = 100;
	CurrentHealth = MaxHealth;
}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{

	if (HasAuthority())
	{
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.Owner = this;
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		WeaponActor = GetWorld()->SpawnActor(EquipGunType, &FTransform::Identity, SpawnParameters);
	}


	Super::BeginPlay();

	if (HasAuthority())
	{
		SetupWeapon();
	}


}


// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &ABaseCharacter::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &ABaseCharacter::MoveRight);

	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ABaseCharacter::Turn);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &ABaseCharacter::LookUp);

	PlayerInputComponent->BindAction(TEXT("Fire"), EInputEvent::IE_Pressed, this, &ABaseCharacter::PressedFire);
	PlayerInputComponent->BindAction(TEXT("Fire"), EInputEvent::IE_Released, this, &ABaseCharacter::ReleasedFire);

	PlayerInputComponent->BindAction(TEXT("GrappingR"), EInputEvent::IE_Pressed, this, &ABaseCharacter::PressedGrappingR);
	PlayerInputComponent->BindAction(TEXT("GrappingL"), EInputEvent::IE_Pressed, this, &ABaseCharacter::PressedGrappingL);

	PlayerInputComponent->BindAction(TEXT("Reload"), EInputEvent::IE_Pressed, this, &ABaseCharacter::PressedReload);

	//PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &ABaseCharacter::PressedJump);


}

void ABaseCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ABaseCharacter, WeaponActor);
	DOREPLIFETIME(ABaseCharacter, IsDead);
}

float ABaseCharacter::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{
	CurrentHealth -= DamageAmount;

	if (CurrentHealth <= 0)
	{
		IsDead = true;
		Die();
	}

	return Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
}
void ABaseCharacter::MoveForward(float AxisValue)
{
	FRotator ControlRotation = FRotator(0, GetControlRotation().Yaw, 0);
	FVector WorldDirection = FRotationMatrix(ControlRotation).GetUnitAxis(EAxis::X);

	AddMovementInput(WorldDirection, AxisValue);
}

void ABaseCharacter::MoveRight(float AxisValue)
{
	FRotator ControlRotation = FRotator(0, GetControlRotation().Yaw, 0);
	FVector WorldDirection = FRotationMatrix(ControlRotation).GetUnitAxis(EAxis::Y);

	AddMovementInput(WorldDirection, AxisValue);
}

void ABaseCharacter::Turn(float AxisValue)
{
	AddControllerYawInput(AxisValue);
}

void ABaseCharacter::LookUp(float AxisValue)
{
	AddControllerPitchInput(AxisValue);
}

void ABaseCharacter::PressedFire()
{
	if (IsDead)
		return;
	AGun* Gun = Cast<AGun>(WeaponActor);
	if (Gun)
	{
		Gun->Fire();
	}

	OnPressedFire();
}

void ABaseCharacter::ReleasedFire()
{

}

void ABaseCharacter::PressedReload()
{
	// 죽었을 경우 Reload 불가
	if (IsDead)
		return;
	AGun* Gun = Cast<AGun>(WeaponActor);
	if (Gun)
	{
		Gun->TryReload();
	}
}

void ABaseCharacter::PressedGrappingR()
{
	if (GetNetMode() != ENetMode::NM_Standalone) // 넷모드 StandAlone 아닐때
	{
		if (IsLocallyControlled()) // 직접 조종중인 캐릭터에서만.
		{
			if (HasAuthority()) // 서버에서 호출한 경우 모든 클라에게 동기화
			{
				UE_LOG(LogTemp, Log, TEXT("GrappingR->Multicast Grapping"));
				MulticastGrappingR(true);
			}
			else // 클라에서 호출한 경우 (HasAuthority = false) 서버로 동기화
			{
				UE_LOG(LogTemp, Log, TEXT("GrappingR->Server Grapping"));
				ServerGrappingR();
			}
		}
	}
	
	
	OnPressedGrappingR();
}

void ABaseCharacter::PressedGrappingL()
{
	OnPressedGrappingL();
}
void ABaseCharacter::ServerGrappingR_Implementation()
{
	PressedGrappingR();
	UE_LOG(LogTemp, Log, TEXT("ServerGrapping_Implementation"));
	// 서버에서 호출할 것
	MulticastGrappingR(false);
}

void ABaseCharacter::MulticastGrappingR_Implementation(bool NeedIncludeAutonomousProxy)
{
	if (HasAuthority() == false) // 서버에서 실행 안되게( 두번 실행 방지 )
	{
		if (NeedIncludeAutonomousProxy) // True
		{
			PressedGrappingR();
		}
		else // False
		{
			if (GetLocalRole() == ROLE_SimulatedProxy) // SimulateProxy일때 = 나 말고 다른 캐릭터들
			{
				PressedGrappingR();
			}
		}
	}
	
}
void ABaseCharacter::OnRep_IsDead()
{
	Die();
}

void ABaseCharacter::Die()
{
	//UE_LOG(LogTemp, Log, TEXT("OnDie 호출이다"));
	OnDie();
	
}

/*
void ABaseCharacter::ServerJump_Implementation()
{
	Jump();

	MulticastJump(false);
}

void ABaseCharacter::MulticastJump_Implementation(bool NeedIncludeAutonomousProxy)
{
	if (HasAuthority() == false) // 서버가 아닐때
	{
		if (NeedIncludeAutonomousProxy) // 인자값 True라면
		{
			Jump();
		}
		else // 인자값 False라면
		{
			if (GetLocalRole() == ROLE_SimulatedProxy) // LocalRole = SimulatedRroxy = 동작중이지 않은 클라이언트들
			{
				Jump();
			}
		}
	}
}
void ABaseCharacter::Jump()
{
	if (GetNetMode() != ENetMode::NM_Standalone)
	{
		//APawn* Pawn = Cast<APawn>(GetOwner());
		if (IsLocallyControlled())
		{
			if (HasAuthority())
			{
				MulticastJump(true);
			}
			else
			{
				ServerJump();
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("ABaseCharacter::Jump() else문 동작"));
			// 컨트롤 중이지 않음
		}
	}

	OnJump();
}
void ABaseCharacter::PressedJump()
{
	// 플레이어 죽엇는지 검사


	Jump();
}
*/

void ABaseCharacter::OnRep_WeaponActor()
{
	SetupWeapon();
}


void ABaseCharacter::SetupWeapon()
{
	OnSetupWeapon(); // OnRep_WeaponActor에서 SetupWeapon을 호출, 
}


