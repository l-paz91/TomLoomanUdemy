// Copyright longPointer

// -----------------------------------------------------------------------------

#include "Challenges\Private\Blackhole.h"

#include <Runtime\Engine\Classes\Components\PrimitiveComponent.h>
#include <Runtime\Engine\Classes\Components\SphereComponent.h>
#include <Runtime\Engine\Classes\Components\StaticMeshComponent.h>

// -----------------------------------------------------------------------------

namespace
{
	namespace BlackholePrivate
	{
		constexpr int32 innerSphereRadius = 100;
		constexpr int32 outerSphereRadius = 3000;
	}
}

// -----------------------------------------------------------------------------

ABlackhole::ABlackhole()
	: AActor()
	, mMeshComp(CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp")))
	, mInnerSphereComponent(CreateDefaultSubobject<USphereComponent>(TEXT("InnerSphereComp")))
	, mOuterSphereComponent(CreateDefaultSubobject<USphereComponent>(TEXT("OuterSphereComp")))
{
	PrimaryActorTick.bCanEverTick = true;

	mMeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RootComponent = mMeshComp;

	mInnerSphereComponent->SetSphereRadius(BlackholePrivate::innerSphereRadius);
	mInnerSphereComponent->SetupAttachment(mMeshComp);

	// bind to event
	mInnerSphereComponent->OnComponentBeginOverlap.AddDynamic(this, &ABlackhole::OverlapInnerSphere);

	mOuterSphereComponent->SetSphereRadius(BlackholePrivate::outerSphereRadius);
	mOuterSphereComponent->SetupAttachment(mMeshComp);
}

// -----------------------------------------------------------------------------

void ABlackhole::Tick(float pDeltaSeconds)
{
	Super::Tick(pDeltaSeconds);

	// find all overlapping component that can collide and may be physically simulating
	TArray<UPrimitiveComponent*> overlappingComps;
	mOuterSphereComponent->GetOverlappingComponents(overlappingComps);

	for (UPrimitiveComponent* primComp : overlappingComps)
	{
		if (primComp && primComp->IsSimulatingPhysics())
		{
			//the component we are looking for! It needs to be simulating in order to apply forces
			const float sphereRadius = mOuterSphereComponent->GetScaledSphereRadius();
			const float forceStrength = -2000;  // negative to make it pull towards origin instead of pushing away

			primComp->AddRadialForce(GetActorLocation(), sphereRadius, forceStrength, ERadialImpulseFalloff::RIF_Constant, true);
		}
	}
}

// -----------------------------------------------------------------------------

void ABlackhole::OverlapInnerSphere(UPrimitiveComponent* pOverlappedComp, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 pOtherBodyIndex, bool pFromSweep, const FHitResult& pSweepResult)
{
	if (pOtherActor)
	{
		pOtherActor->Destroy();
	}
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------


