// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/AutomafarmCharacter.h"
#include "InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomafarmCharacter() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_AAutomafarmCharacter();
	AUTOMAFARM_API UClass* Z_Construct_UClass_AAutomafarmCharacter_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_APlaceableObject_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UInventory_NoRegister();
	AUTOMAFARM_API UFunction* Z_Construct_UDelegateFunction_Automafarm_KFOnPlayerMoved__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Automafarm_KFOnPlayerMoved__DelegateSignature_Statics
	{
		struct _Script_Automafarm_eventKFOnPlayerMoved_Parms
		{
			FVector PlayerLoc;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerLoc;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Automafarm_KFOnPlayerMoved__DelegateSignature_Statics::NewProp_PlayerLoc = { "PlayerLoc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Automafarm_eventKFOnPlayerMoved_Parms, PlayerLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Automafarm_KFOnPlayerMoved__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Automafarm_KFOnPlayerMoved__DelegateSignature_Statics::NewProp_PlayerLoc,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Automafarm_KFOnPlayerMoved__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutomafarmCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Automafarm_KFOnPlayerMoved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Automafarm, nullptr, "KFOnPlayerMoved__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Automafarm_KFOnPlayerMoved__DelegateSignature_Statics::_Script_Automafarm_eventKFOnPlayerMoved_Parms), Z_Construct_UDelegateFunction_Automafarm_KFOnPlayerMoved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Automafarm_KFOnPlayerMoved__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Automafarm_KFOnPlayerMoved__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Automafarm_KFOnPlayerMoved__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Automafarm_KFOnPlayerMoved__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Automafarm_KFOnPlayerMoved__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FKFOnPlayerMoved_DelegateWrapper(const FMulticastScriptDelegate& KFOnPlayerMoved, FVector PlayerLoc)
{
	struct _Script_Automafarm_eventKFOnPlayerMoved_Parms
	{
		FVector PlayerLoc;
	};
	_Script_Automafarm_eventKFOnPlayerMoved_Parms Parms;
	Parms.PlayerLoc=PlayerLoc;
	KFOnPlayerMoved.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(AAutomafarmCharacter::execRotateByYaw)
	{
		P_GET_TARRAY(FVector,Z_Param_Positions);
		P_GET_STRUCT(FVector,Z_Param_ForwardVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->RotateByYaw(Z_Param_Positions,Z_Param_ForwardVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAutomafarmCharacter::execRoundVector)
	{
		P_GET_STRUCT(FVector,Z_Param_Vector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->RoundVector(Z_Param_Vector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAutomafarmCharacter::execValidPlacement)
	{
		P_GET_OBJECT(UClass,Z_Param_placeableClass);
		P_GET_STRUCT(FVector,Z_Param_TileKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ValidPlacement(Z_Param_placeableClass,Z_Param_TileKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAutomafarmCharacter::execPlaceHeldItem)
	{
		P_GET_OBJECT(UClass,Z_Param_placeableClass);
		P_GET_STRUCT(FVector,Z_Param_TileKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaceHeldItem(Z_Param_placeableClass,Z_Param_TileKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAutomafarmCharacter::execAbsoluteToGrid)
	{
		P_GET_STRUCT(FVector,Z_Param_aCoords);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->AbsoluteToGrid(Z_Param_aCoords);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAutomafarmCharacter::execGetFirstPersonCameraComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCameraComponent**)Z_Param__Result=P_THIS->GetFirstPersonCameraComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAutomafarmCharacter::execGetMesh1P)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetMesh1P();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAutomafarmCharacter::execInteract)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAutomafarmCharacter::execLook)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Look(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAutomafarmCharacter::execMove)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Move(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	void AAutomafarmCharacter::StaticRegisterNativesAAutomafarmCharacter()
	{
		UClass* Class = AAutomafarmCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AbsoluteToGrid", &AAutomafarmCharacter::execAbsoluteToGrid },
			{ "GetFirstPersonCameraComponent", &AAutomafarmCharacter::execGetFirstPersonCameraComponent },
			{ "GetMesh1P", &AAutomafarmCharacter::execGetMesh1P },
			{ "Interact", &AAutomafarmCharacter::execInteract },
			{ "Look", &AAutomafarmCharacter::execLook },
			{ "Move", &AAutomafarmCharacter::execMove },
			{ "PlaceHeldItem", &AAutomafarmCharacter::execPlaceHeldItem },
			{ "RotateByYaw", &AAutomafarmCharacter::execRotateByYaw },
			{ "RoundVector", &AAutomafarmCharacter::execRoundVector },
			{ "ValidPlacement", &AAutomafarmCharacter::execValidPlacement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAutomafarmCharacter_AbsoluteToGrid_Statics
	{
		struct AutomafarmCharacter_eventAbsoluteToGrid_Parms
		{
			FVector aCoords;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_aCoords;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmCharacter_AbsoluteToGrid_Statics::NewProp_aCoords = { "aCoords", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomafarmCharacter_eventAbsoluteToGrid_Parms, aCoords), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmCharacter_AbsoluteToGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomafarmCharacter_eventAbsoluteToGrid_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmCharacter_AbsoluteToGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmCharacter_AbsoluteToGrid_Statics::NewProp_aCoords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmCharacter_AbsoluteToGrid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmCharacter_AbsoluteToGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Placement" },
		{ "ModuleRelativePath", "AutomafarmCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmCharacter_AbsoluteToGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmCharacter, nullptr, "AbsoluteToGrid", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAutomafarmCharacter_AbsoluteToGrid_Statics::AutomafarmCharacter_eventAbsoluteToGrid_Parms), Z_Construct_UFunction_AAutomafarmCharacter_AbsoluteToGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmCharacter_AbsoluteToGrid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAutomafarmCharacter_AbsoluteToGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmCharacter_AbsoluteToGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAutomafarmCharacter_AbsoluteToGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutomafarmCharacter_AbsoluteToGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAutomafarmCharacter_GetFirstPersonCameraComponent_Statics
	{
		struct AutomafarmCharacter_eventGetFirstPersonCameraComponent_Parms
		{
			UCameraComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmCharacter_GetFirstPersonCameraComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutomafarmCharacter_GetFirstPersonCameraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomafarmCharacter_eventGetFirstPersonCameraComponent_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAutomafarmCharacter_GetFirstPersonCameraComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmCharacter_GetFirstPersonCameraComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmCharacter_GetFirstPersonCameraComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmCharacter_GetFirstPersonCameraComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmCharacter_GetFirstPersonCameraComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "Comment", "/** Returns FirstPersonCameraComponent subobject **/" },
		{ "ModuleRelativePath", "AutomafarmCharacter.h" },
		{ "ToolTip", "Returns FirstPersonCameraComponent subobject *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmCharacter_GetFirstPersonCameraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmCharacter, nullptr, "GetFirstPersonCameraComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAutomafarmCharacter_GetFirstPersonCameraComponent_Statics::AutomafarmCharacter_eventGetFirstPersonCameraComponent_Parms), Z_Construct_UFunction_AAutomafarmCharacter_GetFirstPersonCameraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmCharacter_GetFirstPersonCameraComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAutomafarmCharacter_GetFirstPersonCameraComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmCharacter_GetFirstPersonCameraComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAutomafarmCharacter_GetFirstPersonCameraComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutomafarmCharacter_GetFirstPersonCameraComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAutomafarmCharacter_GetMesh1P_Statics
	{
		struct AutomafarmCharacter_eventGetMesh1P_Parms
		{
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmCharacter_GetMesh1P_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutomafarmCharacter_GetMesh1P_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomafarmCharacter_eventGetMesh1P_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAutomafarmCharacter_GetMesh1P_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmCharacter_GetMesh1P_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmCharacter_GetMesh1P_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmCharacter_GetMesh1P_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmCharacter_GetMesh1P_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "Comment", "/** Returns Mesh1P subobject **/" },
		{ "ModuleRelativePath", "AutomafarmCharacter.h" },
		{ "ToolTip", "Returns Mesh1P subobject *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmCharacter_GetMesh1P_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmCharacter, nullptr, "GetMesh1P", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAutomafarmCharacter_GetMesh1P_Statics::AutomafarmCharacter_eventGetMesh1P_Parms), Z_Construct_UFunction_AAutomafarmCharacter_GetMesh1P_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmCharacter_GetMesh1P_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAutomafarmCharacter_GetMesh1P_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmCharacter_GetMesh1P_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAutomafarmCharacter_GetMesh1P()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutomafarmCharacter_GetMesh1P_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAutomafarmCharacter_Interact_Statics
	{
		struct AutomafarmCharacter_eventInteract_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmCharacter_Interact_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmCharacter_Interact_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomafarmCharacter_eventInteract_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(Z_Construct_UFunction_AAutomafarmCharacter_Interact_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmCharacter_Interact_Statics::NewProp_Value_MetaData)) }; // 2388133963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmCharacter_Interact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmCharacter_Interact_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmCharacter_Interact_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Called for interaction input */" },
		{ "ModuleRelativePath", "AutomafarmCharacter.h" },
		{ "ToolTip", "Called for interaction input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmCharacter_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmCharacter, nullptr, "Interact", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAutomafarmCharacter_Interact_Statics::AutomafarmCharacter_eventInteract_Parms), Z_Construct_UFunction_AAutomafarmCharacter_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmCharacter_Interact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAutomafarmCharacter_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmCharacter_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAutomafarmCharacter_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutomafarmCharacter_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAutomafarmCharacter_Look_Statics
	{
		struct AutomafarmCharacter_eventLook_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmCharacter_Look_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmCharacter_Look_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomafarmCharacter_eventLook_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(Z_Construct_UFunction_AAutomafarmCharacter_Look_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmCharacter_Look_Statics::NewProp_Value_MetaData)) }; // 2388133963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmCharacter_Look_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmCharacter_Look_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmCharacter_Look_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Called for looking input */" },
		{ "ModuleRelativePath", "AutomafarmCharacter.h" },
		{ "ToolTip", "Called for looking input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmCharacter_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmCharacter, nullptr, "Look", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAutomafarmCharacter_Look_Statics::AutomafarmCharacter_eventLook_Parms), Z_Construct_UFunction_AAutomafarmCharacter_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmCharacter_Look_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAutomafarmCharacter_Look_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmCharacter_Look_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAutomafarmCharacter_Look()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutomafarmCharacter_Look_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAutomafarmCharacter_Move_Statics
	{
		struct AutomafarmCharacter_eventMove_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmCharacter_Move_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmCharacter_Move_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomafarmCharacter_eventMove_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(Z_Construct_UFunction_AAutomafarmCharacter_Move_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmCharacter_Move_Statics::NewProp_Value_MetaData)) }; // 2388133963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmCharacter_Move_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmCharacter_Move_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmCharacter_Move_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Called for movement input */" },
		{ "ModuleRelativePath", "AutomafarmCharacter.h" },
		{ "ToolTip", "Called for movement input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmCharacter_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmCharacter, nullptr, "Move", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAutomafarmCharacter_Move_Statics::AutomafarmCharacter_eventMove_Parms), Z_Construct_UFunction_AAutomafarmCharacter_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmCharacter_Move_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAutomafarmCharacter_Move_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmCharacter_Move_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAutomafarmCharacter_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutomafarmCharacter_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAutomafarmCharacter_PlaceHeldItem_Statics
	{
		struct AutomafarmCharacter_eventPlaceHeldItem_Parms
		{
			TSubclassOf<APlaceableObject>  placeableClass;
			FVector TileKey;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_placeableClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TileKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AAutomafarmCharacter_PlaceHeldItem_Statics::NewProp_placeableClass = { "placeableClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomafarmCharacter_eventPlaceHeldItem_Parms, placeableClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APlaceableObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmCharacter_PlaceHeldItem_Statics::NewProp_TileKey = { "TileKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomafarmCharacter_eventPlaceHeldItem_Parms, TileKey), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmCharacter_PlaceHeldItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmCharacter_PlaceHeldItem_Statics::NewProp_placeableClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmCharacter_PlaceHeldItem_Statics::NewProp_TileKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmCharacter_PlaceHeldItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Placement" },
		{ "ModuleRelativePath", "AutomafarmCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmCharacter_PlaceHeldItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmCharacter, nullptr, "PlaceHeldItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAutomafarmCharacter_PlaceHeldItem_Statics::AutomafarmCharacter_eventPlaceHeldItem_Parms), Z_Construct_UFunction_AAutomafarmCharacter_PlaceHeldItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmCharacter_PlaceHeldItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAutomafarmCharacter_PlaceHeldItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmCharacter_PlaceHeldItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAutomafarmCharacter_PlaceHeldItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutomafarmCharacter_PlaceHeldItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAutomafarmCharacter_RotateByYaw_Statics
	{
		struct AutomafarmCharacter_eventRotateByYaw_Parms
		{
			TArray<FVector> Positions;
			FVector ForwardVector;
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForwardVector;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmCharacter_RotateByYaw_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAutomafarmCharacter_RotateByYaw_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomafarmCharacter_eventRotateByYaw_Parms, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmCharacter_RotateByYaw_Statics::NewProp_ForwardVector = { "ForwardVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomafarmCharacter_eventRotateByYaw_Parms, ForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmCharacter_RotateByYaw_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAutomafarmCharacter_RotateByYaw_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomafarmCharacter_eventRotateByYaw_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmCharacter_RotateByYaw_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmCharacter_RotateByYaw_Statics::NewProp_Positions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmCharacter_RotateByYaw_Statics::NewProp_Positions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmCharacter_RotateByYaw_Statics::NewProp_ForwardVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmCharacter_RotateByYaw_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmCharacter_RotateByYaw_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmCharacter_RotateByYaw_Statics::Function_MetaDataParams[] = {
		{ "Category", "Placement" },
		{ "ModuleRelativePath", "AutomafarmCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmCharacter_RotateByYaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmCharacter, nullptr, "RotateByYaw", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAutomafarmCharacter_RotateByYaw_Statics::AutomafarmCharacter_eventRotateByYaw_Parms), Z_Construct_UFunction_AAutomafarmCharacter_RotateByYaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmCharacter_RotateByYaw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAutomafarmCharacter_RotateByYaw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmCharacter_RotateByYaw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAutomafarmCharacter_RotateByYaw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutomafarmCharacter_RotateByYaw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAutomafarmCharacter_RoundVector_Statics
	{
		struct AutomafarmCharacter_eventRoundVector_Parms
		{
			FVector Vector;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmCharacter_RoundVector_Statics::NewProp_Vector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmCharacter_RoundVector_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomafarmCharacter_eventRoundVector_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAutomafarmCharacter_RoundVector_Statics::NewProp_Vector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmCharacter_RoundVector_Statics::NewProp_Vector_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmCharacter_RoundVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomafarmCharacter_eventRoundVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmCharacter_RoundVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmCharacter_RoundVector_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmCharacter_RoundVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmCharacter_RoundVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Placement" },
		{ "ModuleRelativePath", "AutomafarmCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmCharacter_RoundVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmCharacter, nullptr, "RoundVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAutomafarmCharacter_RoundVector_Statics::AutomafarmCharacter_eventRoundVector_Parms), Z_Construct_UFunction_AAutomafarmCharacter_RoundVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmCharacter_RoundVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAutomafarmCharacter_RoundVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmCharacter_RoundVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAutomafarmCharacter_RoundVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutomafarmCharacter_RoundVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAutomafarmCharacter_ValidPlacement_Statics
	{
		struct AutomafarmCharacter_eventValidPlacement_Parms
		{
			TSubclassOf<APlaceableObject>  placeableClass;
			FVector TileKey;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_placeableClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TileKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AAutomafarmCharacter_ValidPlacement_Statics::NewProp_placeableClass = { "placeableClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomafarmCharacter_eventValidPlacement_Parms, placeableClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APlaceableObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutomafarmCharacter_ValidPlacement_Statics::NewProp_TileKey = { "TileKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomafarmCharacter_eventValidPlacement_Parms, TileKey), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AAutomafarmCharacter_ValidPlacement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AutomafarmCharacter_eventValidPlacement_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAutomafarmCharacter_ValidPlacement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AutomafarmCharacter_eventValidPlacement_Parms), &Z_Construct_UFunction_AAutomafarmCharacter_ValidPlacement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutomafarmCharacter_ValidPlacement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmCharacter_ValidPlacement_Statics::NewProp_placeableClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmCharacter_ValidPlacement_Statics::NewProp_TileKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutomafarmCharacter_ValidPlacement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutomafarmCharacter_ValidPlacement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Placement" },
		{ "ModuleRelativePath", "AutomafarmCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutomafarmCharacter_ValidPlacement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutomafarmCharacter, nullptr, "ValidPlacement", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAutomafarmCharacter_ValidPlacement_Statics::AutomafarmCharacter_eventValidPlacement_Parms), Z_Construct_UFunction_AAutomafarmCharacter_ValidPlacement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmCharacter_ValidPlacement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAutomafarmCharacter_ValidPlacement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutomafarmCharacter_ValidPlacement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAutomafarmCharacter_ValidPlacement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutomafarmCharacter_ValidPlacement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAutomafarmCharacter);
	UClass* Z_Construct_UClass_AAutomafarmCharacter_NoRegister()
	{
		return AAutomafarmCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAutomafarmCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerMoved_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerMoved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TileLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrHotbarSlot_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrHotbarSlot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAutomafarmCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAutomafarmCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAutomafarmCharacter_AbsoluteToGrid, "AbsoluteToGrid" }, // 2451280692
		{ &Z_Construct_UFunction_AAutomafarmCharacter_GetFirstPersonCameraComponent, "GetFirstPersonCameraComponent" }, // 1511155740
		{ &Z_Construct_UFunction_AAutomafarmCharacter_GetMesh1P, "GetMesh1P" }, // 735438813
		{ &Z_Construct_UFunction_AAutomafarmCharacter_Interact, "Interact" }, // 2003420425
		{ &Z_Construct_UFunction_AAutomafarmCharacter_Look, "Look" }, // 2248600703
		{ &Z_Construct_UFunction_AAutomafarmCharacter_Move, "Move" }, // 2351038778
		{ &Z_Construct_UFunction_AAutomafarmCharacter_PlaceHeldItem, "PlaceHeldItem" }, // 3811003916
		{ &Z_Construct_UFunction_AAutomafarmCharacter_RotateByYaw, "RotateByYaw" }, // 1475317302
		{ &Z_Construct_UFunction_AAutomafarmCharacter_RoundVector, "RoundVector" }, // 2823065645
		{ &Z_Construct_UFunction_AAutomafarmCharacter_ValidPlacement, "ValidPlacement" }, // 2892380881
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AutomafarmCharacter.h" },
		{ "ModuleRelativePath", "AutomafarmCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AutomafarmCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAutomafarmCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AutomafarmCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAutomafarmCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** MappingContext */" },
		{ "ModuleRelativePath", "AutomafarmCharacter.h" },
		{ "ToolTip", "MappingContext" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAutomafarmCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_DefaultMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_DefaultMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Jump Input Action */" },
		{ "ModuleRelativePath", "AutomafarmCharacter.h" },
		{ "ToolTip", "Jump Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAutomafarmCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_JumpAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_JumpAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Move Input Action */" },
		{ "ModuleRelativePath", "AutomafarmCharacter.h" },
		{ "ToolTip", "Move Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAutomafarmCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_MoveAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_InteractAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Interact Input Action */" },
		{ "ModuleRelativePath", "AutomafarmCharacter.h" },
		{ "ToolTip", "Interact Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAutomafarmCharacter, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_InteractAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_InteractAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_OnPlayerMoved_MetaData[] = {
		{ "ModuleRelativePath", "AutomafarmCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_OnPlayerMoved = { "OnPlayerMoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAutomafarmCharacter, OnPlayerMoved), Z_Construct_UDelegateFunction_Automafarm_KFOnPlayerMoved__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_OnPlayerMoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_OnPlayerMoved_MetaData)) }; // 2751328312
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Look Input Action */" },
		{ "ModuleRelativePath", "AutomafarmCharacter.h" },
		{ "ToolTip", "Look Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAutomafarmCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_LookAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_LookAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_TileLength_MetaData[] = {
		{ "Category", "AutomafarmCharacter" },
		{ "ClampMin", "0.000001" },
		{ "ModuleRelativePath", "AutomafarmCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_TileLength = { "TileLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAutomafarmCharacter, TileLength), METADATA_PARAMS(Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_TileLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_TileLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_PlayerInventory_MetaData[] = {
		{ "Category", "AutomafarmCharacter" },
		{ "Comment", "// End of APawn interface\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AutomafarmCharacter.h" },
		{ "ToolTip", "End of APawn interface" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_PlayerInventory = { "PlayerInventory", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAutomafarmCharacter, PlayerInventory), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_PlayerInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_PlayerInventory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_CurrHotbarSlot_MetaData[] = {
		{ "Category", "AutomafarmCharacter" },
		{ "ModuleRelativePath", "AutomafarmCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_CurrHotbarSlot = { "CurrHotbarSlot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAutomafarmCharacter, CurrHotbarSlot), METADATA_PARAMS(Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_CurrHotbarSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_CurrHotbarSlot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAutomafarmCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_InteractAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_OnPlayerMoved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_TileLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_PlayerInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutomafarmCharacter_Statics::NewProp_CurrHotbarSlot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAutomafarmCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAutomafarmCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAutomafarmCharacter_Statics::ClassParams = {
		&AAutomafarmCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAutomafarmCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAutomafarmCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAutomafarmCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAutomafarmCharacter()
	{
		if (!Z_Registration_Info_UClass_AAutomafarmCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAutomafarmCharacter.OuterSingleton, Z_Construct_UClass_AAutomafarmCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAutomafarmCharacter.OuterSingleton;
	}
	template<> AUTOMAFARM_API UClass* StaticClass<AAutomafarmCharacter>()
	{
		return AAutomafarmCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAutomafarmCharacter);
	AAutomafarmCharacter::~AAutomafarmCharacter() {}
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_AutomafarmCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_AutomafarmCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAutomafarmCharacter, AAutomafarmCharacter::StaticClass, TEXT("AAutomafarmCharacter"), &Z_Registration_Info_UClass_AAutomafarmCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAutomafarmCharacter), 1847365300U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_AutomafarmCharacter_h_2909115806(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_AutomafarmCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_AutomafarmCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
