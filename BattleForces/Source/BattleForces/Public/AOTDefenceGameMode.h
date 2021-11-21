// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "AOTDefenceGameMode.generated.h"

/**
 * 
 */
UCLASS()
class BATTLEFORCES_API AAOTDefenceGameMode : public AGameMode
{
	GENERATED_BODY()
	
public:
	AAOTDefenceGameMode();

	float GetPreparationTime() const { return PreparationTime; }

	// 라운드 처리 관련
	UFUNCTION(BlueprintCallable)
	void EndRound(int WinnerTeam);

protected:
	void SwitchNextRound();

protected:
	// 각 라운드 앞 준비시간
	UPROPERTY(EditDefaultsOnly)
	float PreparationTime;

	// 라운드 종료 후 전환까지의 시간
	UPROPERTY(EditDefaultsOnly)
	float RoundSwitchDelayTime;

	// 승리를 위한 포인트
	int WinTeamPointNum;

	FTimerHandle RoundEndTimer;
};
