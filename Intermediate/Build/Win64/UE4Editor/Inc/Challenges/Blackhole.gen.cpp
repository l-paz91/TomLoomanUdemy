// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Challenges/Private/Blackhole.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackhole() {}
// Cross Module References
	CHALLENGES_API UClass* Z_Construct_UClass_ABlackhole_NoRegister();
	CHALLENGES_API UClass* Z_Construct_UClass_ABlackhole();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Challenges();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABlackhole::execOverlapInnerSphere)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_pOverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_pOtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_pOtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_pOtherBodyIndex);
		P_GET_UBOOL(Z_Param_pFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_pSweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OverlapInnerSphere(Z_Param_pOverlappedComp,Z_Param_pOtherActor,Z_Param_pOtherComp,Z_Param_pOtherBodyIndex,Z_Param_pFromSweep,Z_Param_Out_pSweepResult);
		P_NATIVE_END;
	}
	void ABlackhole::StaticRegisterNativesABlackhole()
	{
		UClass* Class = ABlackhole::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OverlapInnerSphere", &ABlackhole::execOverlapInnerSphere },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABlackhole_OverlapInnerSphere_Statics
	{
		struct Blackhole_eventOverlapInnerSphere_Parms
		{
			UPrimitiveComponent* pOverlappedComp;
			AActor* pOtherActor;
			UPrimitiveComponent* pOtherComp;
			int32 pOtherBodyIndex;
			bool pFromSweep;
			FHitResult pSweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pOverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pOverlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pOtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pOtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pOtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_pOtherBodyIndex;
		static void NewProp_pFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_pFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pSweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pSweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlackhole_OverlapInnerSphere_Statics::NewProp_pOverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlackhole_OverlapInnerSphere_Statics::NewProp_pOverlappedComp = { "pOverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Blackhole_eventOverlapInnerSphere_Parms, pOverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABlackhole_OverlapInnerSphere_Statics::NewProp_pOverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlackhole_OverlapInnerSphere_Statics::NewProp_pOverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlackhole_OverlapInnerSphere_Statics::NewProp_pOtherActor = { "pOtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Blackhole_eventOverlapInnerSphere_Parms, pOtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlackhole_OverlapInnerSphere_Statics::NewProp_pOtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlackhole_OverlapInnerSphere_Statics::NewProp_pOtherComp = { "pOtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Blackhole_eventOverlapInnerSphere_Parms, pOtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABlackhole_OverlapInnerSphere_Statics::NewProp_pOtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlackhole_OverlapInnerSphere_Statics::NewProp_pOtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABlackhole_OverlapInnerSphere_Statics::NewProp_pOtherBodyIndex = { "pOtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Blackhole_eventOverlapInnerSphere_Parms, pOtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABlackhole_OverlapInnerSphere_Statics::NewProp_pFromSweep_SetBit(void* Obj)
	{
		((Blackhole_eventOverlapInnerSphere_Parms*)Obj)->pFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABlackhole_OverlapInnerSphere_Statics::NewProp_pFromSweep = { "pFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Blackhole_eventOverlapInnerSphere_Parms), &Z_Construct_UFunction_ABlackhole_OverlapInnerSphere_Statics::NewProp_pFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlackhole_OverlapInnerSphere_Statics::NewProp_pSweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABlackhole_OverlapInnerSphere_Statics::NewProp_pSweepResult = { "pSweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Blackhole_eventOverlapInnerSphere_Parms, pSweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABlackhole_OverlapInnerSphere_Statics::NewProp_pSweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlackhole_OverlapInnerSphere_Statics::NewProp_pSweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlackhole_OverlapInnerSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlackhole_OverlapInnerSphere_Statics::NewProp_pOverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlackhole_OverlapInnerSphere_Statics::NewProp_pOtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlackhole_OverlapInnerSphere_Statics::NewProp_pOtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlackhole_OverlapInnerSphere_Statics::NewProp_pOtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlackhole_OverlapInnerSphere_Statics::NewProp_pFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlackhole_OverlapInnerSphere_Statics::NewProp_pSweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlackhole_OverlapInnerSphere_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Blackhole.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlackhole_OverlapInnerSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlackhole, nullptr, "OverlapInnerSphere", nullptr, nullptr, sizeof(Blackhole_eventOverlapInnerSphere_Parms), Z_Construct_UFunction_ABlackhole_OverlapInnerSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlackhole_OverlapInnerSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABlackhole_OverlapInnerSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlackhole_OverlapInnerSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABlackhole_OverlapInnerSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABlackhole_OverlapInnerSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABlackhole_NoRegister()
	{
		return ABlackhole::StaticClass();
	}
	struct Z_Construct_UClass_ABlackhole_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mMeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInnerSphereComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mInnerSphereComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOuterSphereComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mOuterSphereComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlackhole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Challenges,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABlackhole_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlackhole_OverlapInnerSphere, "OverlapInnerSphere" }, // 2827218768
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlackhole_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// -----------------------------------------------------------------------------\n" },
		{ "IncludePath", "Blackhole.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Blackhole.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlackhole_Statics::NewProp_mMeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Blackhole.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlackhole_Statics::NewProp_mMeshComp = { "mMeshComp", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlackhole, mMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlackhole_Statics::NewProp_mMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlackhole_Statics::NewProp_mMeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlackhole_Statics::NewProp_mInnerSphereComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Blackhole.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlackhole_Statics::NewProp_mInnerSphereComponent = { "mInnerSphereComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlackhole, mInnerSphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlackhole_Statics::NewProp_mInnerSphereComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlackhole_Statics::NewProp_mInnerSphereComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlackhole_Statics::NewProp_mOuterSphereComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Blackhole.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlackhole_Statics::NewProp_mOuterSphereComponent = { "mOuterSphereComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlackhole, mOuterSphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlackhole_Statics::NewProp_mOuterSphereComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlackhole_Statics::NewProp_mOuterSphereComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlackhole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackhole_Statics::NewProp_mMeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackhole_Statics::NewProp_mInnerSphereComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackhole_Statics::NewProp_mOuterSphereComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlackhole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlackhole>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlackhole_Statics::ClassParams = {
		&ABlackhole::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABlackhole_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABlackhole_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABlackhole_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlackhole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlackhole()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlackhole_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlackhole, 3917431635);
	template<> CHALLENGES_API UClass* StaticClass<ABlackhole>()
	{
		return ABlackhole::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlackhole(Z_Construct_UClass_ABlackhole, &ABlackhole::StaticClass, TEXT("/Script/Challenges"), TEXT("ABlackhole"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlackhole);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
