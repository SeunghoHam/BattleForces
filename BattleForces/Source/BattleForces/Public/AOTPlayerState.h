// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AOTPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class BATTLEFORCES_API AAOTPlayerState : public APlayerState
{
	GENERATED_BODY()
	
public:
	AAOTPlayerState();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
		void SetTeam(int32 InTeamId);

	UFUNCTION(Reliable, Server, BlueprintCallable)
		void ServerSetTeam(int32 InTeamId);

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(BlueprintCallable)
		FString GetUniqueIdString() const; //Ŭ���̾�Ʈ�� ������ �� ������ ID

protected:
	UFUNCTION()
		void OnRep_TeamId();

	UFUNCTION(BlueprintImplementableEvent)
		void OnTeamChanged(); // �� ��ü �Լ�
	
	UPROPERTY(Replicatedusing = OnRep_TeamId, BlueprintReadOnly)
		int TeamId;



};
