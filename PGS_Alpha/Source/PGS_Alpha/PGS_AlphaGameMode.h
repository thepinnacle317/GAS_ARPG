// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PGS_AlphaGameMode.generated.h"

/**
 *  Simple GameMode for a third person game
 */
UCLASS(abstract)
class APGS_AlphaGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	
	/** Constructor */
	APGS_AlphaGameMode();
};



