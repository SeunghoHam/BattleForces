// Fill out your copyright notice in the Description page of Project Settings.


#include "AOTPlayerState.h"
#include "Net/UnrealNetwork.h"

AAOTPlayerState::AAOTPlayerState()
{
	// ������
	TeamId = 0; // �⺻ TeamId = 0
}

void AAOTPlayerState::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AAOTPlayerState, TeamId); // TeamId ������ ����ȭ ������ ����Ѵ�.
}

void AAOTPlayerState::SetTeam(int32 InTeamId)
{
	if (HasAuthority())
	{
		TeamId = InTeamId;

		OnTeamChanged(); // Teamchanged ȣ��?
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("SetTeam can call only on server!"));
	}
}

void AAOTPlayerState::ServerSetTeam_Implementation(int32 InTeamId)
{
	SetTeam(InTeamId);
}
void AAOTPlayerState::OnRep_TeamId()
{
	OnTeamChanged();
}

FString AAOTPlayerState::GetUniqueIdString() const
{
	return UniqueId.ToString();
}