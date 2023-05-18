// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/TerrainGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTerrainGenerator() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_ATerrainGenerator();
	AUTOMAFARM_API UClass* Z_Construct_UClass_ATerrainGenerator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
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
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_XSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YSize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_YSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TileLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UVScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondaryMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATerrainGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrainGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TerrainGenerator.h" },
		{ "ModuleRelativePath", "TerrainGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_XSize_MetaData[] = {
		{ "Category", "TerrainGenerator" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "TerrainGenerator.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_XSize = { "XSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATerrainGenerator, XSize), METADATA_PARAMS(Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_XSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_XSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_YSize_MetaData[] = {
		{ "Category", "TerrainGenerator" },
		{ "ClampMin", "0" },
		{ "Comment", "//Number of squares along X axis\n" },
		{ "ModuleRelativePath", "TerrainGenerator.h" },
		{ "ToolTip", "Number of squares along X axis" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_YSize = { "YSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATerrainGenerator, YSize), METADATA_PARAMS(Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_YSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_YSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TileLength_MetaData[] = {
		{ "Category", "TerrainGenerator" },
		{ "ClampMin", "0.000001" },
		{ "Comment", "//Number of squares along Y axis\n" },
		{ "ModuleRelativePath", "TerrainGenerator.h" },
		{ "ToolTip", "Number of squares along Y axis" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TileLength = { "TileLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATerrainGenerator, TileLength), METADATA_PARAMS(Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TileLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TileLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_UVScale_MetaData[] = {
		{ "Category", "TerrainGenerator" },
		{ "ClampMin", "0.000001" },
		{ "ModuleRelativePath", "TerrainGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_UVScale = { "UVScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATerrainGenerator, UVScale), METADATA_PARAMS(Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_UVScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_UVScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "TerrainGenerator" },
		{ "ModuleRelativePath", "TerrainGenerator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATerrainGenerator, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "TerrainGenerator" },
		{ "ModuleRelativePath", "TerrainGenerator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATerrainGenerator, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_SecondaryMaterial_MetaData[] = {
		{ "Category", "TerrainGenerator" },
		{ "ModuleRelativePath", "TerrainGenerator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_SecondaryMaterial = { "SecondaryMaterial", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATerrainGenerator, SecondaryMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_SecondaryMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_SecondaryMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATerrainGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_XSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_YSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_TileLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_UVScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrainGenerator_Statics::NewProp_SecondaryMaterial,
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
		METADATA_PARAMS(Z_Construct_UClass_ATerrainGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATerrainGenerator_Statics::Class_MetaDataParams))
	};
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
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_TerrainGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_TerrainGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATerrainGenerator, ATerrainGenerator::StaticClass, TEXT("ATerrainGenerator"), &Z_Registration_Info_UClass_ATerrainGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATerrainGenerator), 3039974645U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_TerrainGenerator_h_2127146845(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_TerrainGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_TerrainGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
