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
struct FHitResult;
#ifdef CHALLENGES_Blackhole_generated_h
#error "Blackhole.generated.h already included, missing '#pragma once' in Blackhole.h"
#endif
#define CHALLENGES_Blackhole_generated_h

#define TomLoomanStarter_Source_Challenges_Private_Blackhole_h_25_SPARSE_DATA
#define TomLoomanStarter_Source_Challenges_Private_Blackhole_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOverlapInnerSphere);


#define TomLoomanStarter_Source_Challenges_Private_Blackhole_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOverlapInnerSphere);


#define TomLoomanStarter_Source_Challenges_Private_Blackhole_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlackhole(); \
	friend struct Z_Construct_UClass_ABlackhole_Statics; \
public: \
	DECLARE_CLASS(ABlackhole, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Challenges"), NO_API) \
	DECLARE_SERIALIZER(ABlackhole)


#define TomLoomanStarter_Source_Challenges_Private_Blackhole_h_25_INCLASS \
private: \
	static void StaticRegisterNativesABlackhole(); \
	friend struct Z_Construct_UClass_ABlackhole_Statics; \
public: \
	DECLARE_CLASS(ABlackhole, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Challenges"), NO_API) \
	DECLARE_SERIALIZER(ABlackhole)


#define TomLoomanStarter_Source_Challenges_Private_Blackhole_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlackhole(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlackhole) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlackhole); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlackhole); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlackhole(ABlackhole&&); \
	NO_API ABlackhole(const ABlackhole&); \
public:


#define TomLoomanStarter_Source_Challenges_Private_Blackhole_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlackhole(ABlackhole&&); \
	NO_API ABlackhole(const ABlackhole&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlackhole); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlackhole); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlackhole)


#define TomLoomanStarter_Source_Challenges_Private_Blackhole_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mMeshComp() { return STRUCT_OFFSET(ABlackhole, mMeshComp); } \
	FORCEINLINE static uint32 __PPO__mInnerSphereComponent() { return STRUCT_OFFSET(ABlackhole, mInnerSphereComponent); } \
	FORCEINLINE static uint32 __PPO__mOuterSphereComponent() { return STRUCT_OFFSET(ABlackhole, mOuterSphereComponent); }


#define TomLoomanStarter_Source_Challenges_Private_Blackhole_h_22_PROLOG
#define TomLoomanStarter_Source_Challenges_Private_Blackhole_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TomLoomanStarter_Source_Challenges_Private_Blackhole_h_25_PRIVATE_PROPERTY_OFFSET \
	TomLoomanStarter_Source_Challenges_Private_Blackhole_h_25_SPARSE_DATA \
	TomLoomanStarter_Source_Challenges_Private_Blackhole_h_25_RPC_WRAPPERS \
	TomLoomanStarter_Source_Challenges_Private_Blackhole_h_25_INCLASS \
	TomLoomanStarter_Source_Challenges_Private_Blackhole_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TomLoomanStarter_Source_Challenges_Private_Blackhole_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TomLoomanStarter_Source_Challenges_Private_Blackhole_h_25_PRIVATE_PROPERTY_OFFSET \
	TomLoomanStarter_Source_Challenges_Private_Blackhole_h_25_SPARSE_DATA \
	TomLoomanStarter_Source_Challenges_Private_Blackhole_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	TomLoomanStarter_Source_Challenges_Private_Blackhole_h_25_INCLASS_NO_PURE_DECLS \
	TomLoomanStarter_Source_Challenges_Private_Blackhole_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHALLENGES_API UClass* StaticClass<class ABlackhole>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TomLoomanStarter_Source_Challenges_Private_Blackhole_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
