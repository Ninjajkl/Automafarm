// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/Crop.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrop() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_ACrop();
	AUTOMAFARM_API UClass* Z_Construct_UClass_ACrop_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_APivotPaper();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	void ACrop::StaticRegisterNativesACrop()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACrop);
	UClass* Z_Construct_UClass_ACrop_NoRegister()
	{
		return ACrop::StaticClass();
	}
	struct Z_Construct_UClass_ACrop_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APivotPaper,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrop_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Crop.h" },
		{ "ModuleRelativePath", "Crop.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrop>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACrop_Statics::ClassParams = {
		&ACrop::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACrop_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACrop_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACrop()
	{
		if (!Z_Registration_Info_UClass_ACrop.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACrop.OuterSingleton, Z_Construct_UClass_ACrop_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACrop.OuterSingleton;
	}
	template<> AUTOMAFARM_API UClass* StaticClass<ACrop>()
	{
		return ACrop::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrop);
	ACrop::~ACrop() {}
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACrop, ACrop::StaticClass, TEXT("ACrop"), &Z_Registration_Info_UClass_ACrop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACrop), 286263146U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_1233946552(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
