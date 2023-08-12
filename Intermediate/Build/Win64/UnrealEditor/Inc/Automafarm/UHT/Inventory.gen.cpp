// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/Public/Systems/Inventory.h"
#include "Automafarm/Public/Library/Structs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventory() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_UInventory();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UInventory_NoRegister();
	AUTOMAFARM_API UFunction* Z_Construct_UDelegateFunction_Automafarm_KFOnInventoryUpdated__DelegateSignature();
	AUTOMAFARM_API UScriptStruct* Z_Construct_UScriptStruct_FSlotStruct();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Automafarm_KFOnInventoryUpdated__DelegateSignature_Statics
	{
		struct _Script_Automafarm_eventKFOnInventoryUpdated_Parms
		{
			UInventory* Inventory;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Automafarm_KFOnInventoryUpdated__DelegateSignature_Statics::NewProp_Inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Automafarm_KFOnInventoryUpdated__DelegateSignature_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Automafarm_eventKFOnInventoryUpdated_Parms, Inventory), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Automafarm_KFOnInventoryUpdated__DelegateSignature_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Automafarm_KFOnInventoryUpdated__DelegateSignature_Statics::NewProp_Inventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Automafarm_KFOnInventoryUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Automafarm_KFOnInventoryUpdated__DelegateSignature_Statics::NewProp_Inventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Automafarm_KFOnInventoryUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Systems/Inventory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Automafarm_KFOnInventoryUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Automafarm, nullptr, "KFOnInventoryUpdated__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Automafarm_KFOnInventoryUpdated__DelegateSignature_Statics::_Script_Automafarm_eventKFOnInventoryUpdated_Parms), Z_Construct_UDelegateFunction_Automafarm_KFOnInventoryUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Automafarm_KFOnInventoryUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Automafarm_KFOnInventoryUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Automafarm_KFOnInventoryUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Automafarm_KFOnInventoryUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Automafarm_KFOnInventoryUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FKFOnInventoryUpdated_DelegateWrapper(const FMulticastScriptDelegate& KFOnInventoryUpdated, UInventory* Inventory)
{
	struct _Script_Automafarm_eventKFOnInventoryUpdated_Parms
	{
		UInventory* Inventory;
	};
	_Script_Automafarm_eventKFOnInventoryUpdated_Parms Parms;
	Parms.Inventory=Inventory;
	KFOnInventoryUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UInventory::execTransferSlots)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_slotFrom);
		P_GET_OBJECT(UInventory,Z_Param_fromInv);
		P_GET_PROPERTY(FIntProperty,Z_Param_slotTo);
		P_GET_OBJECT(UInventory,Z_Param_toInv);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::TransferSlots(Z_Param_slotFrom,Z_Param_fromInv,Z_Param_slotTo,Z_Param_toInv);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execIncreaseSlotByAmount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_slotNum);
		P_GET_OBJECT(UInventory,Z_Param_Inventory);
		P_GET_PROPERTY(FIntProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UInventory::IncreaseSlotByAmount(Z_Param_slotNum,Z_Param_Inventory,Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execReduceSlotByAmount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_slotNum);
		P_GET_PROPERTY(FIntProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReduceSlotByAmount(Z_Param_slotNum,Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execEmptySlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_slotNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EmptySlot(Z_Param_slotNum);
		P_NATIVE_END;
	}
	void UInventory::StaticRegisterNativesUInventory()
	{
		UClass* Class = UInventory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EmptySlot", &UInventory::execEmptySlot },
			{ "IncreaseSlotByAmount", &UInventory::execIncreaseSlotByAmount },
			{ "ReduceSlotByAmount", &UInventory::execReduceSlotByAmount },
			{ "TransferSlots", &UInventory::execTransferSlots },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventory_EmptySlot_Statics
	{
		struct Inventory_eventEmptySlot_Parms
		{
			int32 slotNum;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_slotNum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventory_EmptySlot_Statics::NewProp_slotNum = { "slotNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Inventory_eventEmptySlot_Parms, slotNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_EmptySlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_EmptySlot_Statics::NewProp_slotNum,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_EmptySlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Systems/Inventory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_EmptySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "EmptySlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInventory_EmptySlot_Statics::Inventory_eventEmptySlot_Parms), Z_Construct_UFunction_UInventory_EmptySlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_EmptySlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_EmptySlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_EmptySlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_EmptySlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_EmptySlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_IncreaseSlotByAmount_Statics
	{
		struct Inventory_eventIncreaseSlotByAmount_Parms
		{
			int32 slotNum;
			UInventory* Inventory;
			int32 amount;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_slotNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_amount;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventory_IncreaseSlotByAmount_Statics::NewProp_slotNum = { "slotNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Inventory_eventIncreaseSlotByAmount_Parms, slotNum), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_IncreaseSlotByAmount_Statics::NewProp_Inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventory_IncreaseSlotByAmount_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Inventory_eventIncreaseSlotByAmount_Parms, Inventory), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInventory_IncreaseSlotByAmount_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_IncreaseSlotByAmount_Statics::NewProp_Inventory_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventory_IncreaseSlotByAmount_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Inventory_eventIncreaseSlotByAmount_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventory_IncreaseSlotByAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Inventory_eventIncreaseSlotByAmount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_IncreaseSlotByAmount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_IncreaseSlotByAmount_Statics::NewProp_slotNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_IncreaseSlotByAmount_Statics::NewProp_Inventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_IncreaseSlotByAmount_Statics::NewProp_amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_IncreaseSlotByAmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_IncreaseSlotByAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Systems/Inventory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_IncreaseSlotByAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "IncreaseSlotByAmount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInventory_IncreaseSlotByAmount_Statics::Inventory_eventIncreaseSlotByAmount_Parms), Z_Construct_UFunction_UInventory_IncreaseSlotByAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_IncreaseSlotByAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_IncreaseSlotByAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_IncreaseSlotByAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_IncreaseSlotByAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_IncreaseSlotByAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_ReduceSlotByAmount_Statics
	{
		struct Inventory_eventReduceSlotByAmount_Parms
		{
			int32 slotNum;
			int32 amount;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_slotNum;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventory_ReduceSlotByAmount_Statics::NewProp_slotNum = { "slotNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Inventory_eventReduceSlotByAmount_Parms, slotNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventory_ReduceSlotByAmount_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Inventory_eventReduceSlotByAmount_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_ReduceSlotByAmount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ReduceSlotByAmount_Statics::NewProp_slotNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ReduceSlotByAmount_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_ReduceSlotByAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Systems/Inventory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_ReduceSlotByAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "ReduceSlotByAmount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInventory_ReduceSlotByAmount_Statics::Inventory_eventReduceSlotByAmount_Parms), Z_Construct_UFunction_UInventory_ReduceSlotByAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_ReduceSlotByAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_ReduceSlotByAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_ReduceSlotByAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_ReduceSlotByAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_ReduceSlotByAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_TransferSlots_Statics
	{
		struct Inventory_eventTransferSlots_Parms
		{
			int32 slotFrom;
			UInventory* fromInv;
			int32 slotTo;
			UInventory* toInv;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_slotFrom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fromInv_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_fromInv;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_slotTo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_toInv_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_toInv;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventory_TransferSlots_Statics::NewProp_slotFrom = { "slotFrom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Inventory_eventTransferSlots_Parms, slotFrom), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_TransferSlots_Statics::NewProp_fromInv_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventory_TransferSlots_Statics::NewProp_fromInv = { "fromInv", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Inventory_eventTransferSlots_Parms, fromInv), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInventory_TransferSlots_Statics::NewProp_fromInv_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_TransferSlots_Statics::NewProp_fromInv_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventory_TransferSlots_Statics::NewProp_slotTo = { "slotTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Inventory_eventTransferSlots_Parms, slotTo), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_TransferSlots_Statics::NewProp_toInv_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventory_TransferSlots_Statics::NewProp_toInv = { "toInv", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Inventory_eventTransferSlots_Parms, toInv), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInventory_TransferSlots_Statics::NewProp_toInv_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_TransferSlots_Statics::NewProp_toInv_MetaData)) };
	void Z_Construct_UFunction_UInventory_TransferSlots_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventTransferSlots_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_TransferSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Inventory_eventTransferSlots_Parms), &Z_Construct_UFunction_UInventory_TransferSlots_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_TransferSlots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TransferSlots_Statics::NewProp_slotFrom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TransferSlots_Statics::NewProp_fromInv,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TransferSlots_Statics::NewProp_slotTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TransferSlots_Statics::NewProp_toInv,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TransferSlots_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_TransferSlots_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Systems/Inventory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_TransferSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "TransferSlots", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInventory_TransferSlots_Statics::Inventory_eventTransferSlots_Parms), Z_Construct_UFunction_UInventory_TransferSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_TransferSlots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_TransferSlots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_TransferSlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_TransferSlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_TransferSlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventory);
	UClass* Z_Construct_UClass_UInventory_NoRegister()
	{
		return UInventory::StaticClass();
	}
	struct Z_Construct_UClass_UInventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInventoryUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumRows_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumRows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCols_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumCols;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Content_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Content_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Content;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemDataTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventory_EmptySlot, "EmptySlot" }, // 473461521
		{ &Z_Construct_UFunction_UInventory_IncreaseSlotByAmount, "IncreaseSlotByAmount" }, // 2996902159
		{ &Z_Construct_UFunction_UInventory_ReduceSlotByAmount, "ReduceSlotByAmount" }, // 4220473677
		{ &Z_Construct_UFunction_UInventory_TransferSlots, "TransferSlots" }, // 3956409666
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Inventory" },
		{ "IncludePath", "Systems/Inventory.h" },
		{ "ModuleRelativePath", "Public/Systems/Inventory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::NewProp_OnInventoryUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Public/Systems/Inventory.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_OnInventoryUpdated = { "OnInventoryUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventory, OnInventoryUpdated), Z_Construct_UDelegateFunction_Automafarm_KFOnInventoryUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::NewProp_OnInventoryUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::NewProp_OnInventoryUpdated_MetaData)) }; // 2118564736
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::NewProp_NumRows_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "//Inventory Properties and Functions\n" },
		{ "ModuleRelativePath", "Public/Systems/Inventory.h" },
		{ "ToolTip", "Inventory Properties and Functions" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_NumRows = { "NumRows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventory, NumRows), METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::NewProp_NumRows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::NewProp_NumRows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::NewProp_NumCols_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Systems/Inventory.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_NumCols = { "NumCols", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventory, NumCols), METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::NewProp_NumCols_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::NewProp_NumCols_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_Content_ValueProp = { "Content", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FSlotStruct, METADATA_PARAMS(nullptr, 0) }; // 2383706676
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_Content_Key_KeyProp = { "Content_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::NewProp_Content_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Systems/Inventory.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventory, Content), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::NewProp_Content_MetaData)) }; // 2383706676
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::NewProp_ItemDataTable_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Systems/Inventory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_ItemDataTable = { "ItemDataTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventory, ItemDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::NewProp_ItemDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::NewProp_ItemDataTable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_OnInventoryUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_NumRows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_NumCols,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_Content_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_Content_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_ItemDataTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventory_Statics::ClassParams = {
		&UInventory::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventory()
	{
		if (!Z_Registration_Info_UClass_UInventory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventory.OuterSingleton, Z_Construct_UClass_UInventory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventory.OuterSingleton;
	}
	template<> AUTOMAFARM_API UClass* StaticClass<UInventory>()
	{
		return UInventory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventory);
	UInventory::~UInventory() {}
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Systems_Inventory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Systems_Inventory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventory, UInventory::StaticClass, TEXT("UInventory"), &Z_Registration_Info_UClass_UInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventory), 4033518508U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Systems_Inventory_h_4191468642(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Systems_Inventory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Systems_Inventory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
