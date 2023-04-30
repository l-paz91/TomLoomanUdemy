// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TomLoomanStarter/Public/Launchpad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaunchpad() {}
// Cross Module References
	TOMLOOMANSTARTER_API UClass* Z_Construct_UClass_ALaunchpad_NoRegister();
	TOMLOOMANSTARTER_API UClass* Z_Construct_UClass_ALaunchpad();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TomLoomanStarter();
// End Cross Module References
	void ALaunchpad::StaticRegisterNativesALaunchpad()
	{
	}
	UClass* Z_Construct_UClass_ALaunchpad_NoRegister()
	{
		return ALaunchpad::StaticClass();
	}
	struct Z_Construct_UClass_ALaunchpad_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALaunchpad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TomLoomanStarter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaunchpad_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Launchpad.h" },
		{ "ModuleRelativePath", "Public/Launchpad.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALaunchpad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaunchpad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALaunchpad_Statics::ClassParams = {
		&ALaunchpad::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALaunchpad_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALaunchpad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALaunchpad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALaunchpad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALaunchpad, 2115226545);
	template<> TOMLOOMANSTARTER_API UClass* StaticClass<ALaunchpad>()
	{
		return ALaunchpad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALaunchpad(Z_Construct_UClass_ALaunchpad, &ALaunchpad::StaticClass, TEXT("/Script/TomLoomanStarter"), TEXT("ALaunchpad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALaunchpad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
