// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomafarm_init() {}
	AUTOMAFARM_API UFunction* Z_Construct_UDelegateFunction_Automafarm_KFOnHourPassed__DelegateSignature();
	AUTOMAFARM_API UFunction* Z_Construct_UDelegateFunction_Automafarm_KFOnPlayerMoved__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Automafarm;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Automafarm()
	{
		if (!Z_Registration_Info_UPackage__Script_Automafarm.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Automafarm_KFOnHourPassed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Automafarm_KFOnPlayerMoved__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Automafarm",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xB02B27C1,
				0x4F12FE9B,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Automafarm.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Automafarm.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Automafarm(Z_Construct_UPackage__Script_Automafarm, TEXT("/Script/Automafarm"), Z_Registration_Info_UPackage__Script_Automafarm, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB02B27C1, 0x4F12FE9B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
