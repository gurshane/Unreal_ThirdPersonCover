// Fill out your copyright notice in the Description page of Project Settings.

#include "CoverVolume.h"


// Sets default values
ACoverVolume::ACoverVolume()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CoverCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider"));
	RootComponent = CoverCollider;

	CoverMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	CoverMesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeVisual(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	if (CubeVisual.Succeeded())
	{
		CoverMesh->SetStaticMesh(CubeVisual.Object);
	}

}

// Called when the game starts or when spawned
void ACoverVolume::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACoverVolume::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

