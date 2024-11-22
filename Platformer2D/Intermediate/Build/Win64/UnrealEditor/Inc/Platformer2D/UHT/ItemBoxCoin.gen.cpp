// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/ItemBoxCoin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemBoxCoin() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AItemBoxCoin();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AItemBoxCoin_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	void AItemBoxCoin::StaticRegisterNativesAItemBoxCoin()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItemBoxCoin);
	UClass* Z_Construct_UClass_AItemBoxCoin_NoRegister()
	{
		return AItemBoxCoin::StaticClass();
	}
	struct Z_Construct_UClass_AItemBoxCoin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Flipbook;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItemBoxCoin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBoxCoin_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemBoxCoin_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ItemBoxCoin.h" },
		{ "ModuleRelativePath", "ItemBoxCoin.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemBoxCoin_Statics::NewProp_Root_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemBoxCoin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemBoxCoin_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBoxCoin, Root), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBoxCoin_Statics::NewProp_Root_MetaData), Z_Construct_UClass_AItemBoxCoin_Statics::NewProp_Root_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemBoxCoin_Statics::NewProp_Flipbook_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Flipbook" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemBoxCoin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemBoxCoin_Statics::NewProp_Flipbook = { "Flipbook", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBoxCoin, Flipbook), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBoxCoin_Statics::NewProp_Flipbook_MetaData), Z_Construct_UClass_AItemBoxCoin_Statics::NewProp_Flipbook_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItemBoxCoin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBoxCoin_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBoxCoin_Statics::NewProp_Flipbook,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItemBoxCoin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemBoxCoin>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AItemBoxCoin_Statics::ClassParams = {
		&AItemBoxCoin::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AItemBoxCoin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AItemBoxCoin_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBoxCoin_Statics::Class_MetaDataParams), Z_Construct_UClass_AItemBoxCoin_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBoxCoin_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AItemBoxCoin()
	{
		if (!Z_Registration_Info_UClass_AItemBoxCoin.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItemBoxCoin.OuterSingleton, Z_Construct_UClass_AItemBoxCoin_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AItemBoxCoin.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<AItemBoxCoin>()
	{
		return AItemBoxCoin::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItemBoxCoin);
	AItemBoxCoin::~AItemBoxCoin() {}
	struct Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_ItemBoxCoin_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_ItemBoxCoin_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AItemBoxCoin, AItemBoxCoin::StaticClass, TEXT("AItemBoxCoin"), &Z_Registration_Info_UClass_AItemBoxCoin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItemBoxCoin), 2115561040U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_ItemBoxCoin_h_1437745405(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_ItemBoxCoin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_ItemBoxCoin_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
