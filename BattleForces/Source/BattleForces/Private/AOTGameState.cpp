// Fill out your copyright notice in the Description page of Project Settings.


#include "AOTGameState.h"

void AAOTGameState::HandleMatchIsWaitingToStart()
{
	Super::HandleMatchIsWaitingToStart(); // �̹� �ִ� �Լ�

	OnHandleMatchWaitingToStart(); // UFUNCITON(BlueprintImplementableEvent) �� �����ص�
}

void AAOTGameState::HandleMatchHasStarted()
{
	Super::HandleMatchHasStarted();

	OnHandleMatchHasStarted(); //UFUNCITON(BlueprintImplementableEvent) �� �����ص�
}
