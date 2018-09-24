// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoiseLibrary/Public/NoiseLibraryBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoiseLibraryBPLibrary() {}
// Cross Module References
	NOISELIBRARY_API UClass* Z_Construct_UClass_UNoiseLibraryBPLibrary_NoRegister();
	NOISELIBRARY_API UClass* Z_Construct_UClass_UNoiseLibraryBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_NoiseLibrary();
	NOISELIBRARY_API UFunction* Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseFloat();
	NOISELIBRARY_API UFunction* Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NOISELIBRARY_API UFunction* Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void UNoiseLibraryBPLibrary::StaticRegisterNativesUNoiseLibraryBPLibrary()
	{
		UClass* Class = UNoiseLibraryBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SimplexNoiseFloat", &UNoiseLibraryBPLibrary::execSimplexNoiseFloat },
			{ "SimplexNoiseVector", &UNoiseLibraryBPLibrary::execSimplexNoiseVector },
			{ "SimplexNoiseVector2D", &UNoiseLibraryBPLibrary::execSimplexNoiseVector2D },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseFloat_Statics
	{
		struct NoiseLibraryBPLibrary_eventSimplexNoiseFloat_Parms
		{
			float Param;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseFloat_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NoiseLibraryBPLibrary_eventSimplexNoiseFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseFloat_Statics::NewProp_Param = { UE4CodeGen_Private::EPropertyClass::Float, "Param", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NoiseLibraryBPLibrary_eventSimplexNoiseFloat_Parms, Param), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseFloat_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Noise|SimplexNoise" },
		{ "DisplayName", "Simplex Noise Float" },
		{ "Keywords", "NoiseLibrary noise simplex" },
		{ "ModuleRelativePath", "Public/NoiseLibraryBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNoiseLibraryBPLibrary, "SimplexNoiseFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(NoiseLibraryBPLibrary_eventSimplexNoiseFloat_Parms), Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseFloat_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseFloat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseVector_Statics
	{
		struct NoiseLibraryBPLibrary_eventSimplexNoiseVector_Parms
		{
			FVector Param;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseVector_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NoiseLibraryBPLibrary_eventSimplexNoiseVector_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseVector_Statics::NewProp_Param = { UE4CodeGen_Private::EPropertyClass::Struct, "Param", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NoiseLibraryBPLibrary_eventSimplexNoiseVector_Parms, Param), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseVector_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Noise|SimplexNoise" },
		{ "DisplayName", "Simplex Noise Vector" },
		{ "Keywords", "NoiseLibrary noise simplex" },
		{ "ModuleRelativePath", "Public/NoiseLibraryBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNoiseLibraryBPLibrary, "SimplexNoiseVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(NoiseLibraryBPLibrary_eventSimplexNoiseVector_Parms), Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseVector_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseVector2D_Statics
	{
		struct NoiseLibraryBPLibrary_eventSimplexNoiseVector2D_Parms
		{
			FVector2D Param;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseVector2D_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NoiseLibraryBPLibrary_eventSimplexNoiseVector2D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseVector2D_Statics::NewProp_Param = { UE4CodeGen_Private::EPropertyClass::Struct, "Param", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NoiseLibraryBPLibrary_eventSimplexNoiseVector2D_Parms, Param), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseVector2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseVector2D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseVector2D_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseVector2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Noise|SimplexNoise" },
		{ "DisplayName", "Simplex Noise Vector2D" },
		{ "Keywords", "NoiseLibrary noise simplex" },
		{ "ModuleRelativePath", "Public/NoiseLibraryBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNoiseLibraryBPLibrary, "SimplexNoiseVector2D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(NoiseLibraryBPLibrary_eventSimplexNoiseVector2D_Parms), Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseVector2D_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseVector2D_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseVector2D_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseVector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNoiseLibraryBPLibrary_NoRegister()
	{
		return UNoiseLibraryBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UNoiseLibraryBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNoiseLibraryBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_NoiseLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNoiseLibraryBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseFloat, "SimplexNoiseFloat" }, // 4122440752
		{ &Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseVector, "SimplexNoiseVector" }, // 2604865016
		{ &Z_Construct_UFunction_UNoiseLibraryBPLibrary_SimplexNoiseVector2D, "SimplexNoiseVector2D" }, // 1872974916
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoiseLibraryBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NoiseLibraryBPLibrary.h" },
		{ "ModuleRelativePath", "Public/NoiseLibraryBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNoiseLibraryBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNoiseLibraryBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNoiseLibraryBPLibrary_Statics::ClassParams = {
		&UNoiseLibraryBPLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UNoiseLibraryBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNoiseLibraryBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNoiseLibraryBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNoiseLibraryBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNoiseLibraryBPLibrary, 2129532032);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNoiseLibraryBPLibrary(Z_Construct_UClass_UNoiseLibraryBPLibrary, &UNoiseLibraryBPLibrary::StaticClass, TEXT("/Script/NoiseLibrary"), TEXT("UNoiseLibraryBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNoiseLibraryBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
