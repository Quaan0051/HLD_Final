// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/PoofEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoofEffect() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_APoofEffect();
	PLATFORMER2D_API UClass* Z_Construct_UClass_APoofEffect_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	DEFINE_FUNCTION(APoofEffect::execOnFinishedPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFinishedPlaying();
		P_NATIVE_END;
	}
	void APoofEffect::StaticRegisterNativesAPoofEffect()
	{
		UClass* Class = APoofEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnFinishedPlaying", &APoofEffect::execOnFinishedPlaying },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APoofEffect_OnFinishedPlaying_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APoofEffect_OnFinishedPlaying_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PoofEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APoofEffect_OnFinishedPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APoofEffect, nullptr, "OnFinishedPlaying", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APoofEffect_OnFinishedPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_APoofEffect_OnFinishedPlaying_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APoofEffect_OnFinishedPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APoofEffect_OnFinishedPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APoofEffect);
	UClass* Z_Construct_UClass_APoofEffect_NoRegister()
	{
		return APoofEffect::StaticClass();
	}
	struct Z_Construct_UClass_APoofEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlipbookComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FlipbookComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APoofEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APoofEffect_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APoofEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APoofEffect_OnFinishedPlaying, "OnFinishedPlaying" }, // 341732664
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APoofEffect_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoofEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PoofEffect.h" },
		{ "ModuleRelativePath", "PoofEffect.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoofEffect_Statics::NewProp_FlipbookComponent_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PoofEffect.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APoofEffect_Statics::NewProp_FlipbookComponent = { "FlipbookComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APoofEffect, FlipbookComponent), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APoofEffect_Statics::NewProp_FlipbookComponent_MetaData), Z_Construct_UClass_APoofEffect_Statics::NewProp_FlipbookComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APoofEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APoofEffect_Statics::NewProp_FlipbookComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APoofEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APoofEffect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APoofEffect_Statics::ClassParams = {
		&APoofEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APoofEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APoofEffect_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APoofEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_APoofEffect_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APoofEffect_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APoofEffect()
	{
		if (!Z_Registration_Info_UClass_APoofEffect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APoofEffect.OuterSingleton, Z_Construct_UClass_APoofEffect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APoofEffect.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<APoofEffect>()
	{
		return APoofEffect::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APoofEffect);
	APoofEffect::~APoofEffect() {}
	struct Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_PoofEffect_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_PoofEffect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APoofEffect, APoofEffect::StaticClass, TEXT("APoofEffect"), &Z_Registration_Info_UClass_APoofEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APoofEffect), 2571319804U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_PoofEffect_h_4116106355(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_PoofEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_PoofEffect_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
