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

	// ���� ó�� ����
	UFUNCTION(BlueprintCallable)
	void EndRound(int WinnerTeam);

protected:
	void SwitchNextRound();

protected:
	// �� ���� �� �غ�ð�
	UPROPERTY(EditDefaultsOnly)
	float PreparationTime;

	// ���� ���� �� ��ȯ������ �ð�
	UPROPERTY(EditDefaultsOnly)
	float RoundSwitchDelayTime;

	// �¸��� ���� ����Ʈ
	int WinTeamPointNum;

	FTimerHandle RoundEndTimer;
};
