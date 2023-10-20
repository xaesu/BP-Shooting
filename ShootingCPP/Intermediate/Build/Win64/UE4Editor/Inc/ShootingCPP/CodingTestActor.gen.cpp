// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingCPP/Public/CodingTestActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCodingTestActor() {}
// Cross Module References
	SHOOTINGCPP_API UClass* Z_Construct_UClass_ACodingTestActor_NoRegister();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_ACodingTestActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ShootingCPP();
// End Cross Module References
	DEFINE_FUNCTION(ACodingTestActor::execAdd)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_n1);
		P_GET_PROPERTY(FIntProperty,Z_Param_n2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Add(Z_Param_n1,Z_Param_n2);
		P_NATIVE_END;
	}
	void ACodingTestActor::StaticRegisterNativesACodingTestActor()
	{
		UClass* Class = ACodingTestActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Add", &ACodingTestActor::execAdd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACodingTestActor_Add_Statics
	{
		struct CodingTestActor_eventAdd_Parms
		{
			int32 n1;
			int32 n2;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_n1;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_n2;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACodingTestActor_Add_Statics::NewProp_n1 = { "n1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CodingTestActor_eventAdd_Parms, n1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACodingTestActor_Add_Statics::NewProp_n2 = { "n2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CodingTestActor_eventAdd_Parms, n2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACodingTestActor_Add_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CodingTestActor_eventAdd_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACodingTestActor_Add_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACodingTestActor_Add_Statics::NewProp_n1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACodingTestActor_Add_Statics::NewProp_n2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACodingTestActor_Add_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACodingTestActor_Add_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CodingTestActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACodingTestActor_Add_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACodingTestActor, nullptr, "Add", nullptr, nullptr, sizeof(CodingTestActor_eventAdd_Parms), Z_Construct_UFunction_ACodingTestActor_Add_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACodingTestActor_Add_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACodingTestActor_Add_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACodingTestActor_Add_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACodingTestActor_Add()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACodingTestActor_Add_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACodingTestActor_NoRegister()
	{
		return ACodingTestActor::StaticClass();
	}
	struct Z_Construct_UClass_ACodingTestActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_number1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_number1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_number2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_number2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACodingTestActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingCPP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACodingTestActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACodingTestActor_Add, "Add" }, // 115737304
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodingTestActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CodingTestActor.h" },
		{ "ModuleRelativePath", "Public/CodingTestActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodingTestActor_Statics::NewProp_number1_MetaData[] = {
		{ "Category", "CodingTestActor" },
		{ "ModuleRelativePath", "Public/CodingTestActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACodingTestActor_Statics::NewProp_number1 = { "number1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACodingTestActor, number1), METADATA_PARAMS(Z_Construct_UClass_ACodingTestActor_Statics::NewProp_number1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACodingTestActor_Statics::NewProp_number1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodingTestActor_Statics::NewProp_number2_MetaData[] = {
		{ "Category", "CodingTestActor" },
		{ "ModuleRelativePath", "Public/CodingTestActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACodingTestActor_Statics::NewProp_number2 = { "number2", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACodingTestActor, number2), METADATA_PARAMS(Z_Construct_UClass_ACodingTestActor_Statics::NewProp_number2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACodingTestActor_Statics::NewProp_number2_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACodingTestActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodingTestActor_Statics::NewProp_number1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACodingTestActor_Statics::NewProp_number2,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACodingTestActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACodingTestActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACodingTestActor_Statics::ClassParams = {
		&ACodingTestActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACodingTestActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACodingTestActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACodingTestActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACodingTestActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACodingTestActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACodingTestActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACodingTestActor, 631851031);
	template<> SHOOTINGCPP_API UClass* StaticClass<ACodingTestActor>()
	{
		return ACodingTestActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACodingTestActor(Z_Construct_UClass_ACodingTestActor, &ACodingTestActor::StaticClass, TEXT("/Script/ShootingCPP"), TEXT("ACodingTestActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACodingTestActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
