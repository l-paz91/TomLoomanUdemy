// Copyright longPointer* 2023

#include "Launchpad.h"

#include <Runtime\Engine\Classes\Components\ArrowComponent.h>
#include <Runtime\Engine\Classes\Components\BoxComponent.h>
#include <Runtime\Engine\Classes\Components\StaticMeshComponent.h>
#include <Runtime\Engine\Classes\GameFramework\Character.h>
#include <Runtime\Engine\Classes\Kismet\GameplayStatics.h>

// -----------------------------------------------------------------------------

// Sets default values
ALaunchpad::ALaunchpad()
	: mMeshComp(CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp")))
	, mOverlapComp(CreateDefaultSubobject<UBoxComponent>(TEXT("OverlapComp")))
	, mActivateLaunchPadEffect()
	, mLaunchStrength(1500.0f)
	, mLaunchPitchAngle(35.0f)
{
	RootComponent = mMeshComp;
	mOverlapComp->SetupAttachment(RootComponent);

	mOverlapComp->SetBoxExtent(FVector(75.f, 75.f, 50.f));
	mOverlapComp->OnComponentBeginOverlap.AddDynamic(this, &ALaunchpad::OverlapLaunchPad);
}

// -----------------------------------------------------------------------------

void ALaunchpad::OverlapLaunchPad(
	UPrimitiveComponent* OverlappedComponent, 
	AActor* OtherActor, 
	UPrimitiveComponent* OtherComp, 
	int32 OtherBodyIndex, 
	bool bFromSweep, 
	const FHitResult& SweepResult)
{
	// Make rotator with our specified 'pitch' and convert to a direction vector * intensity
	FRotator LaunchDirection = GetActorRotation();
	LaunchDirection.Pitch += mLaunchPitchAngle;
	FVector LaunchVelocity = LaunchDirection.Vector() * mLaunchStrength;

	if (ACharacter* OtherCharacter = Cast<ACharacter>(OtherActor))
	{
		// Launch Player! Both booleans give consistent launch velocity by ignoring the current player velocity
		OtherCharacter->LaunchCharacter(LaunchVelocity, true, true);

		// Spawn FX
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), mActivateLaunchPadEffect, GetActorLocation());
	}
	else if (OtherComp && OtherComp->IsSimulatingPhysics())
	{
		// Did not overlap a player, so check if it's a physics simulating actor we can launch
		OtherComp->AddImpulse(LaunchVelocity, NAME_None, true);

		// Spawn FX
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), mActivateLaunchPadEffect, GetActorLocation());
	}
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
