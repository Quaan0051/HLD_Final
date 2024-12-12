// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/CoinPickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoinPickup() {}
// Cross Module References
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ACoinPickup();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ACoinPickup_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_APickup();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	void ACoinPickup::StaticRegisterNativesACoinPickup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACoinPickup);
	UClass* Z_Construct_UClass_ACoinPickup_NoRegister()
	{
		return ACoinPickup::StaticClass();
	}
	struct Z_Construct_UClass_ACoinPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticCoinFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticCoinFlipbook;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACoinPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickup,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinPickup_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinPickup_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CoinPickup.h" },
		{ "ModuleRelativePath", "CoinPickup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinPickup_Statics::NewProp_StaticCoinFlipbook_MetaData[] = {
		{ "Category", "CoinPickup flipbooks" },
		{ "ModuleRelativePath", "CoinPickup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoinPickup_Statics::NewProp_StaticCoinFlipbook = { "StaticCoinFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoinPickup, StaticCoinFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinPickup_Statics::NewProp_StaticCoinFlipbook_MetaData), Z_Construct_UClass_ACoinPickup_Statics::NewProp_StaticCoinFlipbook_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoinPickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinPickup_Statics::NewProp_StaticCoinFlipbook,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACoinPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoinPickup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoinPickup_Statics::ClassParams = {
		&ACoinPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACoinPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACoinPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinPickup_Statics::Class_MetaDataParams), Z_Construct_UClass_ACoinPickup_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinPickup_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACoinPickup()
	{
		if (!Z_Registration_Info_UClass_ACoinPickup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoinPickup.OuterSingleton, Z_Construct_UClass_ACoinPickup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACoinPickup.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<ACoinPickup>()
	{
		return ACoinPickup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoinPickup);
	ACoinPickup::~ACoinPickup() {}
	struct Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_CoinPickup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_CoinPickup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACoinPickup, ACoinPickup::StaticClass, TEXT("ACoinPickup"), &Z_Registration_Info_UClass_ACoinPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoinPickup), 1360326465U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_CoinPickup_h_34906187(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_CoinPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_CoinPickup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
