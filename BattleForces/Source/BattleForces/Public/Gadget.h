// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Gadget.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UGadget : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BATTLEFORCES_API IGadget
{
	GENERATED_BODY()

	
public:

	virtual void UseGadget(ACharacter*User) = 0;
};
