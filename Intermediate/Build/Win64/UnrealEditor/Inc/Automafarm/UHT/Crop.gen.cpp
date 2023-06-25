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
	AUTOMAFARM_API UClass* Z_Construct_UClass_UCrop();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UCrop_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UPivotPaper();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	void UCrop::StaticRegisterNativesUCrop()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCrop);
	UClass* Z_Construct_UClass_UCrop_NoRegister()
	{
		return UCrop::StaticClass();
	}
	struct Z_Construct_UClass_UCrop_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPivotPaper,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrop_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Crop.h" },
		{ "ModuleRelativePath", "Crop.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrop>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCrop_Statics::ClassParams = {
		&UCrop::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCrop_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCrop_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCrop()
	{
		if (!Z_Registration_Info_UClass_UCrop.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCrop.OuterSingleton, Z_Construct_UClass_UCrop_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCrop.OuterSingleton;
	}
	template<> AUTOMAFARM_API UClass* StaticClass<UCrop>()
	{
		return UCrop::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrop);
	UCrop::~UCrop() {}
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCrop, UCrop::StaticClass, TEXT("UCrop"), &Z_Registration_Info_UClass_UCrop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCrop), 2071861163U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_43613647(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
