// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Public/cPlayerpawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecPlayerpawn() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AcPlayerpawn_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AcPlayerpawn();
	ENGINE_API UClass* Z_Construct_UClass_ADefaultPawn();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void AcPlayerpawn::StaticRegisterNativesAcPlayerpawn()
	{
	}
	UClass* Z_Construct_UClass_AcPlayerpawn_NoRegister()
	{
		return AcPlayerpawn::StaticClass();
	}
	struct Z_Construct_UClass_AcPlayerpawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AcPlayerpawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADefaultPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcPlayerpawn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "cPlayerpawn.h" },
		{ "ModuleRelativePath", "Public/cPlayerpawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AcPlayerpawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AcPlayerpawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AcPlayerpawn_Statics::ClassParams = {
		&AcPlayerpawn::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_AcPlayerpawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AcPlayerpawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AcPlayerpawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AcPlayerpawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AcPlayerpawn, 4081944211);
	template<> MYPROJECT_API UClass* StaticClass<AcPlayerpawn>()
	{
		return AcPlayerpawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AcPlayerpawn(Z_Construct_UClass_AcPlayerpawn, &AcPlayerpawn::StaticClass, TEXT("/Script/MyProject"), TEXT("AcPlayerpawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AcPlayerpawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
