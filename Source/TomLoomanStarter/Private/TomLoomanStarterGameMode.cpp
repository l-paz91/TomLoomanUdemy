// Copyright Epic Games, Inc. All Rights Reserved.

#include "TomLoomanStarterGameMode.h"

#include <Runtime\CoreUObject\Public\UObject\ConstructorHelpers.h>
#include <Runtime\Engine\Classes\Kismet\GameplayStatics.h>

#include "TomLoomanStarterCharacter.h"
#include "TomLoomanStarterHUD.h"

// -----------------------------------------------------------------------------

ATomLoomanStarterGameMode::ATomLoomanStarterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATomLoomanStarterHUD::StaticClass();
}

// -----------------------------------------------------------------------------

void ATomLoomanStarterGameMode::CompleteMission(AActor* InActor, bool InMissionSuccess)
{
	if (APawn* Character = Cast<APawn>(InActor))
	{
		if (APlayerController* Controller = Cast<APlayerController>(Character->GetController()))
		{
			Character->DisableInput(Controller);

			if (mSpectatingViewpoint)
			{
				TArray<AActor*> ReturnedActors;
				UGameplayStatics::GetAllActorsOfClass(this, mSpectatingViewpoint, ReturnedActors);
				if (ReturnedActors.Num())
				{
					Controller->SetViewTargetWithBlend(ReturnedActors[0], 1.5, EViewTargetBlendFunction::VTBlend_Cubic);
				}
			}
		}
	}

	OnMissionComplete(InActor, InMissionSuccess);
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
