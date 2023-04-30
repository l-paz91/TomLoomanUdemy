// Copyright longPointer

// -----------------------------------------------------------------------------

#pragma once

// -----------------------------------------------------------------------------

#include "Runtime\Core\Public\CoreMinimal.h"
#include "Runtime\Engine\Classes\GameFramework\Actor.h"

#include "Blackhole.generated.h"

// -----------------------------------------------------------------------------

class UPrimitiveComponent;
class USphereComponent;
class UStaticMeshComponent;

// -----------------------------------------------------------------------------

UCLASS(BlueprintType, Blueprintable)
class CHALLENGES_API ABlackhole : public AActor
{
	GENERATED_BODY()

public:
	ABlackhole();

	// AActor
	//virtual void BeginPlay() override;
	//virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	virtual void Tick(float pDeltaSeconds) override;
	// ~AActor

private:

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* mMeshComp;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	USphereComponent* mInnerSphereComponent;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	USphereComponent* mOuterSphereComponent;

	UFUNCTION()
	void OverlapInnerSphere(UPrimitiveComponent* pOverlappedComp, AActor* pOtherActor, 
		UPrimitiveComponent* pOtherComp, int32 pOtherBodyIndex, bool pFromSweep, const FHitResult& pSweepResult);

};

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------