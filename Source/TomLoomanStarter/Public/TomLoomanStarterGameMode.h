// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

// -----------------------------------------------------------------------------

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"

#include "TomLoomanStarterGameMode.generated.h"

// -----------------------------------------------------------------------------

UCLASS(minimalapi)
class ATomLoomanStarterGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ATomLoomanStarterGameMode();

	void CompleteMission(AActor* InActor, bool InMissionSuccess);

	UFUNCTION(BlueprintImplementableEvent, Category="GameMode")
	void OnMissionComplete(AActor* InActor, bool InMissionSuccess);

	UPROPERTY(EditDefaultsOnly, Category="Spectating")
	TSubclassOf<AActor> mSpectatingViewpoint;
};

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------

