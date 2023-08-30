// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/Public/UI/InventorySlot.h"
#include "Automafarm/Public/Library/Structs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventorySlot() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_UDragDropInventorySlot_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UDragPreview_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UInventory_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UInventorySlot();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UInventorySlot_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_USlotPreview_NoRegister();
	AUTOMAFARM_API UScriptStruct* Z_Construct_UScriptStruct_FSlotStruct();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	DEFINE_FUNCTION(UInventorySlot::execRefreshSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshSlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventorySlot::execInit)
	{
		P_GET_OBJECT(UInventory,Z_Param_InInventory);
		P_GET_STRUCT_REF(FSlotStruct,Z_Param_Out_InSlotStruct);
		P_GET_PROPERTY(FIntProperty,Z_Param_InContentIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_InInventory,Z_Param_Out_InSlotStruct,Z_Param_InContentIndex);
		P_NATIVE_END;
	}
	void UInventorySlot::StaticRegisterNativesUInventorySlot()
	{
		UClass* Class = UInventorySlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &UInventorySlot::execInit },
			{ "RefreshSlot", &UInventorySlot::execRefreshSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventorySlot_Init_Statics
	{
		struct InventorySlot_eventInit_Parms
		{
			UInventory* InInventory;
			FSlotStruct InSlotStruct;
			int32 InContentIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSlotStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSlotStruct;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InContentIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventorySlot_Init_Statics::NewProp_InInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventorySlot_Init_Statics::NewProp_InInventory = { "InInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventorySlot_eventInit_Parms, InInventory), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInventorySlot_Init_Statics::NewProp_InInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySlot_Init_Statics::NewProp_InInventory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventorySlot_Init_Statics::NewProp_InSlotStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventorySlot_Init_Statics::NewProp_InSlotStruct = { "InSlotStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventorySlot_eventInit_Parms, InSlotStruct), Z_Construct_UScriptStruct_FSlotStruct, METADATA_PARAMS(Z_Construct_UFunction_UInventorySlot_Init_Statics::NewProp_InSlotStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySlot_Init_Statics::NewProp_InSlotStruct_MetaData)) }; // 2383706676
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventorySlot_Init_Statics::NewProp_InContentIndex = { "InContentIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventorySlot_eventInit_Parms, InContentIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventorySlot_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventorySlot_Init_Statics::NewProp_InInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventorySlot_Init_Statics::NewProp_InSlotStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventorySlot_Init_Statics::NewProp_InContentIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventorySlot_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/UI/InventorySlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventorySlot_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventorySlot, nullptr, "Init", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInventorySlot_Init_Statics::InventorySlot_eventInit_Parms), Z_Construct_UFunction_UInventorySlot_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySlot_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventorySlot_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySlot_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventorySlot_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventorySlot_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventorySlot_RefreshSlot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventorySlot_RefreshSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "//Functions\n" },
		{ "ModuleRelativePath", "Public/UI/InventorySlot.h" },
		{ "ToolTip", "Functions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventorySlot_RefreshSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventorySlot, nullptr, "RefreshSlot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventorySlot_RefreshSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySlot_RefreshSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventorySlot_RefreshSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventorySlot_RefreshSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventorySlot);
	UClass* Z_Construct_UClass_UInventorySlot_NoRegister()
	{
		return UInventorySlot::StaticClass();
	}
	struct Z_Construct_UClass_UInventorySlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragPreviewWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DragPreviewWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragDropSlotClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DragDropSlotClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlotStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ContentIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowBorder_MetaData[];
#endif
		static void NewProp_ShowBorder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowBorder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotPreview_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotPreview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventorySlotBorder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventorySlotBorder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventorySlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventorySlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventorySlot_Init, "Init" }, // 4111754558
		{ &Z_Construct_UFunction_UInventorySlot_RefreshSlot, "RefreshSlot" }, // 2819104724
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventorySlot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/InventorySlot.h" },
		{ "ModuleRelativePath", "Public/UI/InventorySlot.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventorySlot_Statics::NewProp_DragPreviewWidgetClass_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "//Classes of Widgets\n" },
		{ "ModuleRelativePath", "Public/UI/InventorySlot.h" },
		{ "ToolTip", "Classes of Widgets" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventorySlot_Statics::NewProp_DragPreviewWidgetClass = { "DragPreviewWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventorySlot, DragPreviewWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDragPreview_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventorySlot_Statics::NewProp_DragPreviewWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlot_Statics::NewProp_DragPreviewWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventorySlot_Statics::NewProp_DragDropSlotClass_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/UI/InventorySlot.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventorySlot_Statics::NewProp_DragDropSlotClass = { "DragDropSlotClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventorySlot, DragDropSlotClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDragDropInventorySlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventorySlot_Statics::NewProp_DragDropSlotClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlot_Statics::NewProp_DragDropSlotClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventorySlot_Statics::NewProp_Inventory_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "//Propeties for this Widget\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InventorySlot.h" },
		{ "ToolTip", "Propeties for this Widget" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventorySlot_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventorySlot, Inventory), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventorySlot_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlot_Statics::NewProp_Inventory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventorySlot_Statics::NewProp_SlotStruct_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/UI/InventorySlot.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventorySlot_Statics::NewProp_SlotStruct = { "SlotStruct", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventorySlot, SlotStruct), Z_Construct_UScriptStruct_FSlotStruct, METADATA_PARAMS(Z_Construct_UClass_UInventorySlot_Statics::NewProp_SlotStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlot_Statics::NewProp_SlotStruct_MetaData)) }; // 2383706676
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventorySlot_Statics::NewProp_ContentIndex_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/UI/InventorySlot.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UInventorySlot_Statics::NewProp_ContentIndex = { "ContentIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventorySlot, ContentIndex), METADATA_PARAMS(Z_Construct_UClass_UInventorySlot_Statics::NewProp_ContentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlot_Statics::NewProp_ContentIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventorySlot_Statics::NewProp_ShowBorder_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/UI/InventorySlot.h" },
	};
