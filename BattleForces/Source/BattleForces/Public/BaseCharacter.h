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
	TSubclassOf<AGun> EquipGunType; // ������ ���� �Լ�. GunType�� �Ļ� Ŭ���������� ������ �� �ְ� �Ѵ�.
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
	
	/*�ѱ�¾� ���� �Լ�*/
	virtual void SetupWeapon();
	
	UFUNCTION(BlueprintImplementableEvent)
	void OnSetupWeapon();

	UFUNCTION()
	virtual void OnRep_WeaponActor();
protected:
	UPROPERTY(BlueprintReadWrite, ReplicatedUsing = OnRep_WeaponActor)
	AActor* WeaponActor;


protected:
	/*Fire ���� �Լ�*/
	UFUNCTION(BlueprintImplementableEvent) // �������Ʈ���� �����Ѵٴ� �ǹ��� ������
	void OnPressedFire();

	/*Grapping ���� �Լ�*/
	UFUNCTION(BlueprintImplementableEvent)
	void OnPressedGrappingR();

	UFUNCTION(BlueprintImplementableEvent)
	void OnPressedGrappingL();

	UFUNCTION(Server, Reliable)
	void ServerGrappingR();

	UFUNCTION(NetMulticast, Reliable)
	void MulticastGrappingR(bool NeedIncludeAutonomousProxy);
	/*Jump ���� �Լ�*/
	/*
	UFUNCTION(BlueprintImplementableEvent)
	void OnJump();

	UFUNCTION(Server, Reliable)
	void ServerJump();

	UFUNCTION(NetMulticast, Reliable)
	void MulticastJump(bool NeedIncludeAutonomousProxy);
public :
	// ���� �Լ�
	UFUNCTION(BlueprintCallable)
	virtual void Jump();
	*/




	/*Reload ���� �Լ�*/

	/*ü�� ���� �Լ�*/
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

	UFUNCTION(BlueprintImplementableEvent) // �������Ʈ���� ����
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
