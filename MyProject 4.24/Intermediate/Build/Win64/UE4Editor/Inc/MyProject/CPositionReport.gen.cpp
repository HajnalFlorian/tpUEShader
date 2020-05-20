// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Public/CPositionReport.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPositionReport() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_UCPositionReport_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UCPositionReport();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void UCPositionReport::StaticRegisterNativesUCPositionReport()
	{
	}
	UClass* Z_Construct_UClass_UCPositionReport_NoRegister()
	{
		return UCPositionReport::StaticClass();
	}
	struct Z_Construct_UClass_UCPositionReport_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCPositionReport_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPositionReport_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CPositionReport.h" },
		{ "ModuleRelativePath", "Public/CPositionReport.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCPositionReport_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPositionReport>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCPositionReport_Statics::ClassParams = {
		&UCPositionReport::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCPositionReport_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCPositionReport_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCPositionReport()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCPositionReport_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCPositionReport, 1589363115);
	template<> MYPROJECT_API UClass* StaticClass<UCPositionReport>()
	{
		return UCPositionReport::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCPositionReport(Z_Construct_UClass_UCPositionReport, &UCPositionReport::StaticClass, TEXT("/Script/MyProject"), TEXT("UCPositionReport"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCPositionReport);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
