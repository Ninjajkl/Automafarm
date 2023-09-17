// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/Public/Characters/AutomafarmPlayerController.h"
#include "InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomafarmPlayerController() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_AAutomafarmPlayerController();
	AUTOMAFARM_API UClass* Z_Construct_UClass_AAutomafarmPlayerController_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UPlayerHud_NoRegister();
	AUTOMAFARM_API UFunction* Z_Construct_UDelegateFunction_Automafarm_KFOnHotbarSlotChanged__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Automafarm_KFOnHotbarSlotChanged__DelegateSignature_Statics
	{
		struct _Script_Automafarm_eventKFOnHotbarSlotChanged_Parms
		{
			int32 CurrHotbarSlot;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrHotbarSlot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Automafarm_KFOnHotbarSlotChanged__DelegateSignature_Statics::NewProp_CurrHotbarSlot = { "CurrHotbarSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Automafarm_eventKFOnHotbarSlotChanged_Parms, CurrHotbarSlot), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Automafarm_KFOnHotbarSlotChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Automafarm_KFOnHotbarSlotChanged__DelegateSignature_Statics::NewProp_CurrHotbarSlot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Automafarm_KFOnHotbarSlotChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Automafarm_KFOnHotbarSlotChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Automafarm, nullptr, "KFOnHotbarSlotChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Automafarm_KFOnHotbarSlotChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Automafarm_KFOnHotbarSlotChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Automafarm_KFOnHotbarSlotChanged__DelegateSignature_Statics::_Script_Automafarm_eventKFOnHotbarSlotChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Automafarm_KFOnHotbarSlotChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Automafarm_KFOnHotbarSlotChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Automafarm_KFOnHotbarSlotChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Automafarm_KFOnHotbarSlotChanged__DelegateSignature_Statics::_Script_Automafarm_eventKFOnHotbarSlotChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Automafarm_KFOnHotbarSlotChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Automafarm_KFOnHotbarSlotChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FKFOnHotbarSlotChanged_DelegateWrapper(const FMulticastScriptDelegate& KFOnHotbarSlotChanged, int32 CurrHotbarSlot)
{
	struct _Script_Automafarm_eventKFOnHotbarSlotChanged_Parms
	{
		int32 CurrHotbarSlot;
	};
	_Script_Automafarm_eventKFOnHotbarSlotChanged_Parms Parms;
	Parms.CurrHotbarSlot=CurrHotbarSlot;
	KFOnHotbarSlotChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(AAutomafarmPlayerController::execSetHotbar)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InHotbarPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHotbar(Z_Param_InHotbarPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAutomafarmPlayerController::execHotbar9)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Hotbar9(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAutomafarmPlayerController::execHotbar8)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Hotbar8(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAutomafarmPlayerController::execHotbar7)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Hotbar7(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAutomafarmPlayerController::execHotbar6)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Hotbar6(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAutomafarmPlayerController::execHotbar5)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Hotbar5(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAutomafarmPlayerController::execHotbar4)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Hotbar4(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAutomafarmPlayerController::execHotbar3)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Hotbar3(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAutomafarmPlayerController::execHotbar2)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Hotbar2(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAutomafarmPlayerController::execHotbar1)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Hotbar1(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAutomafarmPlayerController::execHotbar0)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Hotbar0(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAutomafarmPlayerController::execSaveLevel)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveLevel(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAutomafarmPlayerController::execScroll)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Scroll(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAutomafarmPlayerController::execInventory)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Inventory(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAutomafarmPlayerController::execDismantle)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Dismantle(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAutomafarmPlayerController::execInteract)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAutomafarmPlayerController::execLook)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Look(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAutomafarmPlayerController::execMove)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Move(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAutomafarmPlayerController::execStopJumping)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopJumping(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAutomafarmPlayerController::execJump)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Jump(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	void AAutomafarmPlayerController::StaticRegisterNativesAAutomafarmPlayerController()
	{
		UClass* Class = AAutomafarmPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Dismantle", &AAutomafarmPlayerController::execDismantle },
			{ "Hotbar0", &AAutomafarmPlayerController::execHotbar0 },
			{ "Hotbar1", &AAutomafarmPlayerController::execHotbar1 },
			{ "Hotbar2", &AAutomafarmPlayerController::execHotbar2 },
			{ "Hotbar3", &AAutomafarmPlayerController::execHotbar3 },
			{ "Hotbar4", &AAutomafarmPlayerController::execHotbar4 },
			{ "Hotbar5", &AAutomafarmPlayerController::execHotbar5 },
			{ "Hotbar6", &AAutomafarmPlayerController::execHotbar6 },
			{ "Hotbar7", &AAutomafarmPlayerController::execHotbar7 },
			{ "Hotbar8", &AAutomafarmPlayerController::execHotbar8 },
			{ "Hotbar9", &AAutomafarmPlayerController::execHotbar9 },
			{ "Interact", &AAutomafarmPlayerController::execInteract },
			{ "Inventory", &AAutomafarmPlayerController::execInventory },
			{ "Jump", &AAutomafarmPlayerController::execJump },
			{ "Look", &AAutomafarmPlayerController::execLook },
			{ "Move", &AAutomafarmPlayerController::execMove },
			{ "SaveLevel", &AAutomafarmPlayerController::execSaveLevel },
			{ "Scroll", &AAutomafarmPlayerController::execScroll },
			{ "SetHotbar", &AAutomafarmPlayerController::execSetHotbar },
			{ "StopJumping", &AAutomafarmPlayerController::execStopJumping },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAutomafarmPlayerController_Dismantle_Statics
	{
		struct AutomafarmPlayerController_eventDismantle_Parms
		{
			FInputActionValue Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Dismantle_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmPlayerController_Dismantle_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomafarmPlayerController_eventDismantle_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Dismantle_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_AAutomafarmPlayerController_Dismantle_Statics::NewProp_Value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmPlayerController_Dismantle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmPlayerController_Dismantle_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Dismantle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmPlayerController_Dismantle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmPlayerController, nullptr, "Dismantle", nullptr, nullptr, Z_Construct_UFunction_AAutomafarmPlayerController_Dismantle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Dismantle_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Dismantle_Statics::AutomafarmPlayerController_eventDismantle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Dismantle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutomafarmPlayerController_Dismantle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Dismantle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Dismantle_Statics::AutomafarmPlayerController_eventDismantle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAutomafarmPlayerController_Dismantle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutomafarmPlayerController_Dismantle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar0_Statics
	{
		struct AutomafarmPlayerController_eventHotbar0_Parms
		{
			FInputActionValue Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar0_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar0_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomafarmPlayerController_eventHotbar0_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar0_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar0_Statics::NewProp_Value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar0_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar0_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar0_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Disgusting\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Disgusting" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmPlayerController, nullptr, "Hotbar0", nullptr, nullptr, Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar0_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar0_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar0_Statics::AutomafarmPlayerController_eventHotbar0_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar0_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar0_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar0_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar0_Statics::AutomafarmPlayerController_eventHotbar0_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar0()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar1_Statics
	{
		struct AutomafarmPlayerController_eventHotbar1_Parms
		{
			FInputActionValue Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar1_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar1_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomafarmPlayerController_eventHotbar1_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar1_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar1_Statics::NewProp_Value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar1_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar1_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar1_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmPlayerController, nullptr, "Hotbar1", nullptr, nullptr, Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar1_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar1_Statics::AutomafarmPlayerController_eventHotbar1_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar1_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar1_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar1_Statics::AutomafarmPlayerController_eventHotbar1_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar2_Statics
	{
		struct AutomafarmPlayerController_eventHotbar2_Parms
		{
			FInputActionValue Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar2_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar2_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomafarmPlayerController_eventHotbar2_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar2_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar2_Statics::NewProp_Value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar2_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmPlayerController, nullptr, "Hotbar2", nullptr, nullptr, Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar2_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar2_Statics::AutomafarmPlayerController_eventHotbar2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar2_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar2_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar2_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar2_Statics::AutomafarmPlayerController_eventHotbar2_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar3_Statics
	{
		struct AutomafarmPlayerController_eventHotbar3_Parms
		{
			FInputActionValue Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar3_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar3_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomafarmPlayerController_eventHotbar3_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar3_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar3_Statics::NewProp_Value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar3_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar3_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar3_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmPlayerController, nullptr, "Hotbar3", nullptr, nullptr, Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar3_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar3_Statics::AutomafarmPlayerController_eventHotbar3_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar3_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar3_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar3_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar3_Statics::AutomafarmPlayerController_eventHotbar3_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar4_Statics
	{
		struct AutomafarmPlayerController_eventHotbar4_Parms
		{
			FInputActionValue Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar4_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar4_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomafarmPlayerController_eventHotbar4_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar4_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar4_Statics::NewProp_Value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar4_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar4_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar4_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmPlayerController, nullptr, "Hotbar4", nullptr, nullptr, Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar4_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar4_Statics::AutomafarmPlayerController_eventHotbar4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar4_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar4_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar4_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar4_Statics::AutomafarmPlayerController_eventHotbar4_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar5_Statics
	{
		struct AutomafarmPlayerController_eventHotbar5_Parms
		{
			FInputActionValue Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar5_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar5_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomafarmPlayerController_eventHotbar5_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar5_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar5_Statics::NewProp_Value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar5_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar5_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar5_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar5_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmPlayerController, nullptr, "Hotbar5", nullptr, nullptr, Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar5_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar5_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar5_Statics::AutomafarmPlayerController_eventHotbar5_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar5_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar5_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar5_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar5_Statics::AutomafarmPlayerController_eventHotbar5_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar5()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar5_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar6_Statics
	{
		struct AutomafarmPlayerController_eventHotbar6_Parms
		{
			FInputActionValue Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar6_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar6_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomafarmPlayerController_eventHotbar6_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar6_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar6_Statics::NewProp_Value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar6_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar6_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar6_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar6_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmPlayerController, nullptr, "Hotbar6", nullptr, nullptr, Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar6_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar6_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar6_Statics::AutomafarmPlayerController_eventHotbar6_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar6_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar6_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar6_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar6_Statics::AutomafarmPlayerController_eventHotbar6_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar6()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar6_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar7_Statics
	{
		struct AutomafarmPlayerController_eventHotbar7_Parms
		{
			FInputActionValue Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar7_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar7_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomafarmPlayerController_eventHotbar7_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar7_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar7_Statics::NewProp_Value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar7_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar7_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar7_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar7_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmPlayerController, nullptr, "Hotbar7", nullptr, nullptr, Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar7_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar7_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar7_Statics::AutomafarmPlayerController_eventHotbar7_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar7_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar7_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar7_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar7_Statics::AutomafarmPlayerController_eventHotbar7_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar7()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar7_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar8_Statics
	{
		struct AutomafarmPlayerController_eventHotbar8_Parms
		{
			FInputActionValue Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar8_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar8_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomafarmPlayerController_eventHotbar8_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar8_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar8_Statics::NewProp_Value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar8_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar8_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar8_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar8_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmPlayerController, nullptr, "Hotbar8", nullptr, nullptr, Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar8_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar8_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar8_Statics::AutomafarmPlayerController_eventHotbar8_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar8_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar8_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar8_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar8_Statics::AutomafarmPlayerController_eventHotbar8_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar8()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar8_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar9_Statics
	{
		struct AutomafarmPlayerController_eventHotbar9_Parms
		{
			FInputActionValue Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar9_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar9_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomafarmPlayerController_eventHotbar9_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar9_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar9_Statics::NewProp_Value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar9_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar9_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar9_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar9_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmPlayerController, nullptr, "Hotbar9", nullptr, nullptr, Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar9_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar9_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar9_Statics::AutomafarmPlayerController_eventHotbar9_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar9_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar9_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar9_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar9_Statics::AutomafarmPlayerController_eventHotbar9_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar9()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar9_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAutomafarmPlayerController_Interact_Statics
	{
		struct AutomafarmPlayerController_eventInteract_Parms
		{
			FInputActionValue Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Interact_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmPlayerController_Interact_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomafarmPlayerController_eventInteract_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Interact_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_AAutomafarmPlayerController_Interact_Statics::NewProp_Value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmPlayerController_Interact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmPlayerController_Interact_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Interact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmPlayerController_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmPlayerController, nullptr, "Interact", nullptr, nullptr, Z_Construct_UFunction_AAutomafarmPlayerController_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Interact_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Interact_Statics::AutomafarmPlayerController_eventInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutomafarmPlayerController_Interact_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Interact_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Interact_Statics::AutomafarmPlayerController_eventInteract_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAutomafarmPlayerController_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutomafarmPlayerController_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAutomafarmPlayerController_Inventory_Statics
	{
		struct AutomafarmPlayerController_eventInventory_Parms
		{
			FInputActionValue Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Inventory_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmPlayerController_Inventory_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomafarmPlayerController_eventInventory_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Inventory_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_AAutomafarmPlayerController_Inventory_Statics::NewProp_Value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmPlayerController_Inventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmPlayerController_Inventory_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Inventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmPlayerController_Inventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmPlayerController, nullptr, "Inventory", nullptr, nullptr, Z_Construct_UFunction_AAutomafarmPlayerController_Inventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Inventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Inventory_Statics::AutomafarmPlayerController_eventInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Inventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutomafarmPlayerController_Inventory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Inventory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Inventory_Statics::AutomafarmPlayerController_eventInventory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAutomafarmPlayerController_Inventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutomafarmPlayerController_Inventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAutomafarmPlayerController_Jump_Statics
	{
		struct AutomafarmPlayerController_eventJump_Parms
		{
			FInputActionValue Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Jump_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmPlayerController_Jump_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomafarmPlayerController_eventJump_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Jump_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_AAutomafarmPlayerController_Jump_Statics::NewProp_Value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmPlayerController_Jump_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmPlayerController_Jump_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Jump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmPlayerController_Jump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmPlayerController, nullptr, "Jump", nullptr, nullptr, Z_Construct_UFunction_AAutomafarmPlayerController_Jump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Jump_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Jump_Statics::AutomafarmPlayerController_eventJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Jump_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutomafarmPlayerController_Jump_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Jump_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Jump_Statics::AutomafarmPlayerController_eventJump_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAutomafarmPlayerController_Jump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutomafarmPlayerController_Jump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAutomafarmPlayerController_Look_Statics
	{
		struct AutomafarmPlayerController_eventLook_Parms
		{
			FInputActionValue Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Look_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmPlayerController_Look_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomafarmPlayerController_eventLook_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Look_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_AAutomafarmPlayerController_Look_Statics::NewProp_Value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmPlayerController_Look_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmPlayerController_Look_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Look_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmPlayerController_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmPlayerController, nullptr, "Look", nullptr, nullptr, Z_Construct_UFunction_AAutomafarmPlayerController_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Look_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Look_Statics::AutomafarmPlayerController_eventLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutomafarmPlayerController_Look_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Look_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Look_Statics::AutomafarmPlayerController_eventLook_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAutomafarmPlayerController_Look()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutomafarmPlayerController_Look_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAutomafarmPlayerController_Move_Statics
	{
		struct AutomafarmPlayerController_eventMove_Parms
		{
			FInputActionValue Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Move_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmPlayerController_Move_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomafarmPlayerController_eventMove_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Move_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_AAutomafarmPlayerController_Move_Statics::NewProp_Value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmPlayerController_Move_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmPlayerController_Move_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Move_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmPlayerController_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmPlayerController, nullptr, "Move", nullptr, nullptr, Z_Construct_UFunction_AAutomafarmPlayerController_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Move_Statics::AutomafarmPlayerController_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutomafarmPlayerController_Move_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Move_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Move_Statics::AutomafarmPlayerController_eventMove_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAutomafarmPlayerController_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutomafarmPlayerController_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAutomafarmPlayerController_SaveLevel_Statics
	{
		struct AutomafarmPlayerController_eventSaveLevel_Parms
		{
			FInputActionValue Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_SaveLevel_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmPlayerController_SaveLevel_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomafarmPlayerController_eventSaveLevel_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_SaveLevel_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_AAutomafarmPlayerController_SaveLevel_Statics::NewProp_Value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmPlayerController_SaveLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmPlayerController_SaveLevel_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_SaveLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmPlayerController_SaveLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmPlayerController, nullptr, "SaveLevel", nullptr, nullptr, Z_Construct_UFunction_AAutomafarmPlayerController_SaveLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_SaveLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_SaveLevel_Statics::AutomafarmPlayerController_eventSaveLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_SaveLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutomafarmPlayerController_SaveLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_SaveLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_SaveLevel_Statics::AutomafarmPlayerController_eventSaveLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAutomafarmPlayerController_SaveLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutomafarmPlayerController_SaveLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAutomafarmPlayerController_Scroll_Statics
	{
		struct AutomafarmPlayerController_eventScroll_Parms
		{
			FInputActionValue Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Scroll_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmPlayerController_Scroll_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomafarmPlayerController_eventScroll_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Scroll_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_AAutomafarmPlayerController_Scroll_Statics::NewProp_Value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmPlayerController_Scroll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmPlayerController_Scroll_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Scroll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmPlayerController_Scroll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmPlayerController, nullptr, "Scroll", nullptr, nullptr, Z_Construct_UFunction_AAutomafarmPlayerController_Scroll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Scroll_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Scroll_Statics::AutomafarmPlayerController_eventScroll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Scroll_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutomafarmPlayerController_Scroll_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Scroll_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Scroll_Statics::AutomafarmPlayerController_eventScroll_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAutomafarmPlayerController_Scroll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutomafarmPlayerController_Scroll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAutomafarmPlayerController_SetHotbar_Statics
	{
		struct AutomafarmPlayerController_eventSetHotbar_Parms
		{
			int32 InHotbarPosition;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InHotbarPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutomafarmPlayerController_SetHotbar_Statics::NewProp_InHotbarPosition = { "InHotbarPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomafarmPlayerController_eventSetHotbar_Parms, InHotbarPosition), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmPlayerController_SetHotbar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmPlayerController_SetHotbar_Statics::NewProp_InHotbarPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_SetHotbar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmPlayerController_SetHotbar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmPlayerController, nullptr, "SetHotbar", nullptr, nullptr, Z_Construct_UFunction_AAutomafarmPlayerController_SetHotbar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_SetHotbar_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_SetHotbar_Statics::AutomafarmPlayerController_eventSetHotbar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_SetHotbar_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutomafarmPlayerController_SetHotbar_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_SetHotbar_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_SetHotbar_Statics::AutomafarmPlayerController_eventSetHotbar_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAutomafarmPlayerController_SetHotbar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutomafarmPlayerController_SetHotbar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAutomafarmPlayerController_StopJumping_Statics
	{
		struct AutomafarmPlayerController_eventStopJumping_Parms
		{
			FInputActionValue Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_StopJumping_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmPlayerController_StopJumping_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomafarmPlayerController_eventStopJumping_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_StopJumping_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_AAutomafarmPlayerController_StopJumping_Statics::NewProp_Value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmPlayerController_StopJumping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmPlayerController_StopJumping_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_StopJumping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmPlayerController_StopJumping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmPlayerController, nullptr, "StopJumping", nullptr, nullptr, Z_Construct_UFunction_AAutomafarmPlayerController_StopJumping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_StopJumping_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_StopJumping_Statics::AutomafarmPlayerController_eventStopJumping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_StopJumping_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAutomafarmPlayerController_StopJumping_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_StopJumping_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_StopJumping_Statics::AutomafarmPlayerController_eventStopJumping_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAutomafarmPlayerController_StopJumping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutomafarmPlayerController_StopJumping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAutomafarmPlayerController);
	UClass* Z_Construct_UClass_AAutomafarmPlayerController_NoRegister()
	{
		return AAutomafarmPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AAutomafarmPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHotbarSlotChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHotbarSlotChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DismantleAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DismantleAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScrollAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ScrollAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hotbar0Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Hotbar0Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hotbar1Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Hotbar1Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hotbar2Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Hotbar2Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hotbar3Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Hotbar3Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hotbar4Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Hotbar4Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hotbar5Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Hotbar5Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hotbar6Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Hotbar6Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hotbar7Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Hotbar7Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hotbar8Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Hotbar8Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hotbar9Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Hotbar9Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerHudClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerHudClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerHud_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerHud;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrHotbarSlot_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrHotbarSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlipHotbarScrollDirection_MetaData[];
#endif
		static void NewProp_FlipHotbarScrollDirection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FlipHotbarScrollDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAutomafarmPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AAutomafarmPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAutomafarmPlayerController_Dismantle, "Dismantle" }, // 939932587
		{ &Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar0, "Hotbar0" }, // 45409370
		{ &Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar1, "Hotbar1" }, // 1699859045
		{ &Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar2, "Hotbar2" }, // 3374921031
		{ &Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar3, "Hotbar3" }, // 3019741749
		{ &Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar4, "Hotbar4" }, // 1435382564
		{ &Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar5, "Hotbar5" }, // 3494850206
		{ &Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar6, "Hotbar6" }, // 3173592683
		{ &Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar7, "Hotbar7" }, // 999972976
		{ &Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar8, "Hotbar8" }, // 3801220299
		{ &Z_Construct_UFunction_AAutomafarmPlayerController_Hotbar9, "Hotbar9" }, // 2208474551
		{ &Z_Construct_UFunction_AAutomafarmPlayerController_Interact, "Interact" }, // 586452237
		{ &Z_Construct_UFunction_AAutomafarmPlayerController_Inventory, "Inventory" }, // 267388760
		{ &Z_Construct_UFunction_AAutomafarmPlayerController_Jump, "Jump" }, // 2123023280
		{ &Z_Construct_UFunction_AAutomafarmPlayerController_Look, "Look" }, // 2455691185
		{ &Z_Construct_UFunction_AAutomafarmPlayerController_Move, "Move" }, // 1241591756
		{ &Z_Construct_UFunction_AAutomafarmPlayerController_SaveLevel, "SaveLevel" }, // 304969954
		{ &Z_Construct_UFunction_AAutomafarmPlayerController_Scroll, "Scroll" }, // 338287539
		{ &Z_Construct_UFunction_AAutomafarmPlayerController_SetHotbar, "SetHotbar" }, // 2518282904
		{ &Z_Construct_UFunction_AAutomafarmPlayerController_StopJumping, "StopJumping" }, // 788644619
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Characters/AutomafarmPlayerController.h" },
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_OnHotbarSlotChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_OnHotbarSlotChanged = { "OnHotbarSlotChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutomafarmPlayerController, OnHotbarSlotChanged), Z_Construct_UDelegateFunction_Automafarm_KFOnHotbarSlotChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_OnHotbarSlotChanged_MetaData), Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_OnHotbarSlotChanged_MetaData) }; // 146767424
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutomafarmPlayerController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutomafarmPlayerController, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_JumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutomafarmPlayerController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutomafarmPlayerController, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_InteractAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interact Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interact Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutomafarmPlayerController, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_InteractAction_MetaData), Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_InteractAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_DismantleAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dismantle Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dismantle Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_DismantleAction = { "DismantleAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutomafarmPlayerController, DismantleAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_DismantleAction_MetaData), Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_DismantleAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_InventoryAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interact Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interact Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_InventoryAction = { "InventoryAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutomafarmPlayerController, InventoryAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_InventoryAction_MetaData), Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_InventoryAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_ScrollAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Scroll Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scroll Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_ScrollAction = { "ScrollAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutomafarmPlayerController, ScrollAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_ScrollAction_MetaData), Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_ScrollAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_SaveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Save Level Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Save Level Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_SaveAction = { "SaveAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutomafarmPlayerController, SaveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_SaveAction_MetaData), Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_SaveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar0Action_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hotbar Numbers Input Actions */////////So ugly\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hotbar Numbers Input Actions ////////So ugly" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar0Action = { "Hotbar0Action", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutomafarmPlayerController, Hotbar0Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar0Action_MetaData), Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar0Action_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar1Action_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar1Action = { "Hotbar1Action", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutomafarmPlayerController, Hotbar1Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar1Action_MetaData), Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar1Action_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar2Action_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar2Action = { "Hotbar2Action", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutomafarmPlayerController, Hotbar2Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar2Action_MetaData), Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar2Action_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar3Action_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar3Action = { "Hotbar3Action", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutomafarmPlayerController, Hotbar3Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar3Action_MetaData), Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar3Action_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar4Action_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar4Action = { "Hotbar4Action", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutomafarmPlayerController, Hotbar4Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar4Action_MetaData), Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar4Action_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar5Action_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar5Action = { "Hotbar5Action", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutomafarmPlayerController, Hotbar5Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar5Action_MetaData), Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar5Action_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar6Action_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar6Action = { "Hotbar6Action", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutomafarmPlayerController, Hotbar6Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar6Action_MetaData), Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar6Action_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar7Action_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar7Action = { "Hotbar7Action", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutomafarmPlayerController, Hotbar7Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar7Action_MetaData), Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar7Action_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar8Action_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar8Action = { "Hotbar8Action", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutomafarmPlayerController, Hotbar8Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar8Action_MetaData), Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar8Action_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar9Action_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar9Action = { "Hotbar9Action", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutomafarmPlayerController, Hotbar9Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar9Action_MetaData), Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar9Action_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_PlayerHudClass_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_PlayerHudClass = { "PlayerHudClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutomafarmPlayerController, PlayerHudClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPlayerHud_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_PlayerHudClass_MetaData), Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_PlayerHudClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_PlayerHud_MetaData[] = {
		{ "Category", "Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_PlayerHud = { "PlayerHud", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutomafarmPlayerController, PlayerHud), Z_Construct_UClass_UPlayerHud_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_PlayerHud_MetaData), Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_PlayerHud_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_CurrHotbarSlot_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_CurrHotbarSlot = { "CurrHotbarSlot", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAutomafarmPlayerController, CurrHotbarSlot), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_CurrHotbarSlot_MetaData), Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_CurrHotbarSlot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_FlipHotbarScrollDirection_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	void Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_FlipHotbarScrollDirection_SetBit(void* Obj)
	{
		((AAutomafarmPlayerController*)Obj)->FlipHotbarScrollDirection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_FlipHotbarScrollDirection = { "FlipHotbarScrollDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAutomafarmPlayerController), &Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_FlipHotbarScrollDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_FlipHotbarScrollDirection_MetaData), Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_FlipHotbarScrollDirection_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAutomafarmPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_OnHotbarSlotChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_InteractAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_DismantleAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_InventoryAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_ScrollAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_SaveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar0Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar1Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar2Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar3Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar4Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar5Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar6Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar7Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar8Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_Hotbar9Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_PlayerHudClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_PlayerHud,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_CurrHotbarSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_FlipHotbarScrollDirection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAutomafarmPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAutomafarmPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::ClassParams = {
		&AAutomafarmPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAutomafarmPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AAutomafarmPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAutomafarmPlayerController()
	{
		if (!Z_Registration_Info_UClass_AAutomafarmPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAutomafarmPlayerController.OuterSingleton, Z_Construct_UClass_AAutomafarmPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAutomafarmPlayerController.OuterSingleton;
	}
	template<> AUTOMAFARM_API UClass* StaticClass<AAutomafarmPlayerController>()
	{
		return AAutomafarmPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAutomafarmPlayerController);
	AAutomafarmPlayerController::~AAutomafarmPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Characters_AutomafarmPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Characters_AutomafarmPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAutomafarmPlayerController, AAutomafarmPlayerController::StaticClass, TEXT("AAutomafarmPlayerController"), &Z_Registration_Info_UClass_AAutomafarmPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAutomafarmPlayerController), 3737255442U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Characters_AutomafarmPlayerController_h_2179426292(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Characters_AutomafarmPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Characters_AutomafarmPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
