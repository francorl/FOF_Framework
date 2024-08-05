// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FOF_Framework/Public/MeleeAnimNotifyState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeleeAnimNotifyState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	FOF_FRAMEWORK_API UClass* Z_Construct_UClass_UMeleeAnimNotifyState();
	FOF_FRAMEWORK_API UClass* Z_Construct_UClass_UMeleeAnimNotifyState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FOF_Framework();
// End Cross Module References
	void UMeleeAnimNotifyState::StaticRegisterNativesUMeleeAnimNotifyState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeleeAnimNotifyState);
	UClass* Z_Construct_UClass_UMeleeAnimNotifyState_NoRegister()
	{
		return UMeleeAnimNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_UMeleeAnimNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeleeAnimNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_FOF_Framework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeAnimNotifyState_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeleeAnimNotifyState_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "MeleeAnimNotifyState.h" },
		{ "ModuleRelativePath", "Public/MeleeAnimNotifyState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeleeAnimNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeleeAnimNotifyState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeleeAnimNotifyState_Statics::ClassParams = {
		&UMeleeAnimNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeAnimNotifyState_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeleeAnimNotifyState_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMeleeAnimNotifyState()
	{
		if (!Z_Registration_Info_UClass_UMeleeAnimNotifyState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeleeAnimNotifyState.OuterSingleton, Z_Construct_UClass_UMeleeAnimNotifyState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeleeAnimNotifyState.OuterSingleton;
	}
	template<> FOF_FRAMEWORK_API UClass* StaticClass<UMeleeAnimNotifyState>()
	{
		return UMeleeAnimNotifyState::StaticClass();
	}
	UMeleeAnimNotifyState::UMeleeAnimNotifyState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeleeAnimNotifyState);
	UMeleeAnimNotifyState::~UMeleeAnimNotifyState() {}
	struct Z_CompiledInDeferFile_FID_ProyectosUnreal_TestProyect_CPPTopDown_Plugins_FOF_Framework_Source_FOF_Framework_Public_MeleeAnimNotifyState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProyectosUnreal_TestProyect_CPPTopDown_Plugins_FOF_Framework_Source_FOF_Framework_Public_MeleeAnimNotifyState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeleeAnimNotifyState, UMeleeAnimNotifyState::StaticClass, TEXT("UMeleeAnimNotifyState"), &Z_Registration_Info_UClass_UMeleeAnimNotifyState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeleeAnimNotifyState), 2560706017U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProyectosUnreal_TestProyect_CPPTopDown_Plugins_FOF_Framework_Source_FOF_Framework_Public_MeleeAnimNotifyState_h_2639101923(TEXT("/Script/FOF_Framework"),
		Z_CompiledInDeferFile_FID_ProyectosUnreal_TestProyect_CPPTopDown_Plugins_FOF_Framework_Source_FOF_Framework_Public_MeleeAnimNotifyState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProyectosUnreal_TestProyect_CPPTopDown_Plugins_FOF_Framework_Source_FOF_Framework_Public_MeleeAnimNotifyState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
