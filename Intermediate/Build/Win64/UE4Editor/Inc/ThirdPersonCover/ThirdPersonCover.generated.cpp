// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ThirdPersonCover.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1ThirdPersonCover() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API class UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();

	THIRDPERSONCOVER_API class UScriptStruct* Z_Construct_UScriptStruct_FCoverBias();
	THIRDPERSONCOVER_API class UClass* Z_Construct_UClass_AActorStruct_NoRegister();
	THIRDPERSONCOVER_API class UClass* Z_Construct_UClass_AActorStruct();
	THIRDPERSONCOVER_API class UClass* Z_Construct_UClass_ACoverVolume_NoRegister();
	THIRDPERSONCOVER_API class UClass* Z_Construct_UClass_ACoverVolume();
	THIRDPERSONCOVER_API class UFunction* Z_Construct_UFunction_AThirdPersonCoverCharacter_OnOverlapBegin();
	THIRDPERSONCOVER_API class UFunction* Z_Construct_UFunction_AThirdPersonCoverCharacter_OnOverlapEnd();
	THIRDPERSONCOVER_API class UClass* Z_Construct_UClass_AThirdPersonCoverCharacter_NoRegister();
	THIRDPERSONCOVER_API class UClass* Z_Construct_UClass_AThirdPersonCoverCharacter();
	THIRDPERSONCOVER_API class UClass* Z_Construct_UClass_AThirdPersonCoverGameModeBase_NoRegister();
	THIRDPERSONCOVER_API class UClass* Z_Construct_UClass_AThirdPersonCoverGameModeBase();
	THIRDPERSONCOVER_API class UPackage* Z_Construct_UPackage__Script_ThirdPersonCover();
