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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	DEFINE_FUNCTION(AAutomafarmPlayerController::execInventory)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Inventory(Z_Param_Out_Value);
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
			{ "Interact", &AAutomafarmPlayerController::execInteract },
			{ "Inventory", &AAutomafarmPlayerController::execInventory },
			{ "Jump", &AAutomafarmPlayerController::execJump },
			{ "Look", &AAutomafarmPlayerController::execLook },
			{ "Move", &AAutomafarmPlayerController::execMove },
			{ "StopJumping", &AAutomafarmPlayerController::execStopJumping },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmPlayerController_Interact_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomafarmPlayerController_eventInteract_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(Z_Construct_UFunction_AAutomafarmPlayerController_Interact_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Interact_Statics::NewProp_Value_MetaData)) }; // 2388133963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmPlayerController_Interact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmPlayerController_Interact_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Interact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmPlayerController_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmPlayerController, nullptr, "Interact", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Interact_Statics::AutomafarmPlayerController_eventInteract_Parms), Z_Construct_UFunction_AAutomafarmPlayerController_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Interact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAutomafarmPlayerController_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Interact_Statics::Function_MetaDataParams)) };
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmPlayerController_Inventory_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomafarmPlayerController_eventInventory_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(Z_Construct_UFunction_AAutomafarmPlayerController_Inventory_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Inventory_Statics::NewProp_Value_MetaData)) }; // 2388133963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmPlayerController_Inventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmPlayerController_Inventory_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Inventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmPlayerController_Inventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmPlayerController, nullptr, "Inventory", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Inventory_Statics::AutomafarmPlayerController_eventInventory_Parms), Z_Construct_UFunction_AAutomafarmPlayerController_Inventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Inventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAutomafarmPlayerController_Inventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Inventory_Statics::Function_MetaDataParams)) };
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmPlayerController_Jump_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomafarmPlayerController_eventJump_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(Z_Construct_UFunction_AAutomafarmPlayerController_Jump_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Jump_Statics::NewProp_Value_MetaData)) }; // 2388133963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmPlayerController_Jump_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmPlayerController_Jump_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Jump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmPlayerController_Jump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmPlayerController, nullptr, "Jump", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Jump_Statics::AutomafarmPlayerController_eventJump_Parms), Z_Construct_UFunction_AAutomafarmPlayerController_Jump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Jump_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAutomafarmPlayerController_Jump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Jump_Statics::Function_MetaDataParams)) };
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmPlayerController_Look_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomafarmPlayerController_eventLook_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(Z_Construct_UFunction_AAutomafarmPlayerController_Look_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Look_Statics::NewProp_Value_MetaData)) }; // 2388133963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmPlayerController_Look_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmPlayerController_Look_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Look_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmPlayerController_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmPlayerController, nullptr, "Look", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Look_Statics::AutomafarmPlayerController_eventLook_Parms), Z_Construct_UFunction_AAutomafarmPlayerController_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Look_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAutomafarmPlayerController_Look_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Look_Statics::Function_MetaDataParams)) };
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmPlayerController_Move_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomafarmPlayerController_eventMove_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(Z_Construct_UFunction_AAutomafarmPlayerController_Move_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Move_Statics::NewProp_Value_MetaData)) }; // 2388133963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmPlayerController_Move_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmPlayerController_Move_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_Move_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmPlayerController_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmPlayerController, nullptr, "Move", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_Move_Statics::AutomafarmPlayerController_eventMove_Parms), Z_Construct_UFunction_AAutomafarmPlayerController_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Move_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAutomafarmPlayerController_Move_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_Move_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAutomafarmPlayerController_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutomafarmPlayerController_Move_Statics::FuncParams);
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmPlayerController_StopJumping_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomafarmPlayerController_eventStopJumping_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(Z_Construct_UFunction_AAutomafarmPlayerController_StopJumping_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_StopJumping_Statics::NewProp_Value_MetaData)) }; // 2388133963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmPlayerController_StopJumping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmPlayerController_StopJumping_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmPlayerController_StopJumping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmPlayerController_StopJumping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmPlayerController, nullptr, "StopJumping", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAutomafarmPlayerController_StopJumping_Statics::AutomafarmPlayerController_eventStopJumping_Parms), Z_Construct_UFunction_AAutomafarmPlayerController_StopJumping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_StopJumping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAutomafarmPlayerController_StopJumping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmPlayerController_StopJumping_Statics::Function_MetaDataParams)) };
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerHudClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerHudClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerHud_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerHud;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAutomafarmPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAutomafarmPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAutomafarmPlayerController_Interact, "Interact" }, // 770360804
		{ &Z_Construct_UFunction_AAutomafarmPlayerController_Inventory, "Inventory" }, // 794203869
		{ &Z_Construct_UFunction_AAutomafarmPlayerController_Jump, "Jump" }, // 1344399247
		{ &Z_Construct_UFunction_AAutomafarmPlayerController_Look, "Look" }, // 2818481332
		{ &Z_Construct_UFunction_AAutomafarmPlayerController_Move, "Move" }, // 404575330
		{ &Z_Construct_UFunction_AAutomafarmPlayerController_StopJumping, "StopJumping" }, // 1944954447
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Characters/AutomafarmPlayerController.h" },
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** MappingContext */" },
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
		{ "ToolTip", "MappingContext" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAutomafarmPlayerController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_DefaultMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_DefaultMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Jump Input Action */" },
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
		{ "ToolTip", "Jump Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAutomafarmPlayerController, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_JumpAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_JumpAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Move Input Action */" },
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
		{ "ToolTip", "Move Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAutomafarmPlayerController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_MoveAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Look Input Action */" },
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
		{ "ToolTip", "Look Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAutomafarmPlayerController, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_LookAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_LookAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_InteractAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Interact Input Action */" },
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
		{ "ToolTip", "Interact Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAutomafarmPlayerController, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_InteractAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_InteractAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_InventoryAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Interact Input Action */" },
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
		{ "ToolTip", "Interact Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_InventoryAction = { "InventoryAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAutomafarmPlayerController, InventoryAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_InventoryAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_InventoryAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_PlayerHudClass_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_PlayerHudClass = { "PlayerHudClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAutomafarmPlayerController, PlayerHudClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPlayerHud_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_PlayerHudClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_PlayerHudClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_PlayerHud_MetaData[] = {
		{ "Category", "Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/AutomafarmPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_PlayerHud = { "PlayerHud", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAutomafarmPlayerController, PlayerHud), Z_Construct_UClass_UPlayerHud_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_PlayerHud_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_PlayerHud_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAutomafarmPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_InteractAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_InventoryAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_PlayerHudClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmPlayerController_Statics::NewProp_PlayerHud,
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
		METADATA_PARAMS(Z_Construct_UClass_AAutomafarmPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmPlayerController_Statics::Class_MetaDataParams))
	};
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
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAutomafarmPlayerController, AAutomafarmPlayerController::StaticClass, TEXT("AAutomafarmPlayerController"), &Z_Registration_Info_UClass_AAutomafarmPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAutomafarmPlayerController), 522846946U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmPlayerController_h_712366286(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Characters_AutomafarmPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
