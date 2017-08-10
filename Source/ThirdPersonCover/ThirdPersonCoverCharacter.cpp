// Fill out your copyright notice in the Description page of Project Settings.

#include "ThirdPersonCoverCharacter.h"


// Sets default values
AThirdPersonCoverCharacter::AThirdPersonCoverCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MySpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	MySpringArm->SetupAttachment(RootComponent);
	MySpringArm->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f));

	MyCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	MyCamera->SetupAttachment(MySpringArm, USpringArmComponent::SocketName);
	MyCamera->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(0.0f, 0.0f, 0.0f));

	zoomIn = false;
	sprintModifier = 1.0f;
}

// Called when the game starts or when spawned
void AThirdPersonCoverCharacter::BeginPlay()
{
	Super::BeginPlay();

	baseCameraArmSocketOffset = MySpringArm->SocketOffset;
	baseCameraArmLocation = MySpringArm->RelativeLocation;

	baseCameraOffset = MyCamera->RelativeLocation;
	baseCameraRotation = MyCamera->RelativeRotation;

	baseCameraArmLength = MySpringArm->TargetArmLength;
	baseCameraFOV = MyCamera->FieldOfView;

	UCapsuleComponent* MyCollider = GetCapsuleComponent();

	if (MyCollider && MyCollider != nullptr)
	{
		FScriptDelegate BeginOverlap;
		BeginOverlap.BindUFunction(this, "OnOverlapBegin");

		FScriptDelegate EndOverlap;
		EndOverlap.BindUFunction(this, "OnOverlapEnd");

		MyCollider->OnComponentBeginOverlap.Add(BeginOverlap);
		MyCollider->OnComponentEndOverlap.Add(EndOverlap);
	}
}

// Called every frame
void AThirdPersonCoverCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Zoom in if zoom in pressed
	if (!inCover && zoomIn)
	{
		MyCamera->FieldOfView = FMath::Lerp(MyCamera->FieldOfView, zoomedInFOV, zoomSpeed * DeltaTime);
	}
	else
	{
		if (MyCamera->FieldOfView != 90.0f)
		{
			MyCamera->FieldOfView = FMath::Lerp(MyCamera->FieldOfView, 90.0f, zoomSpeed * DeltaTime);
		}

		//if (inCover && zoomIn)
		//{
		//	//MySpringArm->RelativeLocation = FMath::Lerp(MySpringArm->RelativeLocation + 
		//}
	}

	//If moving, change FOV of camera
	FVector direction;
	float length;

	GetVelocity().ToDirectionAndLength(direction, length);

	if (!inCover && length != 0.0f && MyCamera->FieldOfView != 120.0f)
	{
		MyCamera->FieldOfView = FMath::Lerp(MyCamera->FieldOfView, 120.0f, 3.0f * DeltaTime);
	}
	else
	{
		if (MyCamera->FieldOfView != 90.0f)
		{
			MyCamera->FieldOfView = FMath::Lerp(MyCamera->FieldOfView, 90.0f, 3.0f * DeltaTime);
		}
	}

	//Is player taking cover
	if (inCover)
	{
		//Do we still need to blend to the required position and rotation
		if (MyCamera->FieldOfView != baseCameraFOV)
		{
			BlendBias(EnteredCoverBias, DeltaTime);
		}
	}
	else
	{
		if (MyCamera->FieldOfView != baseCameraFOV)
		{
			BlendRemoveBias(DeltaTime);
		}
	}

}

// Called to bind functionality to input
void AThirdPersonCoverCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AThirdPersonCoverCharacter::JumpPressed);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AThirdPersonCoverCharacter::JumpReleased);

	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &AThirdPersonCoverCharacter::CrouchPressed);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &AThirdPersonCoverCharacter::CrouchReleased);

	PlayerInputComponent->BindAction("Prone", IE_Pressed, this, &AThirdPersonCoverCharacter::Prone);
	PlayerInputComponent->BindAction("Prone", IE_Released, this, &AThirdPersonCoverCharacter::StopProne);

	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AThirdPersonCoverCharacter::Sprint);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AThirdPersonCoverCharacter::StopSprint);

	PlayerInputComponent->BindAction("ZoomIn", IE_Pressed, this, &AThirdPersonCoverCharacter::ZoomIn);
	PlayerInputComponent->BindAction("ZoomIn", IE_Released, this, &AThirdPersonCoverCharacter::ZoomOut);

	
	PlayerInputComponent->BindAxis("MoveForward", this, &AThirdPersonCoverCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AThirdPersonCoverCharacter::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &AThirdPersonCoverCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Look", this, &AThirdPersonCoverCharacter::AddControllerPitchInput);
}

void AThirdPersonCoverCharacter::JumpPressed()
{
	bPressedJump = true;
}

void AThirdPersonCoverCharacter::JumpReleased()
{
	bPressedJump = false;
}

void AThirdPersonCoverCharacter::CrouchPressed()
{
	wantsToCrouch = true;
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, "Crouching");
}

void AThirdPersonCoverCharacter::CrouchReleased()
{
	wantsToCrouch = false;
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, "Not Crouching");
}

void AThirdPersonCoverCharacter::Prone()
{
	prone = true;
}

