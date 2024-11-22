// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/BreakableBlockBit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBreakableBlockBit() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ABreakableBlockBit();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ABreakableBlockBit_NoRegister();
	PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_EBreakableBlockBitType();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBreakableBlockBitType;
	static UEnum* EBreakableBlockBitType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBreakableBlockBitType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBreakableBlockBitType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_EBreakableBlockBitType, (UObject*)Z_Construct_UPackage__Script_Platformer2D(), TEXT("EBreakableBlockBitType"));
		}
		return Z_Registration_Info_UEnum_EBreakableBlockBitType.OuterSingleton;
	}
	template<> PLATFORMER2D_API UEnum* StaticEnum<EBreakableBlockBitType>()
	{
		return EBreakableBlockBitType_StaticEnum();
	}
	struct Z_Construct_UEnum_Platformer2D_EBreakableBlockBitType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Platformer2D_EBreakableBlockBitType_Statics::Enumerators[] = {
		{ "EBreakableBlockBitType::Unknown", (int64)EBreakableBlockBitType::Unknown },
		{ "EBreakableBlockBitType::Left", (int64)EBreakableBlockBitType::Left },
		{ "EBreakableBlockBitType::Right", (int64)EBreakableBlockBitType::Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Platformer2D_EBreakableBlockBitType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "EBreakableBlockBitType::Left" },
		{ "ModuleRelativePath", "BreakableBlockBit.h" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "EBreakableBlockBitType::Right" },
		{ "Unknown.DisplayName", "Unknown" },
		{ "Unknown.Name", "EBreakableBlockBitType::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Platformer2D_EBreakableBlockBitType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
		nullptr,
		"EBreakableBlockBitType",
		"EBreakableBlockBitType",
		Z_Construct_UEnum_Platformer2D_EBreakableBlockBitType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EBreakableBlockBitType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EBreakableBlockBitType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Platformer2D_EBreakableBlockBitType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Platformer2D_EBreakableBlockBitType()
	{
		if (!Z_Registration_Info_UEnum_EBreakableBlockBitType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBreakableBlockBitType.InnerSingleton, Z_Construct_UEnum_Platformer2D_EBreakableBlockBitType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBreakableBlockBitType.InnerSingleton;
	}
	void ABreakableBlockBit::StaticRegisterNativesABreakableBlockBit()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABreakableBlockBit);
	UClass* Z_Construct_UClass_ABreakableBlockBit_NoRegister()
	{
		return ABreakableBlockBit::StaticClass();
	}
	struct Z_Construct_UClass_ABreakableBlockBit_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftSprite_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftSprite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightSprite_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightSprite;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABreakableBlockBit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBlockBit_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableBlockBit_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BreakableBlockBit.h" },
		{ "ModuleRelativePath", "BreakableBlockBit.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableBlockBit_Statics::NewProp_Root_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BreakableBlockBit.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABreakableBlockBit_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABreakableBlockBit, Root), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBlockBit_Statics::NewProp_Root_MetaData), Z_Construct_UClass_ABreakableBlockBit_Statics::NewProp_Root_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableBlockBit_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BreakableBlockBit.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABreakableBlockBit_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABreakableBlockBit, SpriteComponent), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBlockBit_Statics::NewProp_SpriteComponent_MetaData), Z_Construct_UClass_ABreakableBlockBit_Statics::NewProp_SpriteComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableBlockBit_Statics::NewProp_LeftSprite_MetaData[] = {
		{ "Category", "Sprites" },
		{ "ModuleRelativePath", "BreakableBlockBit.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABreakableBlockBit_Statics::NewProp_LeftSprite = { "LeftSprite", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABreakableBlockBit, LeftSprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBlockBit_Statics::NewProp_LeftSprite_MetaData), Z_Construct_UClass_ABreakableBlockBit_Statics::NewProp_LeftSprite_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableBlockBit_Statics::NewProp_RightSprite_MetaData[] = {
		{ "Category", "Sprites" },
		{ "ModuleRelativePath", "BreakableBlockBit.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABreakableBlockBit_Statics::NewProp_RightSprite = { "RightSprite", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABreakableBlockBit, RightSprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBlockBit_Statics::NewProp_RightSprite_MetaData), Z_Construct_UClass_ABreakableBlockBit_Statics::NewProp_RightSprite_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABreakableBlockBit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableBlockBit_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableBlockBit_Statics::NewProp_SpriteComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableBlockBit_Statics::NewProp_LeftSprite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableBlockBit_Statics::NewProp_RightSprite,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABreakableBlockBit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABreakableBlockBit>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABreakableBlockBit_Statics::ClassParams = {
		&ABreakableBlockBit::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABreakableBlockBit_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBlockBit_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBlockBit_Statics::Class_MetaDataParams), Z_Construct_UClass_ABreakableBlockBit_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBlockBit_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABreakableBlockBit()
	{
		if (!Z_Registration_Info_UClass_ABreakableBlockBit.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABreakableBlockBit.OuterSingleton, Z_Construct_UClass_ABreakableBlockBit_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABreakableBlockBit.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<ABreakableBlockBit>()
	{
		return ABreakableBlockBit::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABreakableBlockBit);
	ABreakableBlockBit::~ABreakableBlockBit() {}
	struct Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_BreakableBlockBit_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_BreakableBlockBit_h_Statics::EnumInfo[] = {
		{ EBreakableBlockBitType_StaticEnum, TEXT("EBreakableBlockBitType"), &Z_Registration_Info_UEnum_EBreakableBlockBitType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3638771940U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_BreakableBlockBit_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABreakableBlockBit, ABreakableBlockBit::StaticClass, TEXT("ABreakableBlockBit"), &Z_Registration_Info_UClass_ABreakableBlockBit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABreakableBlockBit), 3463127766U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_BreakableBlockBit_h_3770433862(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_BreakableBlockBit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_BreakableBlockBit_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_BreakableBlockBit_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_BreakableBlockBit_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