class UScriptStruct* FCoverBias::StaticStruct()
{
	extern THIRDPERSONCOVER_API class UPackage* Z_Construct_UPackage__Script_ThirdPersonCover();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THIRDPERSONCOVER_API class UScriptStruct* Z_Construct_UScriptStruct_FCoverBias();
		extern THIRDPERSONCOVER_API uint32 Get_Z_Construct_UScriptStruct_FCoverBias_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoverBias, Z_Construct_UPackage__Script_ThirdPersonCover(), TEXT("CoverBias"), sizeof(FCoverBias), Get_Z_Construct_UScriptStruct_FCoverBias_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCoverBias(FCoverBias::StaticStruct, TEXT("/Script/ThirdPersonCover"), TEXT("CoverBias"), false, nullptr, nullptr);
static struct FScriptStruct_ThirdPersonCover_StaticRegisterNativesFCoverBias
{
	FScriptStruct_ThirdPersonCover_StaticRegisterNativesFCoverBias()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CoverBias")),new UScriptStruct::TCppStructOps<FCoverBias>);
	}
} ScriptStruct_ThirdPersonCover_StaticRegisterNativesFCoverBias;
	UScriptStruct* Z_Construct_UScriptStruct_FCoverBias()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ThirdPersonCover();
		extern uint32 Get_Z_Construct_UScriptStruct_FCoverBias_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CoverBias"), sizeof(FCoverBias), Get_Z_Construct_UScriptStruct_FCoverBias_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CoverBias"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FCoverBias>, EStructFlags(0x00000001));
			UProperty* NewProp_peekAmount = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("peekAmount"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(peekAmount, FCoverBias), 0x0010000000000001, Z_Construct_UScriptStruct_FVector());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(crouchCover, FCoverBias, bool);
			UProperty* NewProp_crouchCover = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("crouchCover"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(crouchCover, FCoverBias), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(crouchCover, FCoverBias), sizeof(bool), true);
			UProperty* NewProp_cameraFOV = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("cameraFOV"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(cameraFOV, FCoverBias), 0x0010000000000001);
			UProperty* NewProp_cameraArmLength = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("cameraArmLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(cameraArmLength, FCoverBias), 0x0010000000000001);
			UProperty* NewProp_cameraRotation = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("cameraRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(cameraRotation, FCoverBias), 0x0010000000000001, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_cameraLocation = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("cameraLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(cameraLocation, FCoverBias), 0x0010000000000001, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_cameraArmLocation = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("cameraArmLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(cameraArmLocation, FCoverBias), 0x0010000000000001, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_cameraArmSocketOffset = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("cameraArmSocketOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(cameraArmSocketOffset, FCoverBias), 0x0010000000000001, Z_Construct_UScriptStruct_FVector());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("ActorStruct.h"));
			MetaData->SetValue(NewProp_peekAmount, TEXT("Category"), TEXT("Cover"));
			MetaData->SetValue(NewProp_peekAmount, TEXT("ModuleRelativePath"), TEXT("ActorStruct.h"));
			MetaData->SetValue(NewProp_crouchCover, TEXT("Category"), TEXT("Cover"));
			MetaData->SetValue(NewProp_crouchCover, TEXT("ModuleRelativePath"), TEXT("ActorStruct.h"));
			MetaData->SetValue(NewProp_cameraFOV, TEXT("Category"), TEXT("Cover"));
			MetaData->SetValue(NewProp_cameraFOV, TEXT("ModuleRelativePath"), TEXT("ActorStruct.h"));
			MetaData->SetValue(NewProp_cameraArmLength, TEXT("Category"), TEXT("Cover"));
			MetaData->SetValue(NewProp_cameraArmLength, TEXT("ModuleRelativePath"), TEXT("ActorStruct.h"));
			MetaData->SetValue(NewProp_cameraRotation, TEXT("Category"), TEXT("Cover"));
			MetaData->SetValue(NewProp_cameraRotation, TEXT("ModuleRelativePath"), TEXT("ActorStruct.h"));
			MetaData->SetValue(NewProp_cameraLocation, TEXT("Category"), TEXT("Cover"));
			MetaData->SetValue(NewProp_cameraLocation, TEXT("ModuleRelativePath"), TEXT("ActorStruct.h"));
			MetaData->SetValue(NewProp_cameraArmLocation, TEXT("Category"), TEXT("Cover"));
			MetaData->SetValue(NewProp_cameraArmLocation, TEXT("ModuleRelativePath"), TEXT("ActorStruct.h"));
			MetaData->SetValue(NewProp_cameraArmSocketOffset, TEXT("Category"), TEXT("Cover"));
			MetaData->SetValue(NewProp_cameraArmSocketOffset, TEXT("ModuleRelativePath"), TEXT("ActorStruct.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCoverBias_CRC() { return 1219068908U; }
	void AActorStruct::StaticRegisterNativesAActorStruct()
	{
	}
	UClass* Z_Construct_UClass_AActorStruct_NoRegister()
	{
		return AActorStruct::StaticClass();
	}
	UClass* Z_Construct_UClass_AActorStruct()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_ThirdPersonCover();
			OuterClass = AActorStruct::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<AActorStruct> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ActorStruct.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("ActorStruct.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AActorStruct, 773919075);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActorStruct(Z_Construct_UClass_AActorStruct, &AActorStruct::StaticClass, TEXT("/Script/ThirdPersonCover"), TEXT("AActorStruct"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActorStruct);
	void ACoverVolume::StaticRegisterNativesACoverVolume()
	{
	}
	UClass* Z_Construct_UClass_ACoverVolume_NoRegister()
	{
		return ACoverVolume::StaticClass();
	}
	UClass* Z_Construct_UClass_ACoverVolume()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_ThirdPersonCover();
			OuterClass = ACoverVolume::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_CurrentCoverBias = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentCoverBias"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CurrentCoverBias, ACoverVolume), 0x0010000000000005, Z_Construct_UScriptStruct_FCoverBias());
				UProperty* NewProp_CoverCollider = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CoverCollider"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CoverCollider, ACoverVolume), 0x001000000008000d, Z_Construct_UClass_UBoxComponent_NoRegister());
				UProperty* NewProp_CoverMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CoverMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CoverMesh, ACoverVolume), 0x001000000008000d, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<ACoverVolume> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CoverVolume.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("CoverVolume.h"));
				MetaData->SetValue(NewProp_CurrentCoverBias, TEXT("Category"), TEXT("Cover"));
				MetaData->SetValue(NewProp_CurrentCoverBias, TEXT("ModuleRelativePath"), TEXT("CoverVolume.h"));
				MetaData->SetValue(NewProp_CoverCollider, TEXT("Category"), TEXT("Cover"));
				MetaData->SetValue(NewProp_CoverCollider, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CoverCollider, TEXT("ModuleRelativePath"), TEXT("CoverVolume.h"));
				MetaData->SetValue(NewProp_CoverMesh, TEXT("Category"), TEXT("Cover"));
				MetaData->SetValue(NewProp_CoverMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CoverMesh, TEXT("ModuleRelativePath"), TEXT("CoverVolume.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACoverVolume, 551067405);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACoverVolume(Z_Construct_UClass_ACoverVolume, &ACoverVolume::StaticClass, TEXT("/Script/ThirdPersonCover"), TEXT("ACoverVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoverVolume);
	void AThirdPersonCoverCharacter::StaticRegisterNativesAThirdPersonCoverCharacter()
	{
		UClass* Class = AThirdPersonCoverCharacter::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnOverlapBegin", (Native)&AThirdPersonCoverCharacter::execOnOverlapBegin },
			{ "OnOverlapEnd", (Native)&AThirdPersonCoverCharacter::execOnOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 2);
	}
	UFunction* Z_Construct_UFunction_AThirdPersonCoverCharacter_OnOverlapBegin()
	{
		struct ThirdPersonCoverCharacter_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		UObject* Outer=Z_Construct_UClass_AThirdPersonCoverCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnOverlapBegin"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00420401, 65535, sizeof(ThirdPersonCoverCharacter_eventOnOverlapBegin_Parms));
			UProperty* NewProp_SweepResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SweepResult"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SweepResult, ThirdPersonCoverCharacter_eventOnOverlapBegin_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFromSweep, ThirdPersonCoverCharacter_eventOnOverlapBegin_Parms, bool);
			UProperty* NewProp_bFromSweep = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bFromSweep"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFromSweep, ThirdPersonCoverCharacter_eventOnOverlapBegin_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bFromSweep, ThirdPersonCoverCharacter_eventOnOverlapBegin_Parms), sizeof(bool), true);
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, ThirdPersonCoverCharacter_eventOnOverlapBegin_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, ThirdPersonCoverCharacter_eventOnOverlapBegin_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, ThirdPersonCoverCharacter_eventOnOverlapBegin_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedComp, ThirdPersonCoverCharacter_eventOnOverlapBegin_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("ThirdPersonCoverCharacter.h"));
			MetaData->SetValue(NewProp_SweepResult, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OverlappedComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AThirdPersonCoverCharacter_OnOverlapEnd()
	{
		struct ThirdPersonCoverCharacter_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		UObject* Outer=Z_Construct_UClass_AThirdPersonCoverCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnOverlapEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535, sizeof(ThirdPersonCoverCharacter_eventOnOverlapEnd_Parms));
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, ThirdPersonCoverCharacter_eventOnOverlapEnd_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, ThirdPersonCoverCharacter_eventOnOverlapEnd_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, ThirdPersonCoverCharacter_eventOnOverlapEnd_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedComp, ThirdPersonCoverCharacter_eventOnOverlapEnd_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("ThirdPersonCoverCharacter.h"));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OverlappedComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AThirdPersonCoverCharacter_NoRegister()
	{
		return AThirdPersonCoverCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AThirdPersonCoverCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_ThirdPersonCover();
			OuterClass = AThirdPersonCoverCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AThirdPersonCoverCharacter_OnOverlapBegin());
				OuterClass->LinkChild(Z_Construct_UFunction_AThirdPersonCoverCharacter_OnOverlapEnd());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_MyCamera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MyCamera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MyCamera, AThirdPersonCoverCharacter), 0x001000000008000d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_MySpringArm = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MySpringArm"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MySpringArm, AThirdPersonCoverCharacter), 0x001000000008000d, Z_Construct_UClass_USpringArmComponent_NoRegister());
				UProperty* NewProp_blendOutSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("blendOutSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(blendOutSpeed, AThirdPersonCoverCharacter), 0x0010000000000001);
				UProperty* NewProp_blendInSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("blendInSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(blendInSpeed, AThirdPersonCoverCharacter), 0x0010000000000001);
				UProperty* NewProp_zoomSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("zoomSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(zoomSpeed, AThirdPersonCoverCharacter), 0x0010000000000001);
				UProperty* NewProp_zoomedInFOV = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("zoomedInFOV"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(zoomedInFOV, AThirdPersonCoverCharacter), 0x0010000000000001);
				UProperty* NewProp_sprintSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("sprintSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(sprintSpeed, AThirdPersonCoverCharacter), 0x0010000000000001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(wantsToCrouch, AThirdPersonCoverCharacter, bool);
				UProperty* NewProp_wantsToCrouch = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("wantsToCrouch"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(wantsToCrouch, AThirdPersonCoverCharacter), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(wantsToCrouch, AThirdPersonCoverCharacter), sizeof(bool), true);
				UProperty* NewProp_sprintModifier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("sprintModifier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(sprintModifier, AThirdPersonCoverCharacter), 0x0010000000000000);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(prone, AThirdPersonCoverCharacter, bool);
				UProperty* NewProp_prone = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("prone"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(prone, AThirdPersonCoverCharacter), 0x0010000000000000, CPP_BOOL_PROPERTY_BITMASK(prone, AThirdPersonCoverCharacter), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(zoomIn, AThirdPersonCoverCharacter, bool);
				UProperty* NewProp_zoomIn = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("zoomIn"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(zoomIn, AThirdPersonCoverCharacter), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(zoomIn, AThirdPersonCoverCharacter), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(inCrouchCover, AThirdPersonCoverCharacter, bool);
				UProperty* NewProp_inCrouchCover = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("inCrouchCover"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(inCrouchCover, AThirdPersonCoverCharacter), 0x0010000000000014, CPP_BOOL_PROPERTY_BITMASK(inCrouchCover, AThirdPersonCoverCharacter), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(inCover, AThirdPersonCoverCharacter, bool);
				UProperty* NewProp_inCover = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("inCover"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(inCover, AThirdPersonCoverCharacter), 0x0010000000000014, CPP_BOOL_PROPERTY_BITMASK(inCover, AThirdPersonCoverCharacter), sizeof(bool), true);
				UProperty* NewProp_EnteredCoverBias = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EnteredCoverBias"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(EnteredCoverBias, AThirdPersonCoverCharacter), 0x0010000000000000, Z_Construct_UScriptStruct_FCoverBias());
				UProperty* NewProp_baseCameraFOV = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("baseCameraFOV"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(baseCameraFOV, AThirdPersonCoverCharacter), 0x0010000000000001);
				UProperty* NewProp_baseCameraArmLength = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("baseCameraArmLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(baseCameraArmLength, AThirdPersonCoverCharacter), 0x0010000000000001);
				UProperty* NewProp_baseCameraRotation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("baseCameraRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(baseCameraRotation, AThirdPersonCoverCharacter), 0x0010000000000001, Z_Construct_UScriptStruct_FRotator());
				UProperty* NewProp_baseCameraOffset = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("baseCameraOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(baseCameraOffset, AThirdPersonCoverCharacter), 0x0010000000000001, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_baseCameraArmLocation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("baseCameraArmLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(baseCameraArmLocation, AThirdPersonCoverCharacter), 0x0010000000000001, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_baseCameraArmSocketOffset = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("baseCameraArmSocketOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(baseCameraArmSocketOffset, AThirdPersonCoverCharacter), 0x0010000000000001, Z_Construct_UScriptStruct_FVector());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AThirdPersonCoverCharacter_OnOverlapBegin(), "OnOverlapBegin"); // 966656467
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AThirdPersonCoverCharacter_OnOverlapEnd(), "OnOverlapEnd"); // 981304263
				static TCppClassTypeInfo<TCppClassTypeTraits<AThirdPersonCoverCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ThirdPersonCoverCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("ThirdPersonCoverCharacter.h"));
				MetaData->SetValue(NewProp_MyCamera, TEXT("Category"), TEXT("Player"));
				MetaData->SetValue(NewProp_MyCamera, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MyCamera, TEXT("ModuleRelativePath"), TEXT("ThirdPersonCoverCharacter.h"));
				MetaData->SetValue(NewProp_MySpringArm, TEXT("Category"), TEXT("Player"));
				MetaData->SetValue(NewProp_MySpringArm, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MySpringArm, TEXT("ModuleRelativePath"), TEXT("ThirdPersonCoverCharacter.h"));
				MetaData->SetValue(NewProp_blendOutSpeed, TEXT("Category"), TEXT("Player"));
				MetaData->SetValue(NewProp_blendOutSpeed, TEXT("ClampMax"), TEXT("10.0"));
				MetaData->SetValue(NewProp_blendOutSpeed, TEXT("ClampMin"), TEXT("1.0"));
				MetaData->SetValue(NewProp_blendOutSpeed, TEXT("ModuleRelativePath"), TEXT("ThirdPersonCoverCharacter.h"));
				MetaData->SetValue(NewProp_blendOutSpeed, TEXT("UIMax"), TEXT("10.0"));
				MetaData->SetValue(NewProp_blendOutSpeed, TEXT("UIMin"), TEXT("1.0"));
				MetaData->SetValue(NewProp_blendInSpeed, TEXT("Category"), TEXT("Player"));
				MetaData->SetValue(NewProp_blendInSpeed, TEXT("ClampMax"), TEXT("10.0"));
				MetaData->SetValue(NewProp_blendInSpeed, TEXT("ClampMin"), TEXT("1.0"));
				MetaData->SetValue(NewProp_blendInSpeed, TEXT("ModuleRelativePath"), TEXT("ThirdPersonCoverCharacter.h"));
				MetaData->SetValue(NewProp_blendInSpeed, TEXT("UIMax"), TEXT("10.0"));
				MetaData->SetValue(NewProp_blendInSpeed, TEXT("UIMin"), TEXT("1.0"));
				MetaData->SetValue(NewProp_zoomSpeed, TEXT("Category"), TEXT("Player"));
				MetaData->SetValue(NewProp_zoomSpeed, TEXT("ClampMax"), TEXT("10.0"));
				MetaData->SetValue(NewProp_zoomSpeed, TEXT("ClampMin"), TEXT("1.0"));
				MetaData->SetValue(NewProp_zoomSpeed, TEXT("ModuleRelativePath"), TEXT("ThirdPersonCoverCharacter.h"));
				MetaData->SetValue(NewProp_zoomSpeed, TEXT("UIMax"), TEXT("10.0"));
				MetaData->SetValue(NewProp_zoomSpeed, TEXT("UIMin"), TEXT("1.0"));
				MetaData->SetValue(NewProp_zoomedInFOV, TEXT("Category"), TEXT("Player"));
				MetaData->SetValue(NewProp_zoomedInFOV, TEXT("ClampMax"), TEXT("120.0"));
				MetaData->SetValue(NewProp_zoomedInFOV, TEXT("ClampMin"), TEXT("45.0"));
				MetaData->SetValue(NewProp_zoomedInFOV, TEXT("ModuleRelativePath"), TEXT("ThirdPersonCoverCharacter.h"));
				MetaData->SetValue(NewProp_zoomedInFOV, TEXT("UIMax"), TEXT("120.0"));
				MetaData->SetValue(NewProp_zoomedInFOV, TEXT("UIMin"), TEXT("45.0"));
				MetaData->SetValue(NewProp_sprintSpeed, TEXT("Category"), TEXT("Player"));
				MetaData->SetValue(NewProp_sprintSpeed, TEXT("ClampMax"), TEXT("10.0"));
				MetaData->SetValue(NewProp_sprintSpeed, TEXT("ClampMin"), TEXT("1.0"));
				MetaData->SetValue(NewProp_sprintSpeed, TEXT("ModuleRelativePath"), TEXT("ThirdPersonCoverCharacter.h"));
				MetaData->SetValue(NewProp_sprintSpeed, TEXT("UIMax"), TEXT("10.0"));
				MetaData->SetValue(NewProp_sprintSpeed, TEXT("UIMin"), TEXT("1.0"));
				MetaData->SetValue(NewProp_wantsToCrouch, TEXT("Category"), TEXT("ThirdPersonCoverCharacter"));
				MetaData->SetValue(NewProp_wantsToCrouch, TEXT("ModuleRelativePath"), TEXT("ThirdPersonCoverCharacter.h"));
				MetaData->SetValue(NewProp_sprintModifier, TEXT("ModuleRelativePath"), TEXT("ThirdPersonCoverCharacter.h"));
				MetaData->SetValue(NewProp_prone, TEXT("ModuleRelativePath"), TEXT("ThirdPersonCoverCharacter.h"));
				MetaData->SetValue(NewProp_zoomIn, TEXT("Category"), TEXT("Cover"));
				MetaData->SetValue(NewProp_zoomIn, TEXT("ModuleRelativePath"), TEXT("ThirdPersonCoverCharacter.h"));
				MetaData->SetValue(NewProp_inCrouchCover, TEXT("Category"), TEXT("ThirdPersonCoverCharacter"));
				MetaData->SetValue(NewProp_inCrouchCover, TEXT("ModuleRelativePath"), TEXT("ThirdPersonCoverCharacter.h"));
				MetaData->SetValue(NewProp_inCover, TEXT("Category"), TEXT("ThirdPersonCoverCharacter"));
				MetaData->SetValue(NewProp_inCover, TEXT("ModuleRelativePath"), TEXT("ThirdPersonCoverCharacter.h"));
				MetaData->SetValue(NewProp_EnteredCoverBias, TEXT("ModuleRelativePath"), TEXT("ThirdPersonCoverCharacter.h"));
				MetaData->SetValue(NewProp_baseCameraFOV, TEXT("Category"), TEXT("Cover"));
				MetaData->SetValue(NewProp_baseCameraFOV, TEXT("ModuleRelativePath"), TEXT("ThirdPersonCoverCharacter.h"));
				MetaData->SetValue(NewProp_baseCameraArmLength, TEXT("Category"), TEXT("Cover"));
				MetaData->SetValue(NewProp_baseCameraArmLength, TEXT("ModuleRelativePath"), TEXT("ThirdPersonCoverCharacter.h"));
				MetaData->SetValue(NewProp_baseCameraRotation, TEXT("Category"), TEXT("Cover"));
				MetaData->SetValue(NewProp_baseCameraRotation, TEXT("ModuleRelativePath"), TEXT("ThirdPersonCoverCharacter.h"));
				MetaData->SetValue(NewProp_baseCameraOffset, TEXT("Category"), TEXT("Cover"));
				MetaData->SetValue(NewProp_baseCameraOffset, TEXT("ModuleRelativePath"), TEXT("ThirdPersonCoverCharacter.h"));
				MetaData->SetValue(NewProp_baseCameraArmLocation, TEXT("Category"), TEXT("Cover"));
				MetaData->SetValue(NewProp_baseCameraArmLocation, TEXT("ModuleRelativePath"), TEXT("ThirdPersonCoverCharacter.h"));
				MetaData->SetValue(NewProp_baseCameraArmSocketOffset, TEXT("Category"), TEXT("Cover"));
				MetaData->SetValue(NewProp_baseCameraArmSocketOffset, TEXT("ModuleRelativePath"), TEXT("ThirdPersonCoverCharacter.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AThirdPersonCoverCharacter, 2965394266);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AThirdPersonCoverCharacter(Z_Construct_UClass_AThirdPersonCoverCharacter, &AThirdPersonCoverCharacter::StaticClass, TEXT("/Script/ThirdPersonCover"), TEXT("AThirdPersonCoverCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThirdPersonCoverCharacter);
	void AThirdPersonCoverGameModeBase::StaticRegisterNativesAThirdPersonCoverGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AThirdPersonCoverGameModeBase_NoRegister()
	{
		return AThirdPersonCoverGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AThirdPersonCoverGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_ThirdPersonCover();
			OuterClass = AThirdPersonCoverGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				static TCppClassTypeInfo<TCppClassTypeTraits<AThirdPersonCoverGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ThirdPersonCoverGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("ThirdPersonCoverGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AThirdPersonCoverGameModeBase, 2281770416);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AThirdPersonCoverGameModeBase(Z_Construct_UClass_AThirdPersonCoverGameModeBase, &AThirdPersonCoverGameModeBase::StaticClass, TEXT("/Script/ThirdPersonCover"), TEXT("AThirdPersonCoverGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThirdPersonCoverGameModeBase);
	UPackage* Z_Construct_UPackage__Script_ThirdPersonCover()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/ThirdPersonCover")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x1ECF8D3B;
			Guid.B = 0x20A4F1A0;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
