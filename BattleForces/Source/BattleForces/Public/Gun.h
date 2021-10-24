// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gun.generated.h"
UCLASS()
class BATTLEFORCES_API AGun : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AGun();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void PostInitProperties() override;

	//�����ͷ� �����Ҷ��� true�� �ǰڴ�? (��Ȯ�� �ǹ� ��) : �Ӽ����� �����Ҷ� ȣ���?
#if WITH_EDITOR 
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	// �� �̸� EditDefaultsOnly
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FText GunName;
protected:
	/*Fire ���� �Լ�*/
	// �ٸ� Ŭ���̾�Ʈ���� ����ȭ
	UFUNCTION(BlueprintImplementableEvent)
	void OnFire();

	UFUNCTION(Server, Reliable)
	void ServerFire();

	UFUNCTION(NetMulticast, Reliable)
	void MulticastFire(bool NeedIncludeAutonomousProxy);

public:
	// ���� �߻� �������� üũ
	UFUNCTION(BlueprintCallable)
	virtual bool CanFire() const;

protected:
	/*Reload ����*/
	UFUNCTION(BlueprintImplementableEvent)
	void OnStartReload();
	 
	UFUNCTION(BlueprintImplementableEvent)
	void OnEndReload();

	UFUNCTION(Server, Reliable)
	void ServerStartReload();


	UFUNCTION(NetMulticast, Reliable)
	void MulticastStartReload();

	// ���ε尡 �����ߴ���
	UPROPERTY(BlueprintReadOnly)
	bool bIsStartedReload;
	
	virtual void StartReload(); // Reload �ִϸ��̼� ���� 
public:
	

	UFUNCTION(BlueprintCallable)
	virtual void EndReload(); // ���� Reload����


	// ������
	virtual bool TryReload();

	// Reload�������� üũ
	UFUNCTION(BlueprintCallable)
	virtual bool CanReload() const;

	// ���� Reloading �������� üũ
	// BlueprintNativeEvent = �⺻������ �������Ʈ���� ������ �Լ��� ����,
	// ȣ������ �ʾҴٸ� c++���ִ� �Լ� ���ǰ� ȣ��
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent) 
	bool IsReloading() const;
	
	virtual void Fire();
	// �Ѿ��� �߻�� ��ġ ��ȯ
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		FVector GetMuzzleLocation() const;




	/*Bullet Damage ����*/
	// �Ѿ� �ѹ� ������ ��
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int DamagePerBullet;

	/*Bullet ���� ����*/
	// źâ �� �ִ� ź ����
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		int MaxAmmoPerMagazine;

	// ó�� ���� �� ������ �� ź ����
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		int InitialAmmoCount;

protected:
	// ���� ������ �ִ� ���� ź ����
	UPROPERTY(Replicated, VisibleDefaultsOnly, BlueprintReadOnly)
	int CurrentLeftAmmo;

	// ���� źâ�� ���� �Ѿ� ����
	UPROPERTY(Replicated, EditDefaultsOnly, BlueprintReadOnly)
	int LeftAmmoInMagazine;


};
