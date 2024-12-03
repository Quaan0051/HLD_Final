// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/ChainChomp.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChainChomp() {}
// Cross Module References
	CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AChainChomp();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AChainChomp_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AEnemy();
	PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_EChainChompState();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChainChompState;
	static UEnum* EChainChompState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EChainChompState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EChainChompState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_EChainChompState, (UObject*)Z_Construct_UPackage__Script_Platformer2D(), TEXT("EChainChompState"));
		}
		return Z_Registration_Info_UEnum_EChainChompState.OuterSingleton;
	}
	template<> PLATFORMER2D_API UEnum* StaticEnum<EChainChompState>()
	{
		return EChainChompState_StaticEnum();
	}
	struct Z_Construct_UEnum_Platformer2D_EChainChompState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Platformer2D_EChainChompState_Statics::Enumerators[] = {
		{ "EChainChompState::Unknown", (int64)EChainChompState::Unknown },
		{ "EChainChompState::Idle", (int64)EChainChompState::Idle },
		{ "EChainChompState::Jumping", (int64)EChainChompState::Jumping },
		{ "EChainChompState::Detached", (int64)EChainChompState::Detached },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Platformer2D_EChainChompState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Detached.DisplayName", "Detached" },
		{ "Detached.Name", "EChainChompState::Detached" },
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "EChainChompState::Idle" },
		{ "Jumping.DisplayName", "Active" },
		{ "Jumping.Name", "EChainChompState::Jumping" },
		{ "ModuleRelativePath", "ChainChomp.h" },
		{ "Unknown.DisplayName", "Unknown" },
		{ "Unknown.Name", "EChainChompState::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Platformer2D_EChainChompState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
		nullptr,
		"EChainChompState",
		"EChainChompState",
		Z_Construct_UEnum_Platformer2D_EChainChompState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EChainChompState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EChainChompState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Platformer2D_EChainChompState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Platformer2D_EChainChompState()
	{
		if (!Z_Registration_Info_UEnum_EChainChompState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChainChompState.InnerSingleton, Z_Construct_UEnum_Platformer2D_EChainChompState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EChainChompState.InnerSingleton;
	}
	DEFINE_FUNCTION(AChainChomp::execOnHit)
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
	void AChainChomp::StaticRegisterNativesAChainChomp()
	{
		UClass* Class = AChainChomp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &AChainChomp::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AChainChomp_OnHit_Statics
	{
		struct ChainChomp_eventOnHit_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChainChomp_OnHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChainChomp_OnHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChainChomp_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChainChomp_OnHit_Statics::NewProp_HitComponent_MetaData), Z_Construct_UFunction_AChainChomp_OnHit_Statics::NewProp_HitComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChainChomp_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChainChomp_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChainChomp_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChainChomp_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChainChomp_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChainChomp_OnHit_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AChainChomp_OnHit_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChainChomp_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChainChomp_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChainChomp_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChainChomp_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChainChomp_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChainChomp_OnHit_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_AChainChomp_OnHit_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChainChomp_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChainChomp_OnHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChainChomp_OnHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChainChomp_OnHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChainChomp_OnHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChainChomp_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChainChomp_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ChainChomp.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChainChomp_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChainChomp, nullptr, "OnHit", nullptr, nullptr, Z_Construct_UFunction_AChainChomp_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChainChomp_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChainChomp_OnHit_Statics::ChainChomp_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChainChomp_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChainChomp_OnHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChainChomp_OnHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AChainChomp_OnHit_Statics::ChainChomp_eventOnHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AChainChomp_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChainChomp_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChainChomp);
	UClass* Z_Construct_UClass_AChainChomp_NoRegister()
	{
		return AChainChomp::StaticClass();
	}
	struct Z_Construct_UClass_AChainChomp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CableComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CableComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstraintComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChainChomp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChainChomp_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AChainChomp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AChainChomp_OnHit, "OnHit" }, // 4197007677
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChainChomp_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChainChomp_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ChainChomp.h" },
		{ "ModuleRelativePath", "ChainChomp.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChainChomp_Statics::NewProp_CableComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ChainChomp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChainChomp_Statics::NewProp_CableComponent = { "CableComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChainChomp, CableComponent), Z_Construct_UClass_UCableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChainChomp_Statics::NewProp_CableComponent_MetaData), Z_Construct_UClass_AChainChomp_Statics::NewProp_CableComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChainChomp_Statics::NewProp_AttachPoint_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ChainChomp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChainChomp_Statics::NewProp_AttachPoint = { "AttachPoint", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChainChomp, AttachPoint), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChainChomp_Statics::NewProp_AttachPoint_MetaData), Z_Construct_UClass_AChainChomp_Statics::NewProp_AttachPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChainChomp_Statics::NewProp_ConstraintComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = \"Components\")\n\x09""class UBoxComponent* HeadBoxComponent;*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ChainChomp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = \"Components\")\n       class UBoxComponent* HeadBoxComponent;" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChainChomp_Statics::NewProp_ConstraintComponent = { "ConstraintComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChainChomp, ConstraintComponent), Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChainChomp_Statics::NewProp_ConstraintComponent_MetaData), Z_Construct_UClass_AChainChomp_Statics::NewProp_ConstraintComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChainChomp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChainChomp_Statics::NewProp_CableComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChainChomp_Statics::NewProp_AttachPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChainChomp_Statics::NewProp_ConstraintComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChainChomp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChainChomp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChainChomp_Statics::ClassParams = {
		&AChainChomp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AChainChomp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AChainChomp_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChainChomp_Statics::Class_MetaDataParams), Z_Construct_UClass_AChainChomp_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChainChomp_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AChainChomp()
	{
		if (!Z_Registration_Info_UClass_AChainChomp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChainChomp.OuterSingleton, Z_Construct_UClass_AChainChomp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChainChomp.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<AChainChomp>()
	{
		return AChainChomp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChainChomp);
	AChainChomp::~AChainChomp() {}
	struct Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_ChainChomp_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_ChainChomp_h_Statics::EnumInfo[] = {
		{ EChainChompState_StaticEnum, TEXT("EChainChompState"), &Z_Registration_Info_UEnum_EChainChompState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2604979616U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_ChainChomp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChainChomp, AChainChomp::StaticClass, TEXT("AChainChomp"), &Z_Registration_Info_UClass_AChainChomp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChainChomp), 2764010550U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_ChainChomp_h_2528214121(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_ChainChomp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_ChainChomp_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_ChainChomp_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_ChainChomp_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
