// Copyright longPointer

// -----------------------------------------------------------------------------

#pragma once

// -----------------------------------------------------------------------------

#include "Runtime\Core\Public\CoreMinimal.h"
#include "Runtime\Engine\Classes\GameFramework\Actor.h"

#include "ObjectiveActor.generated.h"

// -----------------------------------------------------------------------------

class USphereComponent;
class UStaticMeshComponent;
class UParticleSystem;

// -----------------------------------------------------------------------------

UCLASS(BlueprintType, Blueprintable)
class OBJECTIVEACTOR_API AObjectiveActor : public AActor
{
	GENERATED_BODY()

public:
	AObjectiveActor();

	// AActor
	virtual void BeginPlay() override;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	// ~AActor

private:
	void PlayVFX();

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* mMeshComp;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	USphereComponent* mSphereComp;

	UPROPERTY(EditDefaultsOnly, Category = "VFX")
	UParticleSystem* mPickupVFX;
};

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------