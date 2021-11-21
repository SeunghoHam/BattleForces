// Fill out your copyright notice in the Description page of Project Settings.


#include "AOTDefenceGameState.h"
#include "AOTDefenceGameMode.h"
#include "Net/UnrealNetwork.h"
AAOTDefenceGameState::AAOTDefenceGameState()
{
	PrimaryActorTick.bCanEverTick = true;
	LastRoundWinnerTeam = -1;
}

void AAOTDefenceGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AAOTDefenceGameState, PreparatoryRemainTime);
	DOREPLIFETIME(AAOTDefenceGameState, IsRoundEnded);
	DOREPLIFETIME(AAOTDefenceGameState, LastRoundWinnerTeam);
	DOREPLIFETIME(AAOTDefenceGameState, ATeamPoint);
	DOREPLIFETIME(AAOTDefenceGameState, BTeamPoint);
}

void AAOTDefenceGameState::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (HasAuthority()) // 서버에서 실행될 것
	{
		if (PreparatoryCountTimerHandle.IsValid()) // PreparatoryCountTimerHandle 유효성 검사가 되었을 때 == null 이 아닐 때
		{
			PreparatoryRemainTime = GetWorldTimerManager().GetTimerRemaining(PreparatoryCountTimerHandle);
		}
		else
		{
			PreparatoryRemainTime = 0.f;
		}
		
	}
}

void AAOTDefenceGameState::OnStartRound()
{
	IsRoundEnded = false;
}
void AAOTDefenceGameState::OnEndRound(int WinnerTeam)
{
	IsRoundEnded = true;
	LastRoundWinnerTeam = WinnerTeam;

	switch (WinnerTeam)
	{
	case 0:
		ATeamPoint += 1;
		break;
	case 1:
		BTeamPoint += 2;
		break;
	}
}


void AAOTDefenceGameState::HandleMatchIsWaitingToStart()
{
	Super::HandleMatchIsWaitingToStart();

	OnStartRound();

	if (HasAuthority())
	{
		const AAOTDefenceGameMode* DefenceGameMode  = Cast<AAOTDefenceGameMode>(AuthorityGameMode);

		if (DefenceGameMode)
		{
			GetWorldTimerManager().SetTimer(PreparatoryCountTimerHandle, this, &AAOTDefenceGameState::OnEndPrepartion, DefenceGameMode->GetPreparationTime(), false);
		}
		else
		{
			OnEndPrepartion();
		}
	}
	
}

void AAOTDefenceGameState::OnEndPrepartion()
{
	if (HasAuthority()) // 서버에서 실행
	{
		AGameMode* GameMode = Cast<AGameMode>(AuthorityGameMode); // 
		ensure(GameMode);
		GameMode->StartMatch();
	}
}
