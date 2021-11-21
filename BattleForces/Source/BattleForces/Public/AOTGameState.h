// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "AOTGameState.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable) // tpye = bp���� ������ ������ ������ Ÿ������ ����
class BATTLEFORCES_API AAOTGameState : public AGameState
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent)
		void OnHandleMatchWaitingToStart();
	UFUNCTION(BlueprintImplementableEvent)
		void OnHandleMatchHasStarted();
protected:
	virtual void HandleMatchIsWaitingToStart() override;
	virtual void HandleMatchHasStarted() override;
};
