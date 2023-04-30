// Copyright longPointer* 2023

#pragma once

// -----------------------------------------------------------------------------

#include <Runtime\Core\Public\CoreMinimal.h>
#include <Runtime\Engine\Classes\GameFramework\Character.h>

#include "GuardAI.generated.h"

// -----------------------------------------------------------------------------

class UPawnSensingComponent;

// -----------------------------------------------------------------------------

UENUM(BlueprintType)
enum class EGuardAIState : uint8
{
	Idle,
	Patrolling,
	Suspicious,
	Alerted
};

// -----------------------------------------------------------------------------

UCLASS()
class TOMLOOMANSTARTER_API AGuardAI : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGuardAI();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void OnSeePawn(APawn* InPawn);

	UFUNCTION()
	void OnHearNoise(APawn* InPawn, const FVector& InLocation, float InVolume);

	UFUNCTION()
	void ResetRotation();

	void SetGuardState(EGuardAIState InState);
	
	UFUNCTION(BlueprintImplementableEvent, Category="AI")
	void OnStateChanged(EGuardAIState InState);

	void MoveToNextPatrolPoint(bool InContinue = false);

	UPROPERTY(VisibleAnywhere, Category="Components")
	UPawnSensingComponent* mPawnSenseComponent;

	FRotator mOriginalRotation;
	FTimerHandle mResetRotationTimerHandle;

	UPROPERTY(BlueprintReadWrite, Category = "Components")
	EGuardAIState mGuardState;

	UPROPERTY(BlueprintReadWrite, Category="AI")
	TArray<AActor*> mPatrolPoints;

	AActor* mCurrentPatrolPoint;
	int32 mCurrentPatrolPointIndex;
	EGuardAIState mPrevGuardState;
	
	bool mShouldPatrol;
};

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
