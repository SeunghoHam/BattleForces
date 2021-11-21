// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "AOTGameState.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable) // tpye = bp에서 변수로 선언이 가능한 타입으로 지정
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
