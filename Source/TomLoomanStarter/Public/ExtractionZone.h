// Copyright longPointer* 2023

#pragma once

// -----------------------------------------------------------------------------

#include "CoreMinimal.h"

#include <Runtime\Engine\Classes\GameFramework\Actor.h>

#include "ExtractionZone.generated.h"

// -----------------------------------------------------------------------------

class UBoxComponent;
class UDecalComponent;

UCLASS()
class TOMLOOMANSTARTER_API AExtractionZone : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AExtractionZone();

	UFUNCTION()
	void HandleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(VisibleAnywhere, Category="Components")
	UBoxComponent* mOverlapComp;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UDecalComponent* mDecalComp;

	UPROPERTY(EditDefaultsOnly, Category="SFX")
	USoundBase* mObjectiveMissingSound;

};

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------