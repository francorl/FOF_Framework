// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FOF_Framework/Public/FOF_TraceComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFOF_TraceComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	FOF_FRAMEWORK_API UClass* Z_Construct_UClass_UFOF_TraceComponent();
	FOF_FRAMEWORK_API UClass* Z_Construct_UClass_UFOF_TraceComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FOF_Framework();
// End Cross Module References
	DEFINE_FUNCTION(UFOF_TraceComponent::execMeleeTrace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MeleeTrace();
		P_NATIVE_END;
	}
	void UFOF_TraceComponent::StaticRegisterNativesUFOF_TraceComponent()
	{
		UClass* Class = UFOF_TraceComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MeleeTrace", &UFOF_TraceComponent::execMeleeTrace },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFOF_TraceComponent_MeleeTrace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFOF_TraceComponent_MeleeTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Melee" },
		{ "ModuleRelativePath", "Public/FOF_TraceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFOF_TraceComponent_MeleeTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFOF_TraceComponent, nullptr, "MeleeTrace", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFOF_TraceComponent_MeleeTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFOF_TraceComponent_MeleeTrace_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UFOF_TraceComponent_MeleeTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFOF_TraceComponent_MeleeTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFOF_TraceComponent);
	UClass* Z_Construct_UClass_UFOF_TraceComponent_NoRegister()
	{
		return UFOF_TraceComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFOF_TraceComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFOF_TraceComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FOF_Framework,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFOF_TraceComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UFOF_TraceComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFOF_TraceComponent_MeleeTrace, "MeleeTrace" }, // 210929394
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFOF_TraceComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFOF_TraceComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "FOF_TraceComponent.h" },
		{ "ModuleRelativePath", "Public/FOF_TraceComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFOF_TraceComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFOF_TraceComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFOF_TraceComponent_Statics::ClassParams = {
		&UFOF_TraceComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFOF_TraceComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFOF_TraceComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UFOF_TraceComponent()
	{
		if (!Z_Registration_Info_UClass_UFOF_TraceComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFOF_TraceComponent.OuterSingleton, Z_Construct_UClass_UFOF_TraceComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFOF_TraceComponent.OuterSingleton;
	}
	template<> FOF_FRAMEWORK_API UClass* StaticClass<UFOF_TraceComponent>()
	{
		return UFOF_TraceComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFOF_TraceComponent);
	UFOF_TraceComponent::~UFOF_TraceComponent() {}
	struct Z_CompiledInDeferFile_FID_ProyectosUnreal_TestProyect_CPPTopDown_Plugins_FOF_Framework_Source_FOF_Framework_Public_FOF_TraceComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProyectosUnreal_TestProyect_CPPTopDown_Plugins_FOF_Framework_Source_FOF_Framework_Public_FOF_TraceComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFOF_TraceComponent, UFOF_TraceComponent::StaticClass, TEXT("UFOF_TraceComponent"), &Z_Registration_Info_UClass_UFOF_TraceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFOF_TraceComponent), 1853873360U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProyectosUnreal_TestProyect_CPPTopDown_Plugins_FOF_Framework_Source_FOF_Framework_Public_FOF_TraceComponent_h_266517811(TEXT("/Script/FOF_Framework"),
		Z_CompiledInDeferFile_FID_ProyectosUnreal_TestProyect_CPPTopDown_Plugins_FOF_Framework_Source_FOF_Framework_Public_FOF_TraceComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProyectosUnreal_TestProyect_CPPTopDown_Plugins_FOF_Framework_Source_FOF_Framework_Public_FOF_TraceComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