void AThirdPersonCoverCharacter::StopProne()
{
	prone = false;
}

void AThirdPersonCoverCharacter::Sprint()
{
	sprintModifier = sprintSpeed;
}

void AThirdPersonCoverCharacter::StopSprint()
{
	sprintModifier = 1.0f;
}

void AThirdPersonCoverCharacter::MoveForward(float value)
{
	//GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Red, FString::SanitizeFloat(value));
	FRotator CurrentRotation = Controller->GetControlRotation();

	if (GetCharacterMovement()->IsFalling() || GetCharacterMovement()->IsMovingOnGround())
	{
		CurrentRotation.Pitch = 0.0f;
	}

	// add movement in that direction
	const FVector Direction = FRotationMatrix(CurrentRotation).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction , value * sprintModifier);
}

void AThirdPersonCoverCharacter::MoveRight(float value)
{	
	FRotator CurrentRotation = Controller->GetControlRotation();

	if (GetCharacterMovement()->IsFalling() || GetCharacterMovement()->IsMovingOnGround())
	{
		CurrentRotation.Roll = 0.0f;
	}

	// add movement in that direction
	const FVector Direction = FRotationMatrix(CurrentRotation).GetScaledAxis(EAxis::Y);
	AddMovementInput(Direction, value * sprintModifier);
	
}

void AThirdPersonCoverCharacter::AddControllerPitchInput(float value)
{
	if (!inCover)
	{
		Super::AddControllerPitchInput(value);
	}
}

void AThirdPersonCoverCharacter::AddControllerYawInput(float value)
{
	if (!inCover)
	{
		Super::AddControllerYawInput(value);
	}
}

void AThirdPersonCoverCharacter::ZoomIn()
{
	zoomIn = true;
}

void AThirdPersonCoverCharacter::ZoomOut()
{
	zoomIn = false;
}

void AThirdPersonCoverCharacter::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->IsA(ACoverVolume::StaticClass()))
	{
		ACoverVolume* CoverVolume = (ACoverVolume*)OtherActor;

		if (CoverVolume)
		{
			EnteredCoverBias = CoverVolume->CurrentCoverBias;
			inCover = true;
			inCrouchCover = CoverVolume->CurrentCoverBias.crouchCover;
		}
	}
}

void AThirdPersonCoverCharacter::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor->IsA(ACoverVolume::StaticClass()))
	{
		ACoverVolume* CoverVolume = (ACoverVolume*)OtherActor;

		if (CoverVolume)
		{
			inCover = false;
			inCrouchCover = false;
		}
	}
}

//Snap to new bias
void AThirdPersonCoverCharacter::ReceiveBias(FCoverBias& InBias)
{
	MySpringArm->SocketOffset = InBias.cameraArmSocketOffset;
	MySpringArm->RelativeLocation = InBias.cameraArmLocation;

	MyCamera->RelativeLocation = InBias.cameraLocation;
	MyCamera->RelativeRotation = InBias.cameraRotation;

	MySpringArm->TargetArmLength = InBias.cameraArmLength;
	MyCamera->FieldOfView = InBias.cameraFOV;
}

//Snap to original position
void AThirdPersonCoverCharacter::RemoveBias()
{
	MySpringArm->SocketOffset = baseCameraArmSocketOffset;
	MySpringArm->RelativeLocation = baseCameraArmLocation;

	MyCamera->RelativeLocation = baseCameraOffset;
	MyCamera->RelativeRotation = baseCameraRotation;

	MySpringArm->TargetArmLength = baseCameraArmLength;
	MyCamera->FieldOfView = baseCameraFOV;
}

//Blend to new bias
void AThirdPersonCoverCharacter::BlendBias(FCoverBias& InBias, float DeltaTime)
{
	MySpringArm->SocketOffset = FMath::Lerp(MySpringArm->SocketOffset, InBias.cameraArmSocketOffset, blendInSpeed * DeltaTime);

	MyCamera->RelativeRotation = FMath::Lerp(MyCamera->RelativeRotation, InBias.cameraRotation, blendInSpeed * DeltaTime);

	MySpringArm->TargetArmLength = FMath::Lerp(MySpringArm->TargetArmLength, InBias.cameraArmLength, blendInSpeed * DeltaTime);

	MyCamera->FieldOfView = FMath::Lerp(MyCamera->FieldOfView, InBias.cameraFOV, blendInSpeed * DeltaTime);
}

//Blend to old position
void AThirdPersonCoverCharacter::BlendRemoveBias(float DeltaTime)
{
	MySpringArm->SocketOffset = FMath::Lerp(MySpringArm->SocketOffset, baseCameraArmSocketOffset, blendOutSpeed * DeltaTime);

	MyCamera->RelativeRotation = FMath::Lerp(MyCamera->RelativeRotation, baseCameraRotation, blendOutSpeed * DeltaTime);

	MySpringArm->TargetArmLength = FMath::Lerp(MySpringArm->TargetArmLength, baseCameraArmLength, blendOutSpeed * DeltaTime);

	MyCamera->FieldOfView = FMath::Lerp(MyCamera->FieldOfView, baseCameraFOV, blendOutSpeed * DeltaTime);
}