// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorStruct.generated.h"

USTRUCT()
struct FCoverBias
{
	GENERATED_BODY();

public:

	UPROPERTY(EditAnywhere, Category = "Cover")
	FVector cameraArmSocketOffset;

	UPROPERTY(EditAnywhere, Category = "Cover")
	FVector cameraArmLocation;

	UPROPERTY(EditAnywhere, Category = "Cover")
	FVector cameraLocation;

	UPROPERTY(EditAnywhere, Category = "Cover")
	FRotator cameraRotation;

	UPROPERTY(EditAnywhere, Category = "Cover")
	float cameraArmLength;

	UPROPERTY(EditAnywhere, Category = "Cover")
	float cameraFOV;

	UPROPERTY(EditAnywhere, Category = "Cover")
	bool crouchCover;

	UPROPERTY(EditAnywhere, Category = "Cover")
	FVector peekAmount;

	FCoverBias()
	{
		cameraArmSocketOffset = FVector(0.0f, 0.0f, 0.0f);
		cameraArmLocation = FVector(0.0f, 0.0f, 0.0f);

		cameraLocation = FVector(0.0f, 0.0f, 0.0f);
		cameraRotation = FRotator(0.0f, 0.0f, 0.0f);
		
		cameraArmLength = 0.0f;
		cameraFOV = 90.0f;
		crouchCover = false;

		peekAmount = FVector(0.0f, 0.0f, 0.0f);
	}
};


UCLASS()
class THIRDPERSONCOVER_API AActorStruct : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActorStruct();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