#endif
	void Z_Construct_UClass_UInventorySlot_Statics::NewProp_ShowBorder_SetBit(void* Obj)
	{
		((UInventorySlot*)Obj)->ShowBorder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInventorySlot_Statics::NewProp_ShowBorder = { "ShowBorder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInventorySlot), &Z_Construct_UClass_UInventorySlot_Statics::NewProp_ShowBorder_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInventorySlot_Statics::NewProp_ShowBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlot_Statics::NewProp_ShowBorder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventorySlot_Statics::NewProp_SlotPreview_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Inventory" },
		{ "Comment", "//Widget Component References\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InventorySlot.h" },
		{ "ToolTip", "Widget Component References" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventorySlot_Statics::NewProp_SlotPreview = { "SlotPreview", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventorySlot, SlotPreview), Z_Construct_UClass_USlotPreview_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventorySlot_Statics::NewProp_SlotPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlot_Statics::NewProp_SlotPreview_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventorySlot_Statics::NewProp_InventorySlotBorder_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InventorySlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventorySlot_Statics::NewProp_InventorySlotBorder = { "InventorySlotBorder", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventorySlot, InventorySlotBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventorySlot_Statics::NewProp_InventorySlotBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlot_Statics::NewProp_InventorySlotBorder_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventorySlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlot_Statics::NewProp_DragPreviewWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlot_Statics::NewProp_DragDropSlotClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlot_Statics::NewProp_Inventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlot_Statics::NewProp_SlotStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlot_Statics::NewProp_ContentIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlot_Statics::NewProp_ShowBorder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlot_Statics::NewProp_SlotPreview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlot_Statics::NewProp_InventorySlotBorder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventorySlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventorySlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventorySlot_Statics::ClassParams = {
		&UInventorySlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventorySlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlot_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInventorySlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventorySlot()
	{
		if (!Z_Registration_Info_UClass_UInventorySlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventorySlot.OuterSingleton, Z_Construct_UClass_UInventorySlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventorySlot.OuterSingleton;
	}
	template<> AUTOMAFARM_API UClass* StaticClass<UInventorySlot>()
	{
		return UInventorySlot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventorySlot);
	UInventorySlot::~UInventorySlot() {}
	struct Z_CompiledInDeferFile_FID_Users_Ninja_OneDrive_Documents_Programming_Unreal_Projects_Automafarm_Source_Automafarm_Public_UI_InventorySlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ninja_OneDrive_Documents_Programming_Unreal_Projects_Automafarm_Source_Automafarm_Public_UI_InventorySlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventorySlot, UInventorySlot::StaticClass, TEXT("UInventorySlot"), &Z_Registration_Info_UClass_UInventorySlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventorySlot), 2017083131U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ninja_OneDrive_Documents_Programming_Unreal_Projects_Automafarm_Source_Automafarm_Public_UI_InventorySlot_h_4131896491(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Users_Ninja_OneDrive_Documents_Programming_Unreal_Projects_Automafarm_Source_Automafarm_Public_UI_InventorySlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Ninja_OneDrive_Documents_Programming_Unreal_Projects_Automafarm_Source_Automafarm_Public_UI_InventorySlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
