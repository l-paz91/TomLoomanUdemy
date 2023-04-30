// Copyright longPointer* 2023

#pragma once

// -----------------------------------------------------------------------------

#include <Runtime\Core\Public\CoreMinimal.h>
#include <Runtime\Engine\Classes\GameFramework\Actor.h>

#include "Launchpad.generated.h"

// -----------------------------------------------------------------------------

UCLASS()
class TOMLOOMANSTARTER_API ALaunchpad : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALaunchpad();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------