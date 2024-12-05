// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/Boo.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoo() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ABoo();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ABoo_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AEnemy();
	PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_EBooDirection();
	PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_EBooState();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBooState;
	static UEnum* EBooState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBooState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBooState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_EBooState, (UObject*)Z_Construct_UPackage__Script_Platformer2D(), TEXT("EBooState"));
		}
		return Z_Registration_Info_UEnum_EBooState.OuterSingleton;
	}
	template<> PLATFORMER2D_API UEnum* StaticEnum<EBooState>()
	{
		return EBooState_StaticEnum();
	}
	struct Z_Construct_UEnum_Platformer2D_EBooState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Platformer2D_EBooState_Statics::Enumerators[] = {
		{ "EBooState::Unknown", (int64)EBooState::Unknown },
		{ "EBooState::Active", (int64)EBooState::Active },
		{ "EBooState::Hiding", (int64)EBooState::Hiding },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Platformer2D_EBooState_Statics::Enum_MetaDataParams[] = {
		{ "Active.DisplayName", "Active" },
		{ "Active.Name", "EBooState::Active" },
		{ "BlueprintType", "true" },
		{ "Hiding.DisplayName", "Hiding" },
		{ "Hiding.Name", "EBooState::Hiding" },
		{ "ModuleRelativePath", "Boo.h" },
		{ "Unknown.DisplayName", "Unknown" },
		{ "Unknown.Name", "EBooState::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Platformer2D_EBooState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
		nullptr,
		"EBooState",
		"EBooState",
		Z_Construct_UEnum_Platformer2D_EBooState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EBooState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EBooState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Platformer2D_EBooState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Platformer2D_EBooState()
	{
		if (!Z_Registration_Info_UEnum_EBooState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBooState.InnerSingleton, Z_Construct_UEnum_Platformer2D_EBooState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBooState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBooDirection;
	static UEnum* EBooDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBooDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBooDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_EBooDirection, (UObject*)Z_Construct_UPackage__Script_Platformer2D(), TEXT("EBooDirection"));
		}
		return Z_Registration_Info_UEnum_EBooDirection.OuterSingleton;
	}
	template<> PLATFORMER2D_API UEnum* StaticEnum<EBooDirection>()
	{
		return EBooDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_Platformer2D_EBooDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Platformer2D_EBooDirection_Statics::Enumerators[] = {
		{ "EBooDirection::Left", (int64)EBooDirection::Left },
		{ "EBooDirection::Right", (int64)EBooDirection::Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Platformer2D_EBooDirection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "EBooDirection::Left" },
		{ "ModuleRelativePath", "Boo.h" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "EBooDirection::Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Platformer2D_EBooDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
		nullptr,
		"EBooDirection",
		"EBooDirection",
		Z_Construct_UEnum_Platformer2D_EBooDirection_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EBooDirection_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EBooDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Platformer2D_EBooDirection_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Platformer2D_EBooDirection()
	{
		if (!Z_Registration_Info_UEnum_EBooDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBooDirection.InnerSingleton, Z_Construct_UEnum_Platformer2D_EBooDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBooDirection.InnerSingleton;
	}
	DEFINE_FUNCTION(ABoo::execOnHit)
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
	void ABoo::StaticRegisterNativesABoo()
	{
		UClass* Class = ABoo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &ABoo::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABoo_OnHit_Statics
	{
		struct Boo_eventOnHit_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoo_OnHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoo_OnHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Boo_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoo_OnHit_Statics::NewProp_HitComponent_MetaData), Z_Construct_UFunction_ABoo_OnHit_Statics::NewProp_HitComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoo_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Boo_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoo_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoo_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Boo_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoo_OnHit_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ABoo_OnHit_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABoo_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Boo_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoo_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABoo_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Boo_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoo_OnHit_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_ABoo_OnHit_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoo_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoo_OnHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoo_OnHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoo_OnHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoo_OnHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoo_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoo_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Boo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoo_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoo, nullptr, "OnHit", nullptr, nullptr, Z_Construct_UFunction_ABoo_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoo_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABoo_OnHit_Statics::Boo_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoo_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABoo_OnHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoo_OnHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABoo_OnHit_Statics::Boo_eventOnHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABoo_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABoo_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoo);
	UClass* Z_Construct_UClass_ABoo_NoRegister()
	{
		return ABoo::StaticClass();
	}
	struct Z_Construct_UClass_ABoo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BooDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BooDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BooDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HidingFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HidingFlipbook;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoo_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABoo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABoo_OnHit, "OnHit" }, // 1648831233
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoo_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoo_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Boo.h" },
		{ "ModuleRelativePath", "Boo.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABoo_Statics::NewProp_BooDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoo_Statics::NewProp_BooDirection_MetaData[] = {
		{ "Category", "Direction" },
		{ "ModuleRelativePath", "Boo.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABoo_Statics::NewProp_BooDirection = { "BooDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoo, BooDirection), Z_Construct_UEnum_Platformer2D_EBooDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoo_Statics::NewProp_BooDirection_MetaData), Z_Construct_UClass_ABoo_Statics::NewProp_BooDirection_MetaData) }; // 3454823769
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoo_Statics::NewProp_ActiveFlipbook_MetaData[] = {
		{ "Category", "Boo flipbooks" },
		{ "ModuleRelativePath", "Boo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoo_Statics::NewProp_ActiveFlipbook = { "ActiveFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoo, ActiveFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoo_Statics::NewProp_ActiveFlipbook_MetaData), Z_Construct_UClass_ABoo_Statics::NewProp_ActiveFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoo_Statics::NewProp_HidingFlipbook_MetaData[] = {
		{ "Category", "Boo flipbooks" },
		{ "ModuleRelativePath", "Boo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoo_Statics::NewProp_HidingFlipbook = { "HidingFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoo, HidingFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoo_Statics::NewProp_HidingFlipbook_MetaData), Z_Construct_UClass_ABoo_Statics::NewProp_HidingFlipbook_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoo_Statics::NewProp_BooDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoo_Statics::NewProp_BooDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoo_Statics::NewProp_ActiveFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoo_Statics::NewProp_HidingFlipbook,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoo_Statics::ClassParams = {
		&ABoo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABoo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoo_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoo_Statics::Class_MetaDataParams), Z_Construct_UClass_ABoo_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoo_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABoo()
	{
		if (!Z_Registration_Info_UClass_ABoo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoo.OuterSingleton, Z_Construct_UClass_ABoo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABoo.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<ABoo>()
	{
		return ABoo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoo);
	ABoo::~ABoo() {}
	struct Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_Boo_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_Boo_h_Statics::EnumInfo[] = {
		{ EBooState_StaticEnum, TEXT("EBooState"), &Z_Registration_Info_UEnum_EBooState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3231000946U) },
		{ EBooDirection_StaticEnum, TEXT("EBooDirection"), &Z_Registration_Info_UEnum_EBooDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3454823769U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_Boo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABoo, ABoo::StaticClass, TEXT("ABoo"), &Z_Registration_Info_UClass_ABoo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoo), 2263138598U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_Boo_h_3866736055(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_Boo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_Boo_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_Boo_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_Boo_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
