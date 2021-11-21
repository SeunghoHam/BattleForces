// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AOTGameState.h"
#include "AOTDefenceGameState.generated.h"

/**
 * 
 */
UCLASS()
class BATTLEFORCES_API AAOTDefenceGameState : public AAOTGameState
{
	GENERATED_BODY()
	
public:

	AAOTDefenceGameState();

	virtual void Tick(float DeltaTime) override;

	void OnStartRound();

	void OnEndRound(int WinnerTeam);

	UFUNCTION(BlueprintCallable)
	bool GetIsRoundEnded() const { return IsRoundEnded; }

	UFUNCTION(BlueprintCallable)
	int GetATeamPoint() const { return ATeamPoint; }
	UFUNCTION(BlueprintCallable)
	int GetBTeamPoint() const { return BTeamPoint; }


	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


protected:
	virtual void HandleMatchIsWaitingToStart() override;
	
	
	void OnEndPrepartion(); // Prepartion = 준비라는 뜻


	UFUNCTION(BlueprintCallable, BlueprintPure)
		float GetPreparatoryRemainTime() { return PreparatoryRemainTime; }

	 UFUNCTION()
		 void OnRep_IsRoundEnded() {}
private:
	// 준비 단계 타이머의 남은 시간
	UPROPERTY(Replicated) 
	float PreparatoryRemainTime; // 직역 : 준비 잔여 시간

	FTimerHandle PreparatoryCountTimerHandle;

	UPROPERTY(ReplicatedUsing = OnRep_IsRoundEnded)
	bool IsRoundEnded;

	UPROPERTY(Replicated)
	int LastRoundWinnerTeam;

	UPROPERTY(Replicated)
	int ATeamPoint;

	UPROPERTY(Replicated)
	int BTeamPoint;
};
