// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/MarioPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMarioPlayerState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AMarioPlayerState();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AMarioPlayerState_NoRegister();
	PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_EMarioDirection();
	PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_EMarioForm();
	PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_EMarioState();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMarioState;
	static UEnum* EMarioState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMarioState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMarioState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_EMarioState, (UObject*)Z_Construct_UPackage__Script_Platformer2D(), TEXT("EMarioState"));
		}
		return Z_Registration_Info_UEnum_EMarioState.OuterSingleton;
	}
	template<> PLATFORMER2D_API UEnum* StaticEnum<EMarioState>()
	{
		return EMarioState_StaticEnum();
	}
	struct Z_Construct_UEnum_Platformer2D_EMarioState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Platformer2D_EMarioState_Statics::Enumerators[] = {
		{ "EMarioState::Idle", (int64)EMarioState::Idle },
		{ "EMarioState::Walking", (int64)EMarioState::Walking },
		{ "EMarioState::Jumping", (int64)EMarioState::Jumping },
		{ "EMarioState::Falling", (int64)EMarioState::Falling },
		{ "EMarioState::Ducking", (int64)EMarioState::Ducking },
		{ "EMarioState::Dead", (int64)EMarioState::Dead },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Platformer2D_EMarioState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dead.DisplayName", "Dead" },
		{ "Dead.Name", "EMarioState::Dead" },
		{ "Ducking.DisplayName", "Ducking" },
		{ "Ducking.Name", "EMarioState::Ducking" },
		{ "Falling.DisplayName", "Falling" },
		{ "Falling.Name", "EMarioState::Falling" },
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "EMarioState::Idle" },
		{ "Jumping.DisplayName", "Jumping" },
		{ "Jumping.Name", "EMarioState::Jumping" },
		{ "ModuleRelativePath", "MarioPlayerState.h" },
		{ "Walking.DisplayName", "Walking" },
		{ "Walking.Name", "EMarioState::Walking" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Platformer2D_EMarioState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
		nullptr,
		"EMarioState",
		"EMarioState",
		Z_Construct_UEnum_Platformer2D_EMarioState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EMarioState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EMarioState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Platformer2D_EMarioState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Platformer2D_EMarioState()
	{
		if (!Z_Registration_Info_UEnum_EMarioState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMarioState.InnerSingleton, Z_Construct_UEnum_Platformer2D_EMarioState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMarioState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMarioForm;
	static UEnum* EMarioForm_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMarioForm.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMarioForm.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_EMarioForm, (UObject*)Z_Construct_UPackage__Script_Platformer2D(), TEXT("EMarioForm"));
		}
		return Z_Registration_Info_UEnum_EMarioForm.OuterSingleton;
	}
	template<> PLATFORMER2D_API UEnum* StaticEnum<EMarioForm>()
	{
		return EMarioForm_StaticEnum();
	}
	struct Z_Construct_UEnum_Platformer2D_EMarioForm_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Platformer2D_EMarioForm_Statics::Enumerators[] = {
		{ "EMarioForm::Small", (int64)EMarioForm::Small },
		{ "EMarioForm::Super", (int64)EMarioForm::Super },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Platformer2D_EMarioForm_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MarioPlayerState.h" },
		{ "Small.DisplayName", "Small" },
		{ "Small.Name", "EMarioForm::Small" },
		{ "Super.DisplayName", "Super" },
		{ "Super.Name", "EMarioForm::Super" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Platformer2D_EMarioForm_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
		nullptr,
		"EMarioForm",
		"EMarioForm",
		Z_Construct_UEnum_Platformer2D_EMarioForm_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EMarioForm_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EMarioForm_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Platformer2D_EMarioForm_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Platformer2D_EMarioForm()
	{
		if (!Z_Registration_Info_UEnum_EMarioForm.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMarioForm.InnerSingleton, Z_Construct_UEnum_Platformer2D_EMarioForm_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMarioForm.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMarioDirection;
	static UEnum* EMarioDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMarioDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMarioDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_EMarioDirection, (UObject*)Z_Construct_UPackage__Script_Platformer2D(), TEXT("EMarioDirection"));
		}
		return Z_Registration_Info_UEnum_EMarioDirection.OuterSingleton;
	}
	template<> PLATFORMER2D_API UEnum* StaticEnum<EMarioDirection>()
	{
		return EMarioDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_Platformer2D_EMarioDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Platformer2D_EMarioDirection_Statics::Enumerators[] = {
		{ "EMarioDirection::Right", (int64)EMarioDirection::Right },
		{ "EMarioDirection::Left", (int64)EMarioDirection::Left },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Platformer2D_EMarioDirection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "EMarioDirection::Left" },
		{ "ModuleRelativePath", "MarioPlayerState.h" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "EMarioDirection::Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Platformer2D_EMarioDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
		nullptr,
		"EMarioDirection",
		"EMarioDirection",
		Z_Construct_UEnum_Platformer2D_EMarioDirection_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EMarioDirection_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EMarioDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Platformer2D_EMarioDirection_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Platformer2D_EMarioDirection()
	{
		if (!Z_Registration_Info_UEnum_EMarioDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMarioDirection.InnerSingleton, Z_Construct_UEnum_Platformer2D_EMarioDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMarioDirection.InnerSingleton;
	}
	void AMarioPlayerState::StaticRegisterNativesAMarioPlayerState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMarioPlayerState);
	UClass* Z_Construct_UClass_AMarioPlayerState_NoRegister()
	{
		return AMarioPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AMarioPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunningMeter_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RunningMeter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Coins_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Coins;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lives_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Lives;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMarioPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioPlayerState_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioPlayerState_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MarioPlayerState.h" },
		{ "ModuleRelativePath", "MarioPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioPlayerState_Statics::NewProp_RunningMeter_MetaData[] = {
		{ "Category", "Mario" },
		{ "ModuleRelativePath", "MarioPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMarioPlayerState_Statics::NewProp_RunningMeter = { "RunningMeter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioPlayerState, RunningMeter), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioPlayerState_Statics::NewProp_RunningMeter_MetaData), Z_Construct_UClass_AMarioPlayerState_Statics::NewProp_RunningMeter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioPlayerState_Statics::NewProp_Coins_MetaData[] = {
		{ "Category", "Mario" },
		{ "ModuleRelativePath", "MarioPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMarioPlayerState_Statics::NewProp_Coins = { "Coins", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioPlayerState, Coins), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioPlayerState_Statics::NewProp_Coins_MetaData), Z_Construct_UClass_AMarioPlayerState_Statics::NewProp_Coins_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioPlayerState_Statics::NewProp_Lives_MetaData[] = {
		{ "Category", "Mario" },
		{ "ModuleRelativePath", "MarioPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMarioPlayerState_Statics::NewProp_Lives = { "Lives", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioPlayerState, Lives), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioPlayerState_Statics::NewProp_Lives_MetaData), Z_Construct_UClass_AMarioPlayerState_Statics::NewProp_Lives_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMarioPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioPlayerState_Statics::NewProp_RunningMeter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioPlayerState_Statics::NewProp_Coins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioPlayerState_Statics::NewProp_Lives,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMarioPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMarioPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMarioPlayerState_Statics::ClassParams = {
		&AMarioPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMarioPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMarioPlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AMarioPlayerState_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioPlayerState_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMarioPlayerState()
	{
		if (!Z_Registration_Info_UClass_AMarioPlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMarioPlayerState.OuterSingleton, Z_Construct_UClass_AMarioPlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMarioPlayerState.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<AMarioPlayerState>()
	{
		return AMarioPlayerState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMarioPlayerState);
	AMarioPlayerState::~AMarioPlayerState() {}
	struct Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_MarioPlayerState_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_MarioPlayerState_h_Statics::EnumInfo[] = {
		{ EMarioState_StaticEnum, TEXT("EMarioState"), &Z_Registration_Info_UEnum_EMarioState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4142940343U) },
		{ EMarioForm_StaticEnum, TEXT("EMarioForm"), &Z_Registration_Info_UEnum_EMarioForm, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4157539761U) },
		{ EMarioDirection_StaticEnum, TEXT("EMarioDirection"), &Z_Registration_Info_UEnum_EMarioDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1786260164U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_MarioPlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMarioPlayerState, AMarioPlayerState::StaticClass, TEXT("AMarioPlayerState"), &Z_Registration_Info_UClass_AMarioPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMarioPlayerState), 175318555U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_MarioPlayerState_h_3822264620(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_MarioPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_MarioPlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_MarioPlayerState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_MarioPlayerState_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
