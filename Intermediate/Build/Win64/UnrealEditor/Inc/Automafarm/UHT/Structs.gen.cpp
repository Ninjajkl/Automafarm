// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/Public/Library/Structs.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStructs() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_AItem_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_APlaceableObject_NoRegister();
	AUTOMAFARM_API UEnum* Z_Construct_UEnum_Automafarm_ETileType();
	AUTOMAFARM_API UScriptStruct* Z_Construct_UScriptStruct_FItemStruct();
	AUTOMAFARM_API UScriptStruct* Z_Construct_UScriptStruct_FSlotStruct();
	AUTOMAFARM_API UScriptStruct* Z_Construct_UScriptStruct_FTileStruct();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SlotStruct;
class UScriptStruct* FSlotStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SlotStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SlotStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlotStruct, (UObject*)Z_Construct_UPackage__Script_Automafarm(), TEXT("SlotStruct"));
	}
	return Z_Registration_Info_UScriptStruct_SlotStruct.OuterSingleton;
}
template<> AUTOMAFARM_API UScriptStruct* StaticStruct<FSlotStruct>()
{
	return FSlotStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSlotStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/Structs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlotStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlotStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotStruct_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "SlotStruct" },
		{ "ModuleRelativePath", "Public/Library/Structs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlotStruct_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotStruct, ItemID), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotStruct_Statics::NewProp_ItemID_MetaData), Z_Construct_UScriptStruct_FSlotStruct_Statics::NewProp_ItemID_MetaData) }; // 1575649708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotStruct_Statics::NewProp_Quantity_MetaData[] = {
		{ "Category", "SlotStruct" },
		{ "ModuleRelativePath", "Public/Library/Structs.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSlotStruct_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotStruct, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotStruct_Statics::NewProp_Quantity_MetaData), Z_Construct_UScriptStruct_FSlotStruct_Statics::NewProp_Quantity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlotStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotStruct_Statics::NewProp_ItemID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotStruct_Statics::NewProp_Quantity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlotStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
		nullptr,
		&NewStructOps,
		"SlotStruct",
		Z_Construct_UScriptStruct_FSlotStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotStruct_Statics::PropPointers),
		sizeof(FSlotStruct),
		alignof(FSlotStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSlotStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSlotStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_SlotStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SlotStruct.InnerSingleton, Z_Construct_UScriptStruct_FSlotStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SlotStruct.InnerSingleton;
	}

static_assert(std::is_polymorphic<FItemStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemStruct cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemStruct;
class UScriptStruct* FItemStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemStruct, (UObject*)Z_Construct_UPackage__Script_Automafarm(), TEXT("ItemStruct"));
	}
	return Z_Registration_Info_UScriptStruct_ItemStruct.OuterSingleton;
}
template<> AUTOMAFARM_API UScriptStruct* StaticStruct<FItemStruct>()
{
	return FItemStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Thumbnail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxStackSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStackSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/Structs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Library/Structs.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemStruct, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Library/Structs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemStruct, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Description_MetaData), Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Thumbnail_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Library/Structs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemStruct, Thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Thumbnail_MetaData), Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Thumbnail_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Library/Structs.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemStruct, Item), Z_Construct_UClass_UClass, Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Item_MetaData), Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Item_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_MaxStackSize_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Library/Structs.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_MaxStackSize = { "MaxStackSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemStruct, MaxStackSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_MaxStackSize_MetaData), Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_MaxStackSize_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Thumbnail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_MaxStackSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ItemStruct",
		Z_Construct_UScriptStruct_FItemStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStruct_Statics::PropPointers),
		sizeof(FItemStruct),
		alignof(FItemStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FItemStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemStruct.InnerSingleton, Z_Construct_UScriptStruct_FItemStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TileStruct;
class UScriptStruct* FTileStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TileStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TileStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTileStruct, (UObject*)Z_Construct_UPackage__Script_Automafarm(), TEXT("TileStruct"));
	}
	return Z_Registration_Info_UScriptStruct_TileStruct.OuterSingleton;
}
template<> AUTOMAFARM_API UScriptStruct* StaticStruct<FTileStruct>()
{
	return FTileStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTileStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaceableObjectReference_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlaceableObjectReference;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TileType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TileType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/Structs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTileStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTileStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileStruct_Statics::NewProp_PlaceableObjectReference_MetaData[] = {
		{ "Category", "TileStruct" },
		{ "ModuleRelativePath", "Public/Library/Structs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FTileStruct_Statics::NewProp_PlaceableObjectReference = { "PlaceableObjectReference", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileStruct, PlaceableObjectReference), Z_Construct_UClass_APlaceableObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileStruct_Statics::NewProp_PlaceableObjectReference_MetaData), Z_Construct_UScriptStruct_FTileStruct_Statics::NewProp_PlaceableObjectReference_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTileStruct_Statics::NewProp_TileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileStruct_Statics::NewProp_TileType_MetaData[] = {
		{ "Category", "TileStruct" },
		{ "ModuleRelativePath", "Public/Library/Structs.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTileStruct_Statics::NewProp_TileType = { "TileType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileStruct, TileType), Z_Construct_UEnum_Automafarm_ETileType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileStruct_Statics::NewProp_TileType_MetaData), Z_Construct_UScriptStruct_FTileStruct_Statics::NewProp_TileType_MetaData) }; // 789816852
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTileStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileStruct_Statics::NewProp_PlaceableObjectReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileStruct_Statics::NewProp_TileType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileStruct_Statics::NewProp_TileType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTileStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
		nullptr,
		&NewStructOps,
		"TileStruct",
		Z_Construct_UScriptStruct_FTileStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileStruct_Statics::PropPointers),
		sizeof(FTileStruct),
		alignof(FTileStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTileStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTileStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_TileStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TileStruct.InnerSingleton, Z_Construct_UScriptStruct_FTileStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TileStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Library_Structs_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Library_Structs_h_Statics::ScriptStructInfo[] = {
		{ FSlotStruct::StaticStruct, Z_Construct_UScriptStruct_FSlotStruct_Statics::NewStructOps, TEXT("SlotStruct"), &Z_Registration_Info_UScriptStruct_SlotStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlotStruct), 3392258304U) },
		{ FItemStruct::StaticStruct, Z_Construct_UScriptStruct_FItemStruct_Statics::NewStructOps, TEXT("ItemStruct"), &Z_Registration_Info_UScriptStruct_ItemStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemStruct), 2295427576U) },
		{ FTileStruct::StaticStruct, Z_Construct_UScriptStruct_FTileStruct_Statics::NewStructOps, TEXT("TileStruct"), &Z_Registration_Info_UScriptStruct_TileStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTileStruct), 1738032058U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Library_Structs_h_3735700432(TEXT("/Script/Automafarm"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Library_Structs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Library_Structs_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
