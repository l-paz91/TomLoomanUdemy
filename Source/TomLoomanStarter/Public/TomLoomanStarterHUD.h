// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TomLoomanStarterHUD.generated.h"

UCLASS()
class ATomLoomanStarterHUD : public AHUD
{
	GENERATED_BODY()

public:
	ATomLoomanStarterHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

