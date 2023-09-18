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
	AUTOMAFARM_API UClass* Z_Construct_UClass_UContainerInventory_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UInventory_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainerInventoryClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ContainerInventoryClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Renamable_MetaData[];
#endif
		static void NewProp_Renamable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Renamable;
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableBlock_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableBlock_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/InteractableBlock.h" },
		{ "ModuleRelativePath", "Public/Items/InteractableBlock.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableBlock_Statics::NewProp_Inventory_MetaData[] = {
		{ "Category", "Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/InteractableBlock.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableBlock_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableBlock, Inventory), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableBlock_Statics::NewProp_Inventory_MetaData), Z_Construct_UClass_AInteractableBlock_Statics::NewProp_Inventory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableBlock_Statics::NewProp_ContainerInventoryClass_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/InteractableBlock.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AInteractableBlock_Statics::NewProp_ContainerInventoryClass = { "ContainerInventoryClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableBlock, ContainerInventoryClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UContainerInventory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableBlock_Statics::NewProp_ContainerInventoryClass_MetaData), Z_Construct_UClass_AInteractableBlock_Statics::NewProp_ContainerInventoryClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableBlock_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "InteractableBlock" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/InteractableBlock.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableBlock_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableBlock, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableBlock_Statics::NewProp_StaticMesh_MetaData), Z_Construct_UClass_AInteractableBlock_Statics::NewProp_StaticMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableBlock_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "InteractableBlock" },
		{ "ModuleRelativePath", "Public/Items/InteractableBlock.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_AInteractableBlock_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableBlock, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableBlock_Statics::NewProp_Name_MetaData), Z_Construct_UClass_AInteractableBlock_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableBlock_Statics::NewProp_Renamable_MetaData[] = {
		{ "Category", "InteractableBlock" },
		{ "ModuleRelativePath", "Public/Items/InteractableBlock.h" },
	};
#endif
	void Z_Construct_UClass_AInteractableBlock_Statics::NewProp_Renamable_SetBit(void* Obj)
	{
		((AInteractableBlock*)Obj)->Renamable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInteractableBlock_Statics::NewProp_Renamable = { "Renamable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AInteractableBlock), &Z_Construct_UClass_AInteractableBlock_Statics::NewProp_Renamable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableBlock_Statics::NewProp_Renamable_MetaData), Z_Construct_UClass_AInteractableBlock_Statics::NewProp_Renamable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableBlock_Statics::NewProp_GridLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Items/InteractableBlock.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInteractableBlock_Statics::NewProp_GridLocation = { "GridLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableBlock, GridLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableBlock_Statics::NewProp_GridLocation_MetaData), Z_Construct_UClass_AInteractableBlock_Statics::NewProp_GridLocation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractableBlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableBlock_Statics::NewProp_Inventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableBlock_Statics::NewProp_ContainerInventoryClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableBlock_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableBlock_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableBlock_Statics::NewProp_Renamable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableBlock_Statics::NewProp_GridLocation,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AInteractableBlock_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(AInteractableBlock, IInteractable), false },  // 3682016776
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableBlock_Statics::InterfaceParams) < 64);
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableBlock_Statics::Class_MetaDataParams), Z_Construct_UClass_AInteractableBlock_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableBlock_Statics::PropPointers) < 2048);
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
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Items_InteractableBlock_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Items_InteractableBlock_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInteractableBlock, AInteractableBlock::StaticClass, TEXT("AInteractableBlock"), &Z_Registration_Info_UClass_AInteractableBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractableBlock), 791891529U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Items_InteractableBlock_h_21390814(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Items_InteractableBlock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Items_InteractableBlock_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
