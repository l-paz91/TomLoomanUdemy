// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TOMLOOMANSTARTER_TomLoomanStarterProjectile_generated_h
#error "TomLoomanStarterProjectile.generated.h already included, missing '#pragma once' in TomLoomanStarterProjectile.h"
#endif
#define TOMLOOMANSTARTER_TomLoomanStarterProjectile_generated_h

#define TomLoomanStarter_Source_TomLoomanStarter_Public_TomLoomanStarterProjectile_h_22_SPARSE_DATA
#define TomLoomanStarter_Source_TomLoomanStarter_Public_TomLoomanStarterProjectile_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define TomLoomanStarter_Source_TomLoomanStarter_Public_TomLoomanStarterProjectile_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define TomLoomanStarter_Source_TomLoomanStarter_Public_TomLoomanStarterProjectile_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATomLoomanStarterProjectile(); \
	friend struct Z_Construct_UClass_ATomLoomanStarterProjectile_Statics; \
public: \
	DECLARE_CLASS(ATomLoomanStarterProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TomLoomanStarter"), NO_API) \
	DECLARE_SERIALIZER(ATomLoomanStarterProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TomLoomanStarter_Source_TomLoomanStarter_Public_TomLoomanStarterProjectile_h_22_INCLASS \
private: \
	static void StaticRegisterNativesATomLoomanStarterProjectile(); \
	friend struct Z_Construct_UClass_ATomLoomanStarterProjectile_Statics; \
public: \
	DECLARE_CLASS(ATomLoomanStarterProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TomLoomanStarter"), NO_API) \
	DECLARE_SERIALIZER(ATomLoomanStarterProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TomLoomanStarter_Source_TomLoomanStarter_Public_TomLoomanStarterProjectile_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATomLoomanStarterProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATomLoomanStarterProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATomLoomanStarterProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATomLoomanStarterProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATomLoomanStarterProjectile(ATomLoomanStarterProjectile&&); \
	NO_API ATomLoomanStarterProjectile(const ATomLoomanStarterProjectile&); \
public:


#define TomLoomanStarter_Source_TomLoomanStarter_Public_TomLoomanStarterProjectile_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATomLoomanStarterProjectile(ATomLoomanStarterProjectile&&); \
	NO_API ATomLoomanStarterProjectile(const ATomLoomanStarterProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATomLoomanStarterProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATomLoomanStarterProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATomLoomanStarterProjectile)


#define TomLoomanStarter_Source_TomLoomanStarter_Public_TomLoomanStarterProjectile_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ATomLoomanStarterProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ATomLoomanStarterProjectile, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__mExplosionEffect() { return STRUCT_OFFSET(ATomLoomanStarterProjectile, mExplosionEffect); }


#define TomLoomanStarter_Source_TomLoomanStarter_Public_TomLoomanStarterProjectile_h_19_PROLOG
#define TomLoomanStarter_Source_TomLoomanStarter_Public_TomLoomanStarterProjectile_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TomLoomanStarter_Source_TomLoomanStarter_Public_TomLoomanStarterProjectile_h_22_PRIVATE_PROPERTY_OFFSET \
	TomLoomanStarter_Source_TomLoomanStarter_Public_TomLoomanStarterProjectile_h_22_SPARSE_DATA \
	TomLoomanStarter_Source_TomLoomanStarter_Public_TomLoomanStarterProjectile_h_22_RPC_WRAPPERS \
	TomLoomanStarter_Source_TomLoomanStarter_Public_TomLoomanStarterProjectile_h_22_INCLASS \
	TomLoomanStarter_Source_TomLoomanStarter_Public_TomLoomanStarterProjectile_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TomLoomanStarter_Source_TomLoomanStarter_Public_TomLoomanStarterProjectile_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TomLoomanStarter_Source_TomLoomanStarter_Public_TomLoomanStarterProjectile_h_22_PRIVATE_PROPERTY_OFFSET \
	TomLoomanStarter_Source_TomLoomanStarter_Public_TomLoomanStarterProjectile_h_22_SPARSE_DATA \
	TomLoomanStarter_Source_TomLoomanStarter_Public_TomLoomanStarterProjectile_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	TomLoomanStarter_Source_TomLoomanStarter_Public_TomLoomanStarterProjectile_h_22_INCLASS_NO_PURE_DECLS \
	TomLoomanStarter_Source_TomLoomanStarter_Public_TomLoomanStarterProjectile_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOMLOOMANSTARTER_API UClass* StaticClass<class ATomLoomanStarterProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TomLoomanStarter_Source_TomLoomanStarter_Public_TomLoomanStarterProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
