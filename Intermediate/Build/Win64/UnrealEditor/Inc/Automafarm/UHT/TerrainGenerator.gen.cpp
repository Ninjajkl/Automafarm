// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/Public/Systems/TerrainGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTerrainGenerator() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_ABaseBlock_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_ATerrainGenerator();
	AUTOMAFARM_API UClass* Z_Construct_UClass_ATerrainGenerator_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	void ATerrainGenerator::StaticRegisterNativesATerrainGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATerrainGenerator);
	UClass* Z_Construct_UClass_ATerrainGenerator_NoRegister()
	{
		return ATerrainGenerator::StaticClass();
	}
	struct Z_Construct_UClass_ATerrainGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_XSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_YSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryBlockType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PrimaryBlockType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryBlockType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SecondaryBlockType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATerrainGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainGenerator_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrainGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Systems/TerrainGenerator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Systems/TerrainGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_XSize_MetaData[] = {
		{ "Category", "TerrainGenerator" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Systems/TerrainGenerator.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_XSize = { "XSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainGenerator, XSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_XSize_MetaData), Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_XSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_YSize_MetaData[] = {
		{ "Category", "TerrainGenerator" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Number of squares along X axis\n" },
#endif
		{ "ModuleRelativePath", "Public/Systems/TerrainGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of squares along X axis" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_YSize = { "YSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainGenerator, YSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_YSize_MetaData), Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_YSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_PrimaryBlockType_MetaData[] = {
		{ "Category", "TerrainGenerator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Number of squares along Y axis\n" },
#endif
		{ "ModuleRelativePath", "Public/Systems/TerrainGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of squares along Y axis" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_PrimaryBlockType = { "PrimaryBlockType", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainGenerator, PrimaryBlockType), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaseBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_PrimaryBlockType_MetaData), Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_PrimaryBlockType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_SecondaryBlockType_MetaData[] = {
		{ "Category", "TerrainGenerator" },
		{ "ModuleRelativePath", "Public/Systems/TerrainGenerator.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_SecondaryBlockType = { "SecondaryBlockType", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrainGenerator, SecondaryBlockType), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaseBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_SecondaryBlockType_MetaData), Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_SecondaryBlockType_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATerrainGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_XSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_YSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_PrimaryBlockType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_SecondaryBlockType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATerrainGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATerrainGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATerrainGenerator_Statics::ClassParams = {
		&ATerrainGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATerrainGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainGenerator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_ATerrainGenerator_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainGenerator_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATerrainGenerator()
	{
		if (!Z_Registration_Info_UClass_ATerrainGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATerrainGenerator.OuterSingleton, Z_Construct_UClass_ATerrainGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATerrainGenerator.OuterSingleton;
	}
	template<> AUTOMAFARM_API UClass* StaticClass<ATerrainGenerator>()
	{
		return ATerrainGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATerrainGenerator);
	ATerrainGenerator::~ATerrainGenerator() {}
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Systems_TerrainGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Systems_TerrainGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATerrainGenerator, ATerrainGenerator::StaticClass, TEXT("ATerrainGenerator"), &Z_Registration_Info_UClass_ATerrainGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATerrainGenerator), 2862866484U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Systems_TerrainGenerator_h_2175757346(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Systems_TerrainGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Systems_TerrainGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
