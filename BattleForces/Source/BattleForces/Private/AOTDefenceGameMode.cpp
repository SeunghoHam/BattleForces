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
	// 플레이어 정리...
	for (TActorIterator<APlayerController> Iter(GetWorld()); Iter; ++Iter)// 종료조건 = 이터레이터 가 null일때
	{
		APlayerController* PlayerController = *Iter; // 이터레이터가 참조하고있는 플레이어 컨트롤러 수정 가능
		if (PlayerController)
		{
			APawn*PosessedPawn = PlayerController->GetPawn();
			if (PosessedPawn)
			{
				PosessedPawn->Destroy();
			}
		}
	}
	// 총 정리...
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
		bool NeedCloseMatch = DefenceGameState->GetATeamPoint() >= WinTeamPointNum || DefenceGameState->GetBTeamPoint() >= WinTeamPointNum; // 매치종료 반환 변수 NeedCloseMatch

		if (NeedCloseMatch) // GameMode.h -> MatchState네임스페이스에 상태 목록 있음
		{
			EndMatch();
		}
		else
		{
			SetMatchState(MatchState::WaitingToStart);
		}
	}
}
