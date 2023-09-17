// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomafarm_init() {}
	AUTOMAFARM_API UFunction* Z_Construct_UDelegateFunction_Automafarm_KFOnHotbarSlotChanged__DelegateSignature();
	AUTOMAFARM_API UFunction* Z_Construct_UDelegateFunction_Automafarm_KFOnHourPassed__DelegateSignature();
	AUTOMAFARM_API UFunction* Z_Construct_UDelegateFunction_Automafarm_KFOnInventoryUpdated__DelegateSignature();
	AUTOMAFARM_API UFunction* Z_Construct_UDelegateFunction_Automafarm_KFOnPlayerMoved__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Automafarm;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Automafarm()
	{
		if (!Z_Registration_Info_UPackage__Script_Automafarm.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Automafarm_KFOnHotbarSlotChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Automafarm_KFOnHourPassed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Automafarm_KFOnInventoryUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Automafarm_KFOnPlayerMoved__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Automafarm",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x06E4B97B,
				0x083F0D07,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Automafarm.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Automafarm.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Automafarm(Z_Construct_UPackage__Script_Automafarm, TEXT("/Script/Automafarm"), Z_Registration_Info_UPackage__Script_Automafarm, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x06E4B97B, 0x083F0D07));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
