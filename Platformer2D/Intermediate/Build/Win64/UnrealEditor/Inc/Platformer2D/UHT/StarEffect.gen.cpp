// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/StarEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStarEffect() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AStarEffect();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AStarEffect_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	void AStarEffect::StaticRegisterNativesAStarEffect()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStarEffect);
	UClass* Z_Construct_UClass_AStarEffect_NoRegister()
	{
		return AStarEffect::StaticClass();
	}
	struct Z_Construct_UClass_AStarEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
	UObject* (*const Z_Construct_UClass_AStarEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStarEffect_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StarEffect.h" },
		{ "ModuleRelativePath", "StarEffect.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarEffect_Statics::NewProp_FlipbookComponent_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StarEffect.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStarEffect_Statics::NewProp_FlipbookComponent = { "FlipbookComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStarEffect, FlipbookComponent), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStarEffect_Statics::NewProp_FlipbookComponent_MetaData), Z_Construct_UClass_AStarEffect_Statics::NewProp_FlipbookComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStarEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStarEffect_Statics::NewProp_FlipbookComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStarEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStarEffect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStarEffect_Statics::ClassParams = {
		&AStarEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AStarEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AStarEffect_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStarEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_AStarEffect_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStarEffect_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AStarEffect()
	{
		if (!Z_Registration_Info_UClass_AStarEffect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStarEffect.OuterSingleton, Z_Construct_UClass_AStarEffect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStarEffect.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<AStarEffect>()
	{
		return AStarEffect::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStarEffect);
	AStarEffect::~AStarEffect() {}
	struct Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_StarEffect_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_StarEffect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStarEffect, AStarEffect::StaticClass, TEXT("AStarEffect"), &Z_Registration_Info_UClass_AStarEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStarEffect), 2441880207U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_StarEffect_h_71693971(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_StarEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_StarEffect_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
