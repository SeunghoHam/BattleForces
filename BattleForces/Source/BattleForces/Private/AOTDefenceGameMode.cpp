// Fill out your copyright notice in the Description page of Project Settings.


#include "AOTDefenceGameMode.h"
#include "AOTDefenceGameState.h"
#include "GameFramework/PlayerController.h"
#include "EngineUtils.h"
#include "Gun.h"
AAOTDefenceGameMode::AAOTDefenceGameMode() : PreparationTime(2), RoundSwitchDelayTime(3.f), WinTeamPointNum(3)
{

}

void AAOTDefenceGameMode::EndRound(int WinnerTeam)
{
	AAOTDefenceGameState* DefenceGameState = GetGameState<AAOTDefenceGameState>();

	if (DefenceGameState && DefenceGameState->GetIsRoundEnded())
	{
		DefenceGameState->OnEndRound(WinnerTeam);

		GetWorldTimerManager().SetTimer(RoundEndTimer, this, &AAOTDefenceGameMode::SwitchNextRound, 3.f, false);
	}
}

void AAOTDefenceGameMode::SwitchNextRound()
{
	// �÷��̾� ����...
	for (TActorIterator<APlayerController> Iter(GetWorld()); Iter; ++Iter)// �������� = ���ͷ����� �� null�϶�
	{
		APlayerController* PlayerController = *Iter; // ���ͷ����Ͱ� �����ϰ��ִ� �÷��̾� ��Ʈ�ѷ� ���� ����
		if (PlayerController)
		{
			APawn*PosessedPawn = PlayerController->GetPawn();
			if (PosessedPawn)
			{
				PosessedPawn->Destroy();
			}
		}
	}
	// �� ����...
	for (TActorIterator<AGun> Iter(GetWorld()); Iter; ++Iter)
	{
		if (*Iter)
		{
			Iter->Destroy();
		}
			
	}
	AAOTDefenceGameState* DefenceGameState = GetGameState<AAOTDefenceGameState>();
	
	if (DefenceGameState)
	{
		bool NeedCloseMatch = DefenceGameState->GetATeamPoint() >= WinTeamPointNum || DefenceGameState->GetBTeamPoint() >= WinTeamPointNum; // ��ġ���� ��ȯ ���� NeedCloseMatch

		if (NeedCloseMatch) // GameMode.h -> MatchState���ӽ����̽��� ���� ��� ����
		{
			EndMatch();
		}
		else
		{
			SetMatchState(MatchState::WaitingToStart);
		}
	}
}
