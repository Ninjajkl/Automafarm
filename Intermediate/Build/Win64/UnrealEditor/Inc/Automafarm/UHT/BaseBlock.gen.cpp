// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/BaseBlock.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseBlock() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_UBaseBlock();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UBaseBlock_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	void UBaseBlock::StaticRegisterNativesUBaseBlock()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseBlock);
	UClass* Z_Construct_UClass_UBaseBlock_NoRegister()
	{
		return UBaseBlock::StaticClass();
	}
	struct Z_Construct_UClass_UBaseBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TileLength;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilledTiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilledTiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FilledTiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseBlock_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "BaseBlock.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "BaseBlock.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseBlock_Statics::NewProp_TileLength_MetaData[] = {
		{ "Category", "BaseBlock" },
		{ "ClampMin", "0.000001" },
		{ "ModuleRelativePath", "BaseBlock.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseBlock_Statics::NewProp_TileLength = { "TileLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseBlock, TileLength), METADATA_PARAMS(Z_Construct_UClass_UBaseBlock_Statics::NewProp_TileLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseBlock_Statics::NewProp_TileLength_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseBlock_Statics::NewProp_FilledTiles_Inner = { "FilledTiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseBlock_Statics::NewProp_FilledTiles_MetaData[] = {
		{ "Category", "BaseBlock" },
		{ "ModuleRelativePath", "BaseBlock.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseBlock_Statics::NewProp_FilledTiles = { "FilledTiles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseBlock, FilledTiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBaseBlock_Statics::NewProp_FilledTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseBlock_Statics::NewProp_FilledTiles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseBlock_Statics::NewProp_BlockMesh_MetaData[] = {
		{ "Category", "BaseBlock" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseBlock.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseBlock_Statics::NewProp_BlockMesh = { "BlockMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseBlock, BlockMesh), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseBlock_Statics::NewProp_BlockMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseBlock_Statics::NewProp_BlockMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseBlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseBlock_Statics::NewProp_TileLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseBlock_Statics::NewProp_FilledTiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseBlock_Statics::NewProp_FilledTiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseBlock_Statics::NewProp_BlockMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseBlock>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseBlock_Statics::ClassParams = {
		&UBaseBlock::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseBlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseBlock_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseBlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseBlock()
	{
		if (!Z_Registration_Info_UClass_UBaseBlock.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseBlock.OuterSingleton, Z_Construct_UClass_UBaseBlock_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseBlock.OuterSingleton;
	}
	template<> AUTOMAFARM_API UClass* StaticClass<UBaseBlock>()
	{
		return UBaseBlock::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseBlock);
	UBaseBlock::~UBaseBlock() {}
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_BaseBlock_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_BaseBlock_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseBlock, UBaseBlock::StaticClass, TEXT("UBaseBlock"), &Z_Registration_Info_UClass_UBaseBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseBlock), 1415364874U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_BaseBlock_h_3095342562(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_BaseBlock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_BaseBlock_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
