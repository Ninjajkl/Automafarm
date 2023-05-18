// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/AutomafarmGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomafarmGameMode() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_AAutomafarmGameMode();
	AUTOMAFARM_API UClass* Z_Construct_UClass_AAutomafarmGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	void AAutomafarmGameMode::StaticRegisterNativesAAutomafarmGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAutomafarmGameMode);
	UClass* Z_Construct_UClass_AAutomafarmGameMode_NoRegister()
	{
		return AAutomafarmGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAutomafarmGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAutomafarmGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AutomafarmGameMode.h" },
		{ "ModuleRelativePath", "AutomafarmGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAutomafarmGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAutomafarmGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAutomafarmGameMode_Statics::ClassParams = {
		&AAutomafarmGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAutomafarmGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAutomafarmGameMode()
	{
		if (!Z_Registration_Info_UClass_AAutomafarmGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAutomafarmGameMode.OuterSingleton, Z_Construct_UClass_AAutomafarmGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAutomafarmGameMode.OuterSingleton;
	}
	template<> AUTOMAFARM_API UClass* StaticClass<AAutomafarmGameMode>()
	{
		return AAutomafarmGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAutomafarmGameMode);
	AAutomafarmGameMode::~AAutomafarmGameMode() {}
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_AutomafarmGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_AutomafarmGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAutomafarmGameMode, AAutomafarmGameMode::StaticClass, TEXT("AAutomafarmGameMode"), &Z_Registration_Info_UClass_AAutomafarmGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAutomafarmGameMode), 768474020U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_AutomafarmGameMode_h_4039586158(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_AutomafarmGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_AutomafarmGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
