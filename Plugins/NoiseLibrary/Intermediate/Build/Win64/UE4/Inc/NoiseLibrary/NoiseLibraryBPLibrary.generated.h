// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FVector2D;
#ifdef NOISELIBRARY_NoiseLibraryBPLibrary_generated_h
#error "NoiseLibraryBPLibrary.generated.h already included, missing '#pragma once' in NoiseLibraryBPLibrary.h"
#endif
#define NOISELIBRARY_NoiseLibraryBPLibrary_generated_h

#define HelicopterTesting_Plugins_NoiseLibrary_Source_NoiseLibrary_Public_NoiseLibraryBPLibrary_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSimplexNoiseVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UNoiseLibraryBPLibrary::SimplexNoiseVector(Z_Param_Param); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimplexNoiseVector2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UNoiseLibraryBPLibrary::SimplexNoiseVector2D(Z_Param_Param); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimplexNoiseFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UNoiseLibraryBPLibrary::SimplexNoiseFloat(Z_Param_Param); \
		P_NATIVE_END; \
	}


#define HelicopterTesting_Plugins_NoiseLibrary_Source_NoiseLibrary_Public_NoiseLibraryBPLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSimplexNoiseVector) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UNoiseLibraryBPLibrary::SimplexNoiseVector(Z_Param_Param); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimplexNoiseVector2D) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UNoiseLibraryBPLibrary::SimplexNoiseVector2D(Z_Param_Param); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimplexNoiseFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UNoiseLibraryBPLibrary::SimplexNoiseFloat(Z_Param_Param); \
		P_NATIVE_END; \
	}


#define HelicopterTesting_Plugins_NoiseLibrary_Source_NoiseLibrary_Public_NoiseLibraryBPLibrary_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNoiseLibraryBPLibrary(); \
	friend struct Z_Construct_UClass_UNoiseLibraryBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UNoiseLibraryBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NoiseLibrary"), NO_API) \
	DECLARE_SERIALIZER(UNoiseLibraryBPLibrary)


#define HelicopterTesting_Plugins_NoiseLibrary_Source_NoiseLibrary_Public_NoiseLibraryBPLibrary_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUNoiseLibraryBPLibrary(); \
	friend struct Z_Construct_UClass_UNoiseLibraryBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UNoiseLibraryBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NoiseLibrary"), NO_API) \
	DECLARE_SERIALIZER(UNoiseLibraryBPLibrary)


#define HelicopterTesting_Plugins_NoiseLibrary_Source_NoiseLibrary_Public_NoiseLibraryBPLibrary_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNoiseLibraryBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNoiseLibraryBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNoiseLibraryBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNoiseLibraryBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNoiseLibraryBPLibrary(UNoiseLibraryBPLibrary&&); \
	NO_API UNoiseLibraryBPLibrary(const UNoiseLibraryBPLibrary&); \
public:


#define HelicopterTesting_Plugins_NoiseLibrary_Source_NoiseLibrary_Public_NoiseLibraryBPLibrary_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNoiseLibraryBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNoiseLibraryBPLibrary(UNoiseLibraryBPLibrary&&); \
	NO_API UNoiseLibraryBPLibrary(const UNoiseLibraryBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNoiseLibraryBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNoiseLibraryBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNoiseLibraryBPLibrary)


#define HelicopterTesting_Plugins_NoiseLibrary_Source_NoiseLibrary_Public_NoiseLibraryBPLibrary_h_29_PRIVATE_PROPERTY_OFFSET
#define HelicopterTesting_Plugins_NoiseLibrary_Source_NoiseLibrary_Public_NoiseLibraryBPLibrary_h_26_PROLOG
#define HelicopterTesting_Plugins_NoiseLibrary_Source_NoiseLibrary_Public_NoiseLibraryBPLibrary_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HelicopterTesting_Plugins_NoiseLibrary_Source_NoiseLibrary_Public_NoiseLibraryBPLibrary_h_29_PRIVATE_PROPERTY_OFFSET \
	HelicopterTesting_Plugins_NoiseLibrary_Source_NoiseLibrary_Public_NoiseLibraryBPLibrary_h_29_RPC_WRAPPERS \
	HelicopterTesting_Plugins_NoiseLibrary_Source_NoiseLibrary_Public_NoiseLibraryBPLibrary_h_29_INCLASS \
	HelicopterTesting_Plugins_NoiseLibrary_Source_NoiseLibrary_Public_NoiseLibraryBPLibrary_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HelicopterTesting_Plugins_NoiseLibrary_Source_NoiseLibrary_Public_NoiseLibraryBPLibrary_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HelicopterTesting_Plugins_NoiseLibrary_Source_NoiseLibrary_Public_NoiseLibraryBPLibrary_h_29_PRIVATE_PROPERTY_OFFSET \
	HelicopterTesting_Plugins_NoiseLibrary_Source_NoiseLibrary_Public_NoiseLibraryBPLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	HelicopterTesting_Plugins_NoiseLibrary_Source_NoiseLibrary_Public_NoiseLibraryBPLibrary_h_29_INCLASS_NO_PURE_DECLS \
	HelicopterTesting_Plugins_NoiseLibrary_Source_NoiseLibrary_Public_NoiseLibraryBPLibrary_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NoiseLibraryBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HelicopterTesting_Plugins_NoiseLibrary_Source_NoiseLibrary_Public_NoiseLibraryBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
