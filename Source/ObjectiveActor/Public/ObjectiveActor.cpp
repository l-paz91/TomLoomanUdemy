// Copyright longPointer

// -----------------------------------------------------------------------------

#include "ObjectiveActor\Private\ObjectiveActor.h"

#include <Runtime\Engine\Classes\Components\SphereComponent.h>
#include <Runtime\Engine\Classes\Components\StaticMeshComponent.h>
#include <Runtime\Engine\Classes\Kismet\GameplayStatics.h>
#include <Runtime\Engine\Classes\Particles\ParticleSystem.h>

#include <TomLoomanStarter\Public\TomLoomanStarterCharacter.h>

// -----------------------------------------------------------------------------

AObjectiveActor::AObjectiveActor()
	: AActor()
	, mMeshComp(CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp")))
	, mSphereComp(CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp")))
{
	PrimaryActorTick.bCanEverTick = false;

	RootComponent = mMeshComp;
	mMeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	mSphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	mSphereComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	mSphereComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	mSphereComp->SetupAttachment(mMeshComp);
}

// -----------------------------------------------------------------------------

void AObjectiveActor::BeginPlay()
{
	Super::BeginPlay();

	PlayVFX();
}

// -----------------------------------------------------------------------------

void AObjectiveActor::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	PlayVFX();

	if (ATomLoomanStarterCharacter* Character = Cast<ATomLoomanStarterCharacter>(OtherActor))
	{
		Character->mIsCarryingObjective = true;

		//if (GEngine)
		//{
		//	const FString msg = FString::Printf(TEXT("Carried Objective: %s"), Character->mIsCarryingObjective ? TEXT("TRUE") : TEXT("FALSE"));
		//	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, *msg);
		//}

		// destroy the actor now
		Destroy();
	}
}

// -----------------------------------------------------------------------------

void AObjectiveActor::PlayVFX()
{
	UGameplayStatics::SpawnEmitterAtLocation(this, mPickupVFX, GetActorLocation());
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------