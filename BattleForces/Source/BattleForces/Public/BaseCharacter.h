// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Gun.h"
#include "BaseCharacter.generated.h"

UCLASS()
class BATTLEFORCES_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();
	
	//UPROPERTY(EditDefaultsOnly, EditAnywhere)
	UPROPERTY(EditAnywhere)
	TSubclassOf<AGun> EquipGunType; // 안전성 보장 함수. GunType을 파생 클래스에서만 지정할 수 있게 한다.
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveForward(float AxisValue);

	void MoveRight(float AxisValue);

	void Turn(float AxisValue);

	void LookUp(float AxisValue);

	void PressedFire();

	void ReleasedFire();

	void PressedReload();

	void PressedJump();

	void PressedGrappingR();

	void PressedGrappingL();
	
	/*총기셋업 관련 함수*/
	virtual void SetupWeapon();
	
	UFUNCTION(BlueprintImplementableEvent)
	void OnSetupWeapon();

	UFUNCTION()
	virtual void OnRep_WeaponActor();
protected:
	UPROPERTY(BlueprintReadWrite, ReplicatedUsing = OnRep_WeaponActor)
	AActor* WeaponActor;


protected:
	/*Fire 관련 함수*/
	UFUNCTION(BlueprintImplementableEvent) // 블루프린트에서 정의한다는 의미의 지정어
	void OnPressedFire();

	/*Grapping 관련 함수*/
	UFUNCTION(BlueprintImplementableEvent)
	void OnPressedGrappingR();

	UFUNCTION(BlueprintImplementableEvent)
	void OnPressedGrappingL();

	UFUNCTION(Server, Reliable)
	void ServerGrappingR();

	UFUNCTION(NetMulticast, Reliable)
	void MulticastGrappingR(bool NeedIncludeAutonomousProxy);
	/*Jump 관련 함수*/
	/*
	UFUNCTION(BlueprintImplementableEvent)
	void OnJump();

	UFUNCTION(Server, Reliable)
	void ServerJump();

	UFUNCTION(NetMulticast, Reliable)
	void MulticastJump(bool NeedIncludeAutonomousProxy);
public :
	// 점프 함수
	UFUNCTION(BlueprintCallable)
	virtual void Jump();
	*/




	/*Reload 관련 함수*/

	/*체력 관련 함수*/
	UPROPERTY(EditDefaultsOnly)
	int MaxHealth;
	UPROPERTY(BlueprintReadWrite)
	int CurrentHealth;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_IsDead)
	bool IsDead;

	UFUNCTION()
	void OnRep_IsDead();
public: 
	virtual void Die();

	UFUNCTION(BlueprintImplementableEvent) // 블루프린트에서 정의
	void OnDie();
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

	int GetCurrentHealh() const { return CurrentHealth; }

protected:

};
