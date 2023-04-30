// Copyright longPointer* 2023

#include "GuardAI.h"

#include <Runtime\AIModule\Classes\Blueprint\AIBlueprintHelperLibrary.h>
#include <Runtime\AIModule\Classes\Perception\PawnSensingComponent.h>
#include <Runtime\Engine\Public\DrawDebugHelpers.h>

#include "TomLoomanStarter\Public\TomLoomanStarterGameMode.h"

// -----------------------------------------------------------------------------

// Sets default values
AGuardAI::AGuardAI()
	: mPawnSenseComponent(CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSenseComp")))
	, mOriginalRotation()
	, mResetRotationTimerHandle()
	, mGuardState(EGuardAIState::Idle)
	, mPatrolPoints()
	, mCurrentPatrolPoint()
	, mCurrentPatrolPointIndex(0)
	, mPrevGuardState(EGuardAIState::Idle)
	, mShouldPatrol(true)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mPawnSenseComponent->OnSeePawn.AddDynamic(this, &AGuardAI::OnSeePawn);
	mPawnSenseComponent->OnHearNoise.AddDynamic(this, &AGuardAI::OnHearNoise);
}

// -----------------------------------------------------------------------------

// Called when the game starts or when spawned
void AGuardAI::BeginPlay()
{
	Super::BeginPlay();
	
	mOriginalRotation = GetActorRotation();

	if (mShouldPatrol)
	{
		MoveToNextPatrolPoint();
	}
}
// -----------------------------------------------------------------------------


// Called every frame
void AGuardAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (mCurrentPatrolPoint)
	{
		FVector Location = GetActorLocation() - mCurrentPatrolPoint->GetActorLocation();
		float DistanceToGoal = Location.Size();

		// Check if we are within 75 units of our goal, if so - pick a new patrol point
		// Keep in mind this includes vertical height difference! If your patrol point is in the floor, the distance to the pivot of guard is higher
		// In that case you may need to increase this value in your project or better align control points (ideally you remove Z axis all together by using
		// Alternative: float DistanceToGoal = FMath::Distance2D(GetActorLocation(), CurrentPatrolPoint->GetActorLocation());
		if (DistanceToGoal < 75.f)
		{
			MoveToNextPatrolPoint();
		}
	}
}

// -----------------------------------------------------------------------------

// Called to bind functionality to input
void AGuardAI::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

// -----------------------------------------------------------------------------

void AGuardAI::OnSeePawn(APawn* InPawn)
{
	if (InPawn)
	{
		if (UWorld* World = GetWorld())
		{
			if (ATomLoomanStarterGameMode* Gamemode = Cast<ATomLoomanStarterGameMode>(World->GetAuthGameMode()))
			{
				Gamemode->CompleteMission(InPawn, false);
			}
		}

		SetGuardState(EGuardAIState::Alerted);
		mShouldPatrol = false;
		//DrawDebugSphere(GetWorld(), InPawn->GetActorLocation(), 32.f, 12, FColor::Yellow, false, 10.f);
	}
}

// -----------------------------------------------------------------------------

void AGuardAI::OnHearNoise(APawn* InPawn, const FVector& InLocation, float InVolume)
{
	if (mGuardState != EGuardAIState::Alerted)
	{
		DrawDebugSphere(GetWorld(), InLocation, 32.f, 12, FColor::Red, false, 10.f);

		FVector Direction = InLocation - GetActorLocation();
		Direction.Normalize();

		FRotator LookAtRotation = FRotationMatrix::MakeFromX(Direction).Rotator();
		LookAtRotation.Pitch = 0.f;
		LookAtRotation.Roll = 0.f;

		SetActorRotation(LookAtRotation);

		FTimerManager& WorldTimerManager = GetWorldTimerManager();
		WorldTimerManager.ClearTimer(mResetRotationTimerHandle);
		WorldTimerManager.SetTimer(mResetRotationTimerHandle, this, &AGuardAI::ResetRotation, 3.0f);

		SetGuardState(EGuardAIState::Suspicious);
	}
}

// -----------------------------------------------------------------------------

void AGuardAI::ResetRotation()
{
	if (mGuardState != EGuardAIState::Alerted)
	{
		SetActorRotation(mOriginalRotation);
		if (mShouldPatrol)
		{
			SetGuardState(EGuardAIState::Patrolling);
			MoveToNextPatrolPoint(true);
		}
		else
		{
			SetGuardState(EGuardAIState::Idle);
		}
	}
}

// -----------------------------------------------------------------------------

void AGuardAI::SetGuardState(EGuardAIState InState)
{
	if (InState == mGuardState)
	{
		return;
	}

	mGuardState = InState;

	if (mGuardState == EGuardAIState::Alerted || mGuardState == EGuardAIState::Suspicious)
	{
		if (Controller)
		{
			Controller->StopMovement();
		}
	}

	OnStateChanged(mGuardState);
}

// -----------------------------------------------------------------------------

void AGuardAI::MoveToNextPatrolPoint(bool InContinue /* = false */)
{
	if (!InContinue)
	{
		if (++mCurrentPatrolPointIndex < mPatrolPoints.Num())
		{
			mCurrentPatrolPoint = mPatrolPoints[mCurrentPatrolPointIndex];
		}
		else
		{
			mCurrentPatrolPoint = mPatrolPoints[0];
			mCurrentPatrolPointIndex = 0;
		}
	}

	UAIBlueprintHelperLibrary::SimpleMoveToActor(GetController(), mCurrentPatrolPoint);
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
