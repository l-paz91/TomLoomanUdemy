// Copyright longPointer* 2023

#include "ExtractionZone.h"

#include <Runtime\Engine\Classes\Components\BoxComponent.h>
#include <Runtime\Engine\Classes\Components\DecalComponent.h>
#include <Runtime\Engine\Classes\Kismet\GameplayStatics.h>

#include "TomLoomanStarter\Public\TomLoomanStarterCharacter.h"
#include "TomLoomanStarter\Public\TomLoomanStarterGameMode.h"

// -----------------------------------------------------------------------------

// Sets default values
AExtractionZone::AExtractionZone()
	: mOverlapComp(CreateDefaultSubobject<UBoxComponent>(TEXT("OverlapComp")))
	, mDecalComp(CreateDefaultSubobject<UDecalComponent>(TEXT("DecalComp")))
	, mObjectiveMissingSound()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = mOverlapComp;
	mOverlapComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	mOverlapComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	mOverlapComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	mOverlapComp->SetBoxExtent(FVector(200.0f));
	mOverlapComp->SetHiddenInGame(false);
	mOverlapComp->OnComponentBeginOverlap.AddDynamic(this, &AExtractionZone::HandleOverlap);

	mDecalComp->DecalSize = FVector(200.0f);
	mDecalComp->SetupAttachment(RootComponent);
}

// -----------------------------------------------------------------------------

void AExtractionZone::HandleOverlap(
	UPrimitiveComponent* OverlappedComponent, 
	AActor* OtherActor, 
	UPrimitiveComponent* OtherComp, 
	int32 OtherBodyIndex, 
	bool bFromSweep, 
	const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Log, TEXT("AExtractionZone::HandleOverlap called"));

	if(ATomLoomanStarterCharacter* Character = Cast<ATomLoomanStarterCharacter>(OtherActor))
	{
		if (Character->mIsCarryingObjective)
		{
			if (UWorld* World = GetWorld())
			{
				if (ATomLoomanStarterGameMode* Gamemode = Cast<ATomLoomanStarterGameMode>(World->GetAuthGameMode()))
				{
					Gamemode->CompleteMission(Character, true);
				}
			}
		}
		else
		{
			UGameplayStatics::PlaySound2D(this, mObjectiveMissingSound);
		}
	}
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
