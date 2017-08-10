// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ConstructorHelpers.h"
#include "ActorStruct.h"

#include "Engine/StaticMesh.h"

#include "GameFramework/Actor.h"

#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"

#include "CoverVolume.generated.h"

UCLASS()
class THIRDPERSONCOVER_API ACoverVolume : public AActor
{
	GENERATED_BODY()
	
public:	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cover")
	UStaticMeshComponent* CoverMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cover")
	UBoxComponent* CoverCollider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cover")
	FCoverBias CurrentCoverBias; 

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Sets default values for this actor's properties
	ACoverVolume();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
};
