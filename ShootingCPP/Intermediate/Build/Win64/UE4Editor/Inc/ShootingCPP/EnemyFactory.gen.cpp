// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingCPP/Public/EnemyFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyFactory() {}
// Cross Module References
	SHOOTINGCPP_API UClass* Z_Construct_UClass_AEnemyFactory_NoRegister();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_AEnemyFactory();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ShootingCPP();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_AEnemyActor_NoRegister();
// End Cross Module References
	void AEnemyFactory::StaticRegisterNativesAEnemyFactory()
	{
	}
	UClass* Z_Construct_UClass_AEnemyFactory_NoRegister()
	{
		return AEnemyFactory::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_delayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_delayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_enemy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyFactory.h" },
		{ "ModuleRelativePath", "Public/EnemyFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyFactory_Statics::NewProp_delayTime_MetaData[] = {
		{ "Category", "EnemyFactory" },
		{ "Comment", "//  ???? ???? ?????? ?????? ????\n" },
		{ "ModuleRelativePath", "Public/EnemyFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyFactory_Statics::NewProp_delayTime = { "delayTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyFactory, delayTime), METADATA_PARAMS(Z_Construct_UClass_AEnemyFactory_Statics::NewProp_delayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyFactory_Statics::NewProp_delayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyFactory_Statics::NewProp_enemy_MetaData[] = {
		{ "Category", "EnemyFactory" },
		{ "Comment", "// Enemy ???? ????\xc6\xae?? ?????? ????\n" },
		{ "ModuleRelativePath", "Public/EnemyFactory.h" },
		{ "ToolTip", "Enemy ???? ????\xc6\xae?? ?????? ????" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemyFactory_Statics::NewProp_enemy = { "enemy", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyFactory, enemy), Z_Construct_UClass_AEnemyActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AEnemyFactory_Statics::NewProp_enemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyFactory_Statics::NewProp_enemy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyFactory_Statics::NewProp_delayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyFactory_Statics::NewProp_enemy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyFactory_Statics::ClassParams = {
		&AEnemyFactory::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyFactory_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyFactory, 2456806848);
	template<> SHOOTINGCPP_API UClass* StaticClass<AEnemyFactory>()
	{
		return AEnemyFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyFactory(Z_Construct_UClass_AEnemyFactory, &AEnemyFactory::StaticClass, TEXT("/Script/ShootingCPP"), TEXT("AEnemyFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
