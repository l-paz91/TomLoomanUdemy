// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TomLoomanStarter/Public/TomLoomanStarterHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTomLoomanStarterHUD() {}
// Cross Module References
	TOMLOOMANSTARTER_API UClass* Z_Construct_UClass_ATomLoomanStarterHUD_NoRegister();
	TOMLOOMANSTARTER_API UClass* Z_Construct_UClass_ATomLoomanStarterHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_TomLoomanStarter();
// End Cross Module References
	void ATomLoomanStarterHUD::StaticRegisterNativesATomLoomanStarterHUD()
	{
	}
	UClass* Z_Construct_UClass_ATomLoomanStarterHUD_NoRegister()
	{
		return ATomLoomanStarterHUD::StaticClass();
	}
	struct Z_Construct_UClass_ATomLoomanStarterHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATomLoomanStarterHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_TomLoomanStarter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATomLoomanStarterHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "TomLoomanStarterHUD.h" },
		{ "ModuleRelativePath", "Public/TomLoomanStarterHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATomLoomanStarterHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATomLoomanStarterHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATomLoomanStarterHUD_Statics::ClassParams = {
		&ATomLoomanStarterHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATomLoomanStarterHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATomLoomanStarterHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATomLoomanStarterHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATomLoomanStarterHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATomLoomanStarterHUD, 4122205008);
	template<> TOMLOOMANSTARTER_API UClass* StaticClass<ATomLoomanStarterHUD>()
	{
		return ATomLoomanStarterHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATomLoomanStarterHUD(Z_Construct_UClass_ATomLoomanStarterHUD, &ATomLoomanStarterHUD::StaticClass, TEXT("/Script/TomLoomanStarter"), TEXT("ATomLoomanStarterHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATomLoomanStarterHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
