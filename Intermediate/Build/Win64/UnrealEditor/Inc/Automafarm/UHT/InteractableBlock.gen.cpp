// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/Public/Items/InteractableBlock.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableBlock() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_AInteractableBlock();
	AUTOMAFARM_API UClass* Z_Construct_UClass_AInteractableBlock_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_APlaceableObject();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UInventory_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	void AInteractableBlock::StaticRegisterNativesAInteractableBlock()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInteractableBlock);
	UClass* Z_Construct_UClass_AInteractableBlock_NoRegister()
	{
		return AInteractableBlock::StaticClass();
	}
	struct Z_Construct_UClass_AInteractableBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractableBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlaceableObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableBlock_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/InteractableBlock.h" },
		{ "ModuleRelativePath", "Public/Items/InteractableBlock.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableBlock_Statics::NewProp_Inventory_MetaData[] = {
		{ "Category", "InteractableBlock" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/InteractableBlock.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableBlock_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInteractableBlock, Inventory), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractableBlock_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableBlock_Statics::NewProp_Inventory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableBlock_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "InteractableBlock" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/InteractableBlock.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableBlock_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInteractableBlock, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractableBlock_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableBlock_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableBlock_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "InteractableBlock" },
		{ "ModuleRelativePath", "Public/Items/InteractableBlock.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_AInteractableBlock_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInteractableBlock, Name), METADATA_PARAMS(Z_Construct_UClass_AInteractableBlock_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableBlock_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableBlock_Statics::NewProp_GridLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Items/InteractableBlock.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInteractableBlock_Statics::NewProp_GridLocation = { "GridLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInteractableBlock, GridLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AInteractableBlock_Statics::NewProp_GridLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableBlock_Statics::NewProp_GridLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractableBlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableBlock_Statics::NewProp_Inventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableBlock_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableBlock_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableBlock_Statics::NewProp_GridLocation,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AInteractableBlock_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(AInteractableBlock, IInteractable), false },  // 1536099168
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractableBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractableBlock>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractableBlock_Statics::ClassParams = {
		&AInteractableBlock::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AInteractableBlock_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableBlock_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractableBlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractableBlock()
	{
		if (!Z_Registration_Info_UClass_AInteractableBlock.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractableBlock.OuterSingleton, Z_Construct_UClass_AInteractableBlock_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInteractableBlock.OuterSingleton;
	}
	template<> AUTOMAFARM_API UClass* StaticClass<AInteractableBlock>()
	{
		return AInteractableBlock::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractableBlock);
	AInteractableBlock::~AInteractableBlock() {}
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Items_InteractableBlock_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Items_InteractableBlock_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInteractableBlock, AInteractableBlock::StaticClass, TEXT("AInteractableBlock"), &Z_Registration_Info_UClass_AInteractableBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractableBlock), 3043294933U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Items_InteractableBlock_h_2871723083(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Items_InteractableBlock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Items_InteractableBlock_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
