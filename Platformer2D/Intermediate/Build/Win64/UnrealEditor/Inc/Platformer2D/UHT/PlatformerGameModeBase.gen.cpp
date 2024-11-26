// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/PlatformerGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformerGameModeBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ABreakableBlock_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ACoinPickup_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ADeadActor_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AMarioCamera_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AMarioTransform_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_APlatformerGameModeBase();
	PLATFORMER2D_API UClass* Z_Construct_UClass_APlatformerGameModeBase_NoRegister();
	PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_EGameState();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameState;
	static UEnum* EGameState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_EGameState, (UObject*)Z_Construct_UPackage__Script_Platformer2D(), TEXT("EGameState"));
		}
		return Z_Registration_Info_UEnum_EGameState.OuterSingleton;
	}
	template<> PLATFORMER2D_API UEnum* StaticEnum<EGameState>()
	{
		return EGameState_StaticEnum();
	}
	struct Z_Construct_UEnum_Platformer2D_EGameState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Platformer2D_EGameState_Statics::Enumerators[] = {
		{ "EGameState::Unknown", (int64)EGameState::Unknown },
		{ "EGameState::Gameplay", (int64)EGameState::Gameplay },
		{ "EGameState::FadeIn", (int64)EGameState::FadeIn },
		{ "EGameState::FadeHold", (int64)EGameState::FadeHold },
		{ "EGameState::FadeOut", (int64)EGameState::FadeOut },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Platformer2D_EGameState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FadeHold.DisplayName", "FadeHold" },
		{ "FadeHold.Name", "EGameState::FadeHold" },
		{ "FadeIn.DisplayName", "FadeIn" },
		{ "FadeIn.Name", "EGameState::FadeIn" },
		{ "FadeOut.DisplayName", "FadeOut" },
		{ "FadeOut.Name", "EGameState::FadeOut" },
		{ "Gameplay.DisplayName", "Gameplay" },
		{ "Gameplay.Name", "EGameState::Gameplay" },
		{ "ModuleRelativePath", "PlatformerGameModeBase.h" },
		{ "Unknown.DisplayName", "Unknown" },
		{ "Unknown.Name", "EGameState::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Platformer2D_EGameState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
		nullptr,
		"EGameState",
		"EGameState",
		Z_Construct_UEnum_Platformer2D_EGameState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EGameState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EGameState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Platformer2D_EGameState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Platformer2D_EGameState()
	{
		if (!Z_Registration_Info_UEnum_EGameState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameState.InnerSingleton, Z_Construct_UEnum_Platformer2D_EGameState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameState.InnerSingleton;
	}
	void APlatformerGameModeBase::StaticRegisterNativesAPlatformerGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlatformerGameModeBase);
	UClass* Z_Construct_UClass_APlatformerGameModeBase_NoRegister()
	{
		return APlatformerGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APlatformerGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarioTransformTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MarioTransformTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeadMarioTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DeadMarioTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoinPickupTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CoinPickupTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BreakableBlockTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BreakableBlockTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarioTransform_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MarioTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeadMario_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DeadMario;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlatformerGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PlatformerGameModeBase.h" },
		{ "ModuleRelativePath", "PlatformerGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_MarioTransformTemplate_MetaData[] = {
		{ "Category", "GameMode Templates" },
		{ "ModuleRelativePath", "PlatformerGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_MarioTransformTemplate = { "MarioTransformTemplate", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformerGameModeBase, MarioTransformTemplate), Z_Construct_UClass_UClass, Z_Construct_UClass_AMarioTransform_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_MarioTransformTemplate_MetaData), Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_MarioTransformTemplate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_DeadMarioTemplate_MetaData[] = {
		{ "Category", "GameMode Templates" },
		{ "ModuleRelativePath", "PlatformerGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_DeadMarioTemplate = { "DeadMarioTemplate", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformerGameModeBase, DeadMarioTemplate), Z_Construct_UClass_UClass, Z_Construct_UClass_ADeadActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_DeadMarioTemplate_MetaData), Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_DeadMarioTemplate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_CoinPickupTemplate_MetaData[] = {
		{ "Category", "GameMode Templates" },
		{ "ModuleRelativePath", "PlatformerGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_CoinPickupTemplate = { "CoinPickupTemplate", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformerGameModeBase, CoinPickupTemplate), Z_Construct_UClass_UClass, Z_Construct_UClass_ACoinPickup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_CoinPickupTemplate_MetaData), Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_CoinPickupTemplate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_BreakableBlockTemplate_MetaData[] = {
		{ "Category", "GameMode Templates" },
		{ "ModuleRelativePath", "PlatformerGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_BreakableBlockTemplate = { "BreakableBlockTemplate", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformerGameModeBase, BreakableBlockTemplate), Z_Construct_UClass_UClass, Z_Construct_UClass_ABreakableBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_BreakableBlockTemplate_MetaData), Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_BreakableBlockTemplate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_Camera_MetaData[] = {
		{ "ModuleRelativePath", "PlatformerGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformerGameModeBase, Camera), Z_Construct_UClass_AMarioCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_Camera_MetaData), Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_Camera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_MarioTransform_MetaData[] = {
		{ "ModuleRelativePath", "PlatformerGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_MarioTransform = { "MarioTransform", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformerGameModeBase, MarioTransform), Z_Construct_UClass_AMarioTransform_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_MarioTransform_MetaData), Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_MarioTransform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_DeadMario_MetaData[] = {
		{ "ModuleRelativePath", "PlatformerGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_DeadMario = { "DeadMario", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformerGameModeBase, DeadMario), Z_Construct_UClass_ADeadActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_DeadMario_MetaData), Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_DeadMario_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlatformerGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_MarioTransformTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_DeadMarioTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_CoinPickupTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_BreakableBlockTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_MarioTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerGameModeBase_Statics::NewProp_DeadMario,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlatformerGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformerGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlatformerGameModeBase_Statics::ClassParams = {
		&APlatformerGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlatformerGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APlatformerGameModeBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameModeBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APlatformerGameModeBase()
	{
		if (!Z_Registration_Info_UClass_APlatformerGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlatformerGameModeBase.OuterSingleton, Z_Construct_UClass_APlatformerGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlatformerGameModeBase.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<APlatformerGameModeBase>()
	{
		return APlatformerGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformerGameModeBase);
	APlatformerGameModeBase::~APlatformerGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_PlatformerGameModeBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_PlatformerGameModeBase_h_Statics::EnumInfo[] = {
		{ EGameState_StaticEnum, TEXT("EGameState"), &Z_Registration_Info_UEnum_EGameState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1944316008U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_PlatformerGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlatformerGameModeBase, APlatformerGameModeBase::StaticClass, TEXT("APlatformerGameModeBase"), &Z_Registration_Info_UClass_APlatformerGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlatformerGameModeBase), 1974806233U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_PlatformerGameModeBase_h_3930593002(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_PlatformerGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_PlatformerGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_PlatformerGameModeBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_PlatformerGameModeBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
