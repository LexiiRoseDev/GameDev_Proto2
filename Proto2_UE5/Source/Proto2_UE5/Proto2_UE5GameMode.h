// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Proto2_UE5GameMode.generated.h"

/**
 *  Simple GameMode for a third person game
 */
UCLASS(abstract)
class AProto2_UE5GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	
	/** Constructor */
	AProto2_UE5GameMode();
};



