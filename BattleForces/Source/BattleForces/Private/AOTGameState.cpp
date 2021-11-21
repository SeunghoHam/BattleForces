// Fill out your copyright notice in the Description page of Project Settings.


#include "AOTGameState.h"

void AAOTGameState::HandleMatchIsWaitingToStart()
{
	Super::HandleMatchIsWaitingToStart(); // 이미 있는 함수

	OnHandleMatchWaitingToStart(); // UFUNCITON(BlueprintImplementableEvent) 로 지정해둠
}

void AAOTGameState::HandleMatchHasStarted()
{
	Super::HandleMatchHasStarted();

	OnHandleMatchHasStarted(); //UFUNCITON(BlueprintImplementableEvent) 로 지정해둠
}
