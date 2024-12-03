// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/RotoDisc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotoDisc() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ARotoDisc();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ARotoDisc_NoRegister();
	PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_ERotoDiscDirection();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERotoDiscDirection;
	static UEnum* ERotoDiscDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERotoDiscDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERotoDiscDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_ERotoDiscDirection, (UObject*)Z_Construct_UPackage__Script_Platformer2D(), TEXT("ERotoDiscDirection"));
		}
		return Z_Registration_Info_UEnum_ERotoDiscDirection.OuterSingleton;
	}
	template<> PLATFORMER2D_API UEnum* StaticEnum<ERotoDiscDirection>()
	{
		return ERotoDiscDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_Platformer2D_ERotoDiscDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Platformer2D_ERotoDiscDirection_Statics::Enumerators[] = {
		{ "ERotoDiscDirection::Clockwise", (int64)ERotoDiscDirection::Clockwise },
		{ "ERotoDiscDirection::CounterClockwise", (int64)ERotoDiscDirection::CounterClockwise },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Platformer2D_ERotoDiscDirection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Clockwise.DisplayName", "Clockwise" },
		{ "Clockwise.Name", "ERotoDiscDirection::Clockwise" },
		{ "CounterClockwise.DisplayName", "CounterClockwise" },
		{ "CounterClockwise.Name", "ERotoDiscDirection::CounterClockwise" },
		{ "ModuleRelativePath", "RotoDisc.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Platformer2D_ERotoDiscDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
		nullptr,
		"ERotoDiscDirection",
		"ERotoDiscDirection",
		Z_Construct_UEnum_Platformer2D_ERotoDiscDirection_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_ERotoDiscDirection_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_ERotoDiscDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Platformer2D_ERotoDiscDirection_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Platformer2D_ERotoDiscDirection()
	{
		if (!Z_Registration_Info_UEnum_ERotoDiscDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERotoDiscDirection.InnerSingleton, Z_Construct_UEnum_Platformer2D_ERotoDiscDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERotoDiscDirection.InnerSingleton;
	}
	void ARotoDisc::StaticRegisterNativesARotoDisc()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARotoDisc);
	UClass* Z_Construct_UClass_ARotoDisc_NoRegister()
	{
		return ARotoDisc::StaticClass();
	}
	struct Z_Construct_UClass_ARotoDisc_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiscBoxComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DiscBoxComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiscPivotBoxComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DiscPivotBoxComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlipbookComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FlipbookComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARotoDisc_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotoDisc_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotoDisc_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RotoDisc.h" },
		{ "ModuleRelativePath", "RotoDisc.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotoDisc_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RotoDisc.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotoDisc_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotoDisc, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARotoDisc_Statics::NewProp_BoxComponent_MetaData), Z_Construct_UClass_ARotoDisc_Statics::NewProp_BoxComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotoDisc_Statics::NewProp_DiscBoxComponent_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RotoDisc.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotoDisc_Statics::NewProp_DiscBoxComponent = { "DiscBoxComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotoDisc, DiscBoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARotoDisc_Statics::NewProp_DiscBoxComponent_MetaData), Z_Construct_UClass_ARotoDisc_Statics::NewProp_DiscBoxComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotoDisc_Statics::NewProp_DiscPivotBoxComponent_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RotoDisc.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotoDisc_Statics::NewProp_DiscPivotBoxComponent = { "DiscPivotBoxComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotoDisc, DiscPivotBoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARotoDisc_Statics::NewProp_DiscPivotBoxComponent_MetaData), Z_Construct_UClass_ARotoDisc_Statics::NewProp_DiscPivotBoxComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotoDisc_Statics::NewProp_FlipbookComponent_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RotoDisc.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotoDisc_Statics::NewProp_FlipbookComponent = { "FlipbookComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotoDisc, FlipbookComponent), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARotoDisc_Statics::NewProp_FlipbookComponent_MetaData), Z_Construct_UClass_ARotoDisc_Statics::NewProp_FlipbookComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotoDisc_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RotoDisc.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotoDisc_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotoDisc, SpriteComponent), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARotoDisc_Statics::NewProp_SpriteComponent_MetaData), Z_Construct_UClass_ARotoDisc_Statics::NewProp_SpriteComponent_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARotoDisc_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotoDisc_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Roto Disc State" },
		{ "ModuleRelativePath", "RotoDisc.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARotoDisc_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotoDisc, Direction), Z_Construct_UEnum_Platformer2D_ERotoDiscDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARotoDisc_Statics::NewProp_Direction_MetaData), Z_Construct_UClass_ARotoDisc_Statics::NewProp_Direction_MetaData) }; // 1403460620
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARotoDisc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotoDisc_Statics::NewProp_BoxComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotoDisc_Statics::NewProp_DiscBoxComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotoDisc_Statics::NewProp_DiscPivotBoxComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotoDisc_Statics::NewProp_FlipbookComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotoDisc_Statics::NewProp_SpriteComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotoDisc_Statics::NewProp_Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotoDisc_Statics::NewProp_Direction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARotoDisc_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotoDisc>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARotoDisc_Statics::ClassParams = {
		&ARotoDisc::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARotoDisc_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARotoDisc_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARotoDisc_Statics::Class_MetaDataParams), Z_Construct_UClass_ARotoDisc_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotoDisc_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ARotoDisc()
	{
		if (!Z_Registration_Info_UClass_ARotoDisc.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARotoDisc.OuterSingleton, Z_Construct_UClass_ARotoDisc_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARotoDisc.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<ARotoDisc>()
	{
		return ARotoDisc::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARotoDisc);
	ARotoDisc::~ARotoDisc() {}
	struct Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_RotoDisc_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_RotoDisc_h_Statics::EnumInfo[] = {
		{ ERotoDiscDirection_StaticEnum, TEXT("ERotoDiscDirection"), &Z_Registration_Info_UEnum_ERotoDiscDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1403460620U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_RotoDisc_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARotoDisc, ARotoDisc::StaticClass, TEXT("ARotoDisc"), &Z_Registration_Info_UClass_ARotoDisc, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARotoDisc), 823735408U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_RotoDisc_h_1736444674(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_RotoDisc_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_RotoDisc_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_RotoDisc_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_RotoDisc_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
