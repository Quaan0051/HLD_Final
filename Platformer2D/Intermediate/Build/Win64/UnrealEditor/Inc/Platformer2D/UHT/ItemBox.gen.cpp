// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/ItemBox.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemBox() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ACoinSwitch_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AItemBox();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AItemBox_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AItemBoxCoin_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AMushroomPickup_NoRegister();
	PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_EItemBoxContents();
	PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_EItemBoxState();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemBoxState;
	static UEnum* EItemBoxState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EItemBoxState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EItemBoxState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_EItemBoxState, (UObject*)Z_Construct_UPackage__Script_Platformer2D(), TEXT("EItemBoxState"));
		}
		return Z_Registration_Info_UEnum_EItemBoxState.OuterSingleton;
	}
	template<> PLATFORMER2D_API UEnum* StaticEnum<EItemBoxState>()
	{
		return EItemBoxState_StaticEnum();
	}
	struct Z_Construct_UEnum_Platformer2D_EItemBoxState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Platformer2D_EItemBoxState_Statics::Enumerators[] = {
		{ "EItemBoxState::Unknown", (int64)EItemBoxState::Unknown },
		{ "EItemBoxState::Active", (int64)EItemBoxState::Active },
		{ "EItemBoxState::AnimUp", (int64)EItemBoxState::AnimUp },
		{ "EItemBoxState::AnimDown", (int64)EItemBoxState::AnimDown },
		{ "EItemBoxState::Spawning", (int64)EItemBoxState::Spawning },
		{ "EItemBoxState::Inactive", (int64)EItemBoxState::Inactive },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Platformer2D_EItemBoxState_Statics::Enum_MetaDataParams[] = {
		{ "Active.DisplayName", "Active" },
		{ "Active.Name", "EItemBoxState::Active" },
		{ "AnimDown.DisplayName", "AnimDown" },
		{ "AnimDown.Name", "EItemBoxState::AnimDown" },
		{ "AnimUp.DisplayName", "AnimUp" },
		{ "AnimUp.Name", "EItemBoxState::AnimUp" },
		{ "BlueprintType", "true" },
		{ "Inactive.DisplayName", "Inactive" },
		{ "Inactive.Name", "EItemBoxState::Inactive" },
		{ "ModuleRelativePath", "ItemBox.h" },
		{ "Spawning.DisplayName", "Spawning" },
		{ "Spawning.Name", "EItemBoxState::Spawning" },
		{ "Unknown.DisplayName", "Unknown" },
		{ "Unknown.Name", "EItemBoxState::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Platformer2D_EItemBoxState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
		nullptr,
		"EItemBoxState",
		"EItemBoxState",
		Z_Construct_UEnum_Platformer2D_EItemBoxState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EItemBoxState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EItemBoxState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Platformer2D_EItemBoxState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Platformer2D_EItemBoxState()
	{
		if (!Z_Registration_Info_UEnum_EItemBoxState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemBoxState.InnerSingleton, Z_Construct_UEnum_Platformer2D_EItemBoxState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EItemBoxState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemBoxContents;
	static UEnum* EItemBoxContents_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EItemBoxContents.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EItemBoxContents.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_EItemBoxContents, (UObject*)Z_Construct_UPackage__Script_Platformer2D(), TEXT("EItemBoxContents"));
		}
		return Z_Registration_Info_UEnum_EItemBoxContents.OuterSingleton;
	}
	template<> PLATFORMER2D_API UEnum* StaticEnum<EItemBoxContents>()
	{
		return EItemBoxContents_StaticEnum();
	}
	struct Z_Construct_UEnum_Platformer2D_EItemBoxContents_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Platformer2D_EItemBoxContents_Statics::Enumerators[] = {
		{ "EItemBoxContents::Coin1", (int64)EItemBoxContents::Coin1 },
		{ "EItemBoxContents::Coin5", (int64)EItemBoxContents::Coin5 },
		{ "EItemBoxContents::Coin10", (int64)EItemBoxContents::Coin10 },
		{ "EItemBoxContents::Mushroom", (int64)EItemBoxContents::Mushroom },
		{ "EItemBoxContents::CoinSwitch", (int64)EItemBoxContents::CoinSwitch },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Platformer2D_EItemBoxContents_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Coin1.DisplayName", "Coin1" },
		{ "Coin1.Name", "EItemBoxContents::Coin1" },
		{ "Coin10.DisplayName", "Coin10" },
		{ "Coin10.Name", "EItemBoxContents::Coin10" },
		{ "Coin5.DisplayName", "Coin5" },
		{ "Coin5.Name", "EItemBoxContents::Coin5" },
		{ "CoinSwitch.DisplayName", "CoinSwitch" },
		{ "CoinSwitch.Name", "EItemBoxContents::CoinSwitch" },
		{ "ModuleRelativePath", "ItemBox.h" },
		{ "Mushroom.DisplayName", "Mushroom" },
		{ "Mushroom.Name", "EItemBoxContents::Mushroom" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Platformer2D_EItemBoxContents_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
		nullptr,
		"EItemBoxContents",
		"EItemBoxContents",
		Z_Construct_UEnum_Platformer2D_EItemBoxContents_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EItemBoxContents_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EItemBoxContents_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Platformer2D_EItemBoxContents_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Platformer2D_EItemBoxContents()
	{
		if (!Z_Registration_Info_UEnum_EItemBoxContents.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemBoxContents.InnerSingleton, Z_Construct_UEnum_Platformer2D_EItemBoxContents_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EItemBoxContents.InnerSingleton;
	}
	DEFINE_FUNCTION(AItemBox::execOnHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void AItemBox::StaticRegisterNativesAItemBox()
	{
		UClass* Class = AItemBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &AItemBox::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AItemBox_OnHit_Statics
	{
		struct ItemBox_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemBox_OnHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemBox_OnHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBox_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBox_OnHit_Statics::NewProp_HitComponent_MetaData), Z_Construct_UFunction_AItemBox_OnHit_Statics::NewProp_HitComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemBox_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBox_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemBox_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemBox_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBox_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBox_OnHit_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AItemBox_OnHit_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AItemBox_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBox_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemBox_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AItemBox_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBox_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBox_OnHit_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_AItemBox_OnHit_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemBox_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemBox_OnHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemBox_OnHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemBox_OnHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemBox_OnHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemBox_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemBox_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemBox_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemBox, nullptr, "OnHit", nullptr, nullptr, Z_Construct_UFunction_AItemBox_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBox_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AItemBox_OnHit_Statics::ItemBox_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBox_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemBox_OnHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBox_OnHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AItemBox_OnHit_Statics::ItemBox_eventOnHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AItemBox_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemBox_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItemBox);
	UClass* Z_Construct_UClass_AItemBox_NoRegister()
	{
		return AItemBox::StaticClass();
	}
	struct Z_Construct_UClass_AItemBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlipbookComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FlipbookComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InactiveFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InactiveFlipbook;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Contents_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Contents_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Contents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemBoxCoinTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemBoxCoinTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MushroomPickupTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MushroomPickupTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoinSwitchTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CoinSwitchTemplate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItemBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBox_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AItemBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AItemBox_OnHit, "OnHit" }, // 2277073913
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBox_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ItemBox.h" },
		{ "ModuleRelativePath", "ItemBox.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemBox_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemBox_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBox, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBox_Statics::NewProp_BoxComponent_MetaData), Z_Construct_UClass_AItemBox_Statics::NewProp_BoxComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemBox_Statics::NewProp_FlipbookComponent_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemBox_Statics::NewProp_FlipbookComponent = { "FlipbookComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBox, FlipbookComponent), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBox_Statics::NewProp_FlipbookComponent_MetaData), Z_Construct_UClass_AItemBox_Statics::NewProp_FlipbookComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemBox_Statics::NewProp_ActiveFlipbook_MetaData[] = {
		{ "Category", "ItemBox flipbooks" },
		{ "ModuleRelativePath", "ItemBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemBox_Statics::NewProp_ActiveFlipbook = { "ActiveFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBox, ActiveFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBox_Statics::NewProp_ActiveFlipbook_MetaData), Z_Construct_UClass_AItemBox_Statics::NewProp_ActiveFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemBox_Statics::NewProp_InactiveFlipbook_MetaData[] = {
		{ "Category", "ItemBox flipbooks" },
		{ "ModuleRelativePath", "ItemBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemBox_Statics::NewProp_InactiveFlipbook = { "InactiveFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBox, InactiveFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBox_Statics::NewProp_InactiveFlipbook_MetaData), Z_Construct_UClass_AItemBox_Statics::NewProp_InactiveFlipbook_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AItemBox_Statics::NewProp_Contents_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemBox_Statics::NewProp_Contents_MetaData[] = {
		{ "Category", "ItemBox state" },
		{ "ModuleRelativePath", "ItemBox.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AItemBox_Statics::NewProp_Contents = { "Contents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBox, Contents), Z_Construct_UEnum_Platformer2D_EItemBoxContents, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBox_Statics::NewProp_Contents_MetaData), Z_Construct_UClass_AItemBox_Statics::NewProp_Contents_MetaData) }; // 617968470
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemBox_Statics::NewProp_ItemBoxCoinTemplate_MetaData[] = {
		{ "Category", "ItemBox templates" },
		{ "ModuleRelativePath", "ItemBox.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AItemBox_Statics::NewProp_ItemBoxCoinTemplate = { "ItemBoxCoinTemplate", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBox, ItemBoxCoinTemplate), Z_Construct_UClass_UClass, Z_Construct_UClass_AItemBoxCoin_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBox_Statics::NewProp_ItemBoxCoinTemplate_MetaData), Z_Construct_UClass_AItemBox_Statics::NewProp_ItemBoxCoinTemplate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemBox_Statics::NewProp_MushroomPickupTemplate_MetaData[] = {
		{ "Category", "ItemBox templates" },
		{ "ModuleRelativePath", "ItemBox.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AItemBox_Statics::NewProp_MushroomPickupTemplate = { "MushroomPickupTemplate", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBox, MushroomPickupTemplate), Z_Construct_UClass_UClass, Z_Construct_UClass_AMushroomPickup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBox_Statics::NewProp_MushroomPickupTemplate_MetaData), Z_Construct_UClass_AItemBox_Statics::NewProp_MushroomPickupTemplate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemBox_Statics::NewProp_CoinSwitchTemplate_MetaData[] = {
		{ "Category", "ItemBox templates" },
		{ "ModuleRelativePath", "ItemBox.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AItemBox_Statics::NewProp_CoinSwitchTemplate = { "CoinSwitchTemplate", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBox, CoinSwitchTemplate), Z_Construct_UClass_UClass, Z_Construct_UClass_ACoinSwitch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBox_Statics::NewProp_CoinSwitchTemplate_MetaData), Z_Construct_UClass_AItemBox_Statics::NewProp_CoinSwitchTemplate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItemBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBox_Statics::NewProp_BoxComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBox_Statics::NewProp_FlipbookComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBox_Statics::NewProp_ActiveFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBox_Statics::NewProp_InactiveFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBox_Statics::NewProp_Contents_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBox_Statics::NewProp_Contents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBox_Statics::NewProp_ItemBoxCoinTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBox_Statics::NewProp_MushroomPickupTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBox_Statics::NewProp_CoinSwitchTemplate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItemBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AItemBox_Statics::ClassParams = {
		&AItemBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AItemBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AItemBox_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBox_Statics::Class_MetaDataParams), Z_Construct_UClass_AItemBox_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBox_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AItemBox()
	{
		if (!Z_Registration_Info_UClass_AItemBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItemBox.OuterSingleton, Z_Construct_UClass_AItemBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AItemBox.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<AItemBox>()
	{
		return AItemBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItemBox);
	AItemBox::~AItemBox() {}
	struct Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_ItemBox_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_ItemBox_h_Statics::EnumInfo[] = {
		{ EItemBoxState_StaticEnum, TEXT("EItemBoxState"), &Z_Registration_Info_UEnum_EItemBoxState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1674523607U) },
		{ EItemBoxContents_StaticEnum, TEXT("EItemBoxContents"), &Z_Registration_Info_UEnum_EItemBoxContents, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 617968470U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_ItemBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AItemBox, AItemBox::StaticClass, TEXT("AItemBox"), &Z_Registration_Info_UClass_AItemBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItemBox), 2060867283U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_ItemBox_h_994005383(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_ItemBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_ItemBox_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_ItemBox_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_ItemBox_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
