// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

// -----------------------------------------------------------------------------

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TomLoomanStarterProjectile.generated.h"

// -----------------------------------------------------------------------------

class USphereComponent;
class UParticleSystem;
class UProjectileMovementComponent;

// -----------------------------------------------------------------------------

UCLASS(config=Game)
class ATomLoomanStarterProjectile : public AActor
{
	GENERATED_BODY()

public:
	ATomLoomanStarterProjectile();

	/** called when projectile hits something */
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	/** Returns CollisionComp subobject **/
	USphereComponent* GetCollisionComp() const { return CollisionComp; }

	/** Returns ProjectileMovement subobject **/
	UProjectileMovementComponent* GetProjectileMovement() const { return ProjectileMovement; }

private:

	/** Sphere collision component */
	UPROPERTY(VisibleDefaultsOnly, Category=Projectile)
	USphereComponent* CollisionComp;

	/** Projectile movement component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(EditDefaultsOnly, Category = "VFX")
	UParticleSystem* mExplosionEffect;
};

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------