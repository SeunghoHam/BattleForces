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

	//에디터로 실행할때만 true가 되겠다? (정확한 의미 모름) : 속성값을 변경할때 호출됨?
#if WITH_EDITOR 
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	// 총 이름 EditDefaultsOnly
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FText GunName;
protected:
	/*Fire 관련 함수*/
	// 다른 클라이언트에게 동기화
	UFUNCTION(BlueprintImplementableEvent)
	void OnFire();

	UFUNCTION(Server, Reliable)
	void ServerFire();

	UFUNCTION(NetMulticast, Reliable)
	void MulticastFire(bool NeedIncludeAutonomousProxy);

public:
	// 현재 발사 가능한지 체크
	UFUNCTION(BlueprintCallable)
	virtual bool CanFire() const;

protected:
	/*Reload 관련*/
	UFUNCTION(BlueprintImplementableEvent)
	void OnStartReload();
	 
	UFUNCTION(BlueprintImplementableEvent)
	void OnEndReload();

	UFUNCTION(Server, Reliable)
	void ServerStartReload();


	UFUNCTION(NetMulticast, Reliable)
	void MulticastStartReload();

	// 리로드가 시작했는지
	UPROPERTY(BlueprintReadOnly)
	bool bIsStartedReload;
	
	virtual void StartReload(); // Reload 애니메이션 시작 
public:
	

	UFUNCTION(BlueprintCallable)
	virtual void EndReload(); // 실제 Reload동작


	// 재장전
	virtual bool TryReload();

	// Reload가능한지 체크
	UFUNCTION(BlueprintCallable)
	virtual bool CanReload() const;

	// 현재 Reloading 상태인지 체크
	// BlueprintNativeEvent = 기본적으로 블루프린트에서 정의한 함수가 실행,
	// 호출하지 않았다면 c++에있는 함수 정의가 호출
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent) 
	bool IsReloading() const;
	
	virtual void Fire();
	// 총알이 발사될 위치 반환
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		FVector GetMuzzleLocation() const;




	/*Bullet Damage 관련*/
	// 총알 한발 데미지 양
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int DamagePerBullet;

	/*Bullet 갯수 관련*/
	// 탄창 당 최대 탄 개수
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		int MaxAmmoPerMagazine;

	// 처음 시작 시 가지게 될 탄 개수
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		int InitialAmmoCount;

protected:
	// 현재 가지고 있는 남은 탄 개수
	UPROPERTY(Replicated, VisibleDefaultsOnly, BlueprintReadOnly)
	int CurrentLeftAmmo;

	// 현재 탄창에 남은 총알 개수
	UPROPERTY(Replicated, EditDefaultsOnly, BlueprintReadOnly)
	int LeftAmmoInMagazine;


};
