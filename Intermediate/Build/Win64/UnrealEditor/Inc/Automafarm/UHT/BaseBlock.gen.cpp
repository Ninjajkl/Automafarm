// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/Public/Items/BaseBlock.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseBlock() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_ABaseBlock();
	AUTOMAFARM_API UClass* Z_Construct_UClass_ABaseBlock_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_APlaceableObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	void ABaseBlock::StaticRegisterNativesABaseBlock()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseBlock);
	UClass* Z_Construct_UClass_ABaseBlock_NoRegister()
	{
		return ABaseBlock::StaticClass();
	}
	struct Z_Construct_UClass_ABaseBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BlockName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridLocationInstanceMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridLocationInstanceMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridLocationInstanceMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_GridLocationInstanceMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlaceableObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBlock_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBlock_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Items/BaseBlock.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Items/BaseBlock.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBlock_Statics::NewProp_BlockName_MetaData[] = {
		{ "Category", "BaseBlock" },
		{ "ModuleRelativePath", "Public/Items/BaseBlock.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABaseBlock_Statics::NewProp_BlockName = { "BlockName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseBlock, BlockName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBlock_Statics::NewProp_BlockName_MetaData), Z_Construct_UClass_ABaseBlock_Statics::NewProp_BlockName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBlock_Statics::NewProp_BlockMesh_MetaData[] = {
		{ "Category", "BaseBlock" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/BaseBlock.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseBlock_Statics::NewProp_BlockMesh = { "BlockMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseBlock, BlockMesh), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBlock_Statics::NewProp_BlockMesh_MetaData), Z_Construct_UClass_ABaseBlock_Statics::NewProp_BlockMesh_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseBlock_Statics::NewProp_GridLocationInstanceMap_ValueProp = { "GridLocationInstanceMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseBlock_Statics::NewProp_GridLocationInstanceMap_Key_KeyProp = { "GridLocationInstanceMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBlock_Statics::NewProp_GridLocationInstanceMap_MetaData[] = {
		{ "Category", "BaseBlock" },
		{ "ModuleRelativePath", "Public/Items/BaseBlock.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ABaseBlock_Statics::NewProp_GridLocationInstanceMap = { "GridLocationInstanceMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseBlock, GridLocationInstanceMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBlock_Statics::NewProp_GridLocationInstanceMap_MetaData), Z_Construct_UClass_ABaseBlock_Statics::NewProp_GridLocationInstanceMap_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseBlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBlock_Statics::NewProp_BlockName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBlock_Statics::NewProp_BlockMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBlock_Statics::NewProp_GridLocationInstanceMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBlock_Statics::NewProp_GridLocationInstanceMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBlock_Statics::NewProp_GridLocationInstanceMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseBlock>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseBlock_Statics::ClassParams = {
		&ABaseBlock::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseBlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBlock_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBlock_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseBlock_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBlock_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABaseBlock()
	{
		if (!Z_Registration_Info_UClass_ABaseBlock.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseBlock.OuterSingleton, Z_Construct_UClass_ABaseBlock_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseBlock.OuterSingleton;
	}
	template<> AUTOMAFARM_API UClass* StaticClass<ABaseBlock>()
	{
		return ABaseBlock::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseBlock);
	ABaseBlock::~ABaseBlock() {}
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Items_BaseBlock_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Items_BaseBlock_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseBlock, ABaseBlock::StaticClass, TEXT("ABaseBlock"), &Z_Registration_Info_UClass_ABaseBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseBlock), 2005736982U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Items_BaseBlock_h_3279250000(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Items_BaseBlock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Items_BaseBlock_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
