// Copyright longPointer* 2023

#pragma once

// -----------------------------------------------------------------------------

#include <Runtime\Core\Public\CoreMinimal.h>
#include <Runtime\Engine\Classes\GameFramework\Actor.h>

#include "Launchpad.generated.h"

// -----------------------------------------------------------------------------

class UBoxComponent;
class UStaticMeshComponent;
class UArrowComponent;

// -----------------------------------------------------------------------------

UCLASS()
class TOMLOOMANSTARTER_API ALaunchpad : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALaunchpad();

	UFUNCTION()
	void OverlapLaunchPad(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* mMeshComp;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UBoxComponent* mOverlapComp;

	UPROPERTY(EditDefaultsOnly, Category = "LaunchPad")
	UParticleSystem* mActivateLaunchPadEffect;

	// Total impulse added to the character on overlap
	UPROPERTY(EditInstanceOnly, Category = "LaunchPad")
	float mLaunchStrength;

	// Angle added on top of actor rotation to launch the character.
	UPROPERTY(EditInstanceOnly, Category = "LaunchPad")
	float mLaunchPitchAngle;
};

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
