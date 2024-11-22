// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/PiranhaPlant.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePiranhaPlant() {}
// Cross Module References
	PLATFORMER2D_API UClass* Z_Construct_UClass_AEnemy();
	PLATFORMER2D_API UClass* Z_Construct_UClass_APiranhaPlant();
	PLATFORMER2D_API UClass* Z_Construct_UClass_APiranhaPlant_NoRegister();
	PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_EPiranhaPlantState();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPiranhaPlantState;
	static UEnum* EPiranhaPlantState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPiranhaPlantState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPiranhaPlantState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_EPiranhaPlantState, (UObject*)Z_Construct_UPackage__Script_Platformer2D(), TEXT("EPiranhaPlantState"));
		}
		return Z_Registration_Info_UEnum_EPiranhaPlantState.OuterSingleton;
	}
	template<> PLATFORMER2D_API UEnum* StaticEnum<EPiranhaPlantState>()
	{
		return EPiranhaPlantState_StaticEnum();
	}
	struct Z_Construct_UEnum_Platformer2D_EPiranhaPlantState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Platformer2D_EPiranhaPlantState_Statics::Enumerators[] = {
		{ "EPiranhaPlantState::Unknown", (int64)EPiranhaPlantState::Unknown },
		{ "EPiranhaPlantState::Hiding", (int64)EPiranhaPlantState::Hiding },
		{ "EPiranhaPlantState::AnimatingUp", (int64)EPiranhaPlantState::AnimatingUp },
		{ "EPiranhaPlantState::Active", (int64)EPiranhaPlantState::Active },
		{ "EPiranhaPlantState::AnimatingDown", (int64)EPiranhaPlantState::AnimatingDown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Platformer2D_EPiranhaPlantState_Statics::Enum_MetaDataParams[] = {
		{ "Active.DisplayName", "Active" },
		{ "Active.Name", "EPiranhaPlantState::Active" },
		{ "AnimatingDown.DisplayName", "AnimatingDown" },
		{ "AnimatingDown.Name", "EPiranhaPlantState::AnimatingDown" },
		{ "AnimatingUp.DisplayName", "AnimatingUp" },
		{ "AnimatingUp.Name", "EPiranhaPlantState::AnimatingUp" },
		{ "BlueprintType", "true" },
		{ "Hiding.DisplayName", "Hiding" },
		{ "Hiding.Name", "EPiranhaPlantState::Hiding" },
		{ "ModuleRelativePath", "PiranhaPlant.h" },
		{ "Unknown.DisplayName", "Unknown" },
		{ "Unknown.Name", "EPiranhaPlantState::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Platformer2D_EPiranhaPlantState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
		nullptr,
		"EPiranhaPlantState",
		"EPiranhaPlantState",
		Z_Construct_UEnum_Platformer2D_EPiranhaPlantState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EPiranhaPlantState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EPiranhaPlantState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Platformer2D_EPiranhaPlantState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Platformer2D_EPiranhaPlantState()
	{
		if (!Z_Registration_Info_UEnum_EPiranhaPlantState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPiranhaPlantState.InnerSingleton, Z_Construct_UEnum_Platformer2D_EPiranhaPlantState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPiranhaPlantState.InnerSingleton;
	}
	void APiranhaPlant::StaticRegisterNativesAPiranhaPlant()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APiranhaPlant);
	UClass* Z_Construct_UClass_APiranhaPlant_NoRegister()
	{
		return APiranhaPlant::StaticClass();
	}
	struct Z_Construct_UClass_APiranhaPlant_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APiranhaPlant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APiranhaPlant_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APiranhaPlant_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PiranhaPlant.h" },
		{ "ModuleRelativePath", "PiranhaPlant.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APiranhaPlant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APiranhaPlant>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APiranhaPlant_Statics::ClassParams = {
		&APiranhaPlant::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APiranhaPlant_Statics::Class_MetaDataParams), Z_Construct_UClass_APiranhaPlant_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APiranhaPlant()
	{
		if (!Z_Registration_Info_UClass_APiranhaPlant.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APiranhaPlant.OuterSingleton, Z_Construct_UClass_APiranhaPlant_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APiranhaPlant.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<APiranhaPlant>()
	{
		return APiranhaPlant::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APiranhaPlant);
	APiranhaPlant::~APiranhaPlant() {}
	struct Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_PiranhaPlant_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_PiranhaPlant_h_Statics::EnumInfo[] = {
		{ EPiranhaPlantState_StaticEnum, TEXT("EPiranhaPlantState"), &Z_Registration_Info_UEnum_EPiranhaPlantState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1700835850U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_PiranhaPlant_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APiranhaPlant, APiranhaPlant::StaticClass, TEXT("APiranhaPlant"), &Z_Registration_Info_UClass_APiranhaPlant, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APiranhaPlant), 1570557383U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_PiranhaPlant_h_1157128452(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_PiranhaPlant_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_PiranhaPlant_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_PiranhaPlant_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_PiranhaPlant_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
