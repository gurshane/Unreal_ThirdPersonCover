// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef THIRDPERSONCOVER_ThirdPersonCoverCharacter_generated_h
#error "ThirdPersonCoverCharacter.generated.h already included, missing '#pragma once' in ThirdPersonCoverCharacter.h"
#endif
#define THIRDPERSONCOVER_ThirdPersonCoverCharacter_generated_h

#define ThirdPersonCover_Source_ThirdPersonCover_ThirdPersonCoverCharacter_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define ThirdPersonCover_Source_ThirdPersonCover_ThirdPersonCoverCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define ThirdPersonCover_Source_ThirdPersonCover_ThirdPersonCoverCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThirdPersonCoverCharacter(); \
	friend THIRDPERSONCOVER_API class UClass* Z_Construct_UClass_AThirdPersonCoverCharacter(); \
public: \
	DECLARE_CLASS(AThirdPersonCoverCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ThirdPersonCover"), NO_API) \
	DECLARE_SERIALIZER(AThirdPersonCoverCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ThirdPersonCover_Source_ThirdPersonCover_ThirdPersonCoverCharacter_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAThirdPersonCoverCharacter(); \
	friend THIRDPERSONCOVER_API class UClass* Z_Construct_UClass_AThirdPersonCoverCharacter(); \
public: \
	DECLARE_CLASS(AThirdPersonCoverCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ThirdPersonCover"), NO_API) \
	DECLARE_SERIALIZER(AThirdPersonCoverCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ThirdPersonCover_Source_ThirdPersonCover_ThirdPersonCoverCharacter_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AThirdPersonCoverCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AThirdPersonCoverCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThirdPersonCoverCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThirdPersonCoverCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThirdPersonCoverCharacter(AThirdPersonCoverCharacter&&); \
	NO_API AThirdPersonCoverCharacter(const AThirdPersonCoverCharacter&); \
public:


#define ThirdPersonCover_Source_ThirdPersonCover_ThirdPersonCoverCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThirdPersonCoverCharacter(AThirdPersonCoverCharacter&&); \
	NO_API AThirdPersonCoverCharacter(const AThirdPersonCoverCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThirdPersonCoverCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThirdPersonCoverCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AThirdPersonCoverCharacter)


#define ThirdPersonCover_Source_ThirdPersonCover_ThirdPersonCoverCharacter_h_24_PRIVATE_PROPERTY_OFFSET
#define ThirdPersonCover_Source_ThirdPersonCover_ThirdPersonCoverCharacter_h_21_PROLOG
#define ThirdPersonCover_Source_ThirdPersonCover_ThirdPersonCoverCharacter_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ThirdPersonCover_Source_ThirdPersonCover_ThirdPersonCoverCharacter_h_24_PRIVATE_PROPERTY_OFFSET \
	ThirdPersonCover_Source_ThirdPersonCover_ThirdPersonCoverCharacter_h_24_RPC_WRAPPERS \
	ThirdPersonCover_Source_ThirdPersonCover_ThirdPersonCoverCharacter_h_24_INCLASS \
	ThirdPersonCover_Source_ThirdPersonCover_ThirdPersonCoverCharacter_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ThirdPersonCover_Source_ThirdPersonCover_ThirdPersonCoverCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ThirdPersonCover_Source_ThirdPersonCover_ThirdPersonCoverCharacter_h_24_PRIVATE_PROPERTY_OFFSET \
	ThirdPersonCover_Source_ThirdPersonCover_ThirdPersonCoverCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	ThirdPersonCover_Source_ThirdPersonCover_ThirdPersonCoverCharacter_h_24_INCLASS_NO_PURE_DECLS \
	ThirdPersonCover_Source_ThirdPersonCover_ThirdPersonCoverCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ThirdPersonCover_Source_ThirdPersonCover_ThirdPersonCoverCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
