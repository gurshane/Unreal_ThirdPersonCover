// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "ActorStruct.h"
#include "CoverVolume.h"

#include "GameFramework/PlayerController.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"

#include "ThirdPersonCoverCharacter.generated.h"


UCLASS()
class THIRDPERSONCOVER_API AThirdPersonCoverCharacter : public ACharacter
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Category = "Cover")
	FVector baseCameraArmSocketOffset;

	UPROPERTY(EditAnywhere, Category = "Cover")
	FVector baseCameraArmLocation;

	UPROPERTY(EditAnywhere, Category = "Cover")
	FVector baseCameraOffset;

	UPROPERTY(EditAnywhere, Category = "Cover")
	FRotator baseCameraRotation;

	UPROPERTY(EditAnywhere, Category = "Cover")
	float baseCameraArmLength;

	UPROPERTY(EditAnywhere, Category = "Cover")
	float baseCameraFOV;

	UPROPERTY()
	FCoverBias EnteredCoverBias;

	UPROPERTY(BlueprintReadOnly)
	bool inCover;

	UPROPERTY(BlueprintReadOnly)
	bool inCrouchCover;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cover")
	bool zoomIn;

	UPROPERTY()
	bool prone;

	UPROPERTY()
	float sprintModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool wantsToCrouch;

	UPROPERTY(EditAnywhere, Category = "Player", meta = (ClampMin = "1.0", ClampMax = "10.0", UIMin = "1.0", UIMax = "10.0"))
	float sprintSpeed;

	UPROPERTY(EditAnywhere, Category = "Player", meta = (ClampMin = "45.0", ClampMax = "120.0", UIMin = "45.0", UIMax = "120.0"))
	float zoomedInFOV;

	UPROPERTY(EditAnywhere, Category = "Player", meta = (ClampMin = "1.0", ClampMax = "10.0", UIMin = "1.0", UIMax = "10.0"))
	float zoomSpeed;

	UPROPERTY(EditAnywhere, Category = "Player", meta = (ClampMin = "1.0", ClampMax = "10.0", UIMin = "1.0", UIMax = "10.0"))
	float blendInSpeed;

	UPROPERTY(EditAnywhere, Category = "Player", meta = (ClampMin = "1.0", ClampMax = "10.0", UIMin = "1.0", UIMax = "10.0"))
	float blendOutSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
	USpringArmComponent* MySpringArm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
	UCameraComponent* MyCamera;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Sets default values for this character's properties
	AThirdPersonCoverCharacter();

	void JumpPressed();

	void JumpReleased();

	void CrouchPressed();

	void CrouchReleased();

	void Prone();

	void StopProne();

	void Sprint();

	void StopSprint();

	void MoveForward(float value);

	void MoveRight(float value);

	void Turn(float value);

	void Look(float value);

	void AddControllerPitchInput(float value) override;

	void AddControllerYawInput(float value) override;

	void ZoomIn();

	void ZoomOut();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
	void ReceiveBias(FCoverBias& InBias);

	void RemoveBias();

	void BlendBias(FCoverBias& InBias, float DeltaTime);

	void BlendRemoveBias(float DeltaTime);
};
