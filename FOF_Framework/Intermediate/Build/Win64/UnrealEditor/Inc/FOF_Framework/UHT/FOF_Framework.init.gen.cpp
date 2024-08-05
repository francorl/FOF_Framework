// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFOF_Framework_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FOF_Framework;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FOF_Framework()
	{
		if (!Z_Registration_Info_UPackage__Script_FOF_Framework.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FOF_Framework",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x7896D128,
				0x18C0041E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FOF_Framework.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FOF_Framework.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FOF_Framework(Z_Construct_UPackage__Script_FOF_Framework, TEXT("/Script/FOF_Framework"), Z_Registration_Info_UPackage__Script_FOF_Framework, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7896D128, 0x18C0041E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
