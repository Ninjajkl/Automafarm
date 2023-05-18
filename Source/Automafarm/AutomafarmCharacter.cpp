// Fill out your copyright notice in the Description page of Project Settings.

#include "Animation/AnimInstance.h"
#include "AutomafarmCharacter.h"
#include "AutomafarmProjectile.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Crop.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Kismet/KismetMathLibrary.h"
#include "Math/TransformNonVectorized.h"
#include "Math/UnrealMathUtility.h"
#include "Misc/CoreDelegates.h"
#include "Engine/World.h"

#define PlaceTrace ECC_GameTraceChannel1


//////////////////////////////////////////////////////////////////////////
// AAutomafarmCharacter

AAutomafarmCharacter::AAutomafarmCharacter()
{
	// Character doesnt have a rifle at start
	bHasRifle = false;
	
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);
		
	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-10.f, 0.f, 60.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	//Mesh1P->SetRelativeRotation(FRotator(0.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-30.f, 0.f, -150.f));

	CropClass = ACrop::StaticClass();
}

void AAutomafarmCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

}

//////////////////////////////////////////////////////////////////////////// Input

void AAutomafarmCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		//Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		//Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AAutomafarmCharacter::Move);

		//Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AAutomafarmCharacter::Look);

		//Interacting
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Triggered, this, &AAutomafarmCharacter::Interact);
	}
}


void AAutomafarmCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add movement 
		AddMovementInput(GetActorForwardVector(), MovementVector.Y);
		AddMovementInput(GetActorRightVector(), MovementVector.X);
		OnPlayerMoved.Broadcast(GetFirstPersonCameraComponent()->GetComponentLocation());
	}
}

void AAutomafarmCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
		OnPlayerMoved.Broadcast(GetFirstPersonCameraComponent()->GetComponentLocation());
	}
}

void AAutomafarmCharacter::Interact(const FInputActionValue& Value)
{
	UCameraComponent* Camera = GetFirstPersonCameraComponent();
	FVector WLocation = Camera->GetComponentLocation();
	FVector ForwardVector = Camera->GetForwardVector();
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);
	FHitResult HitResult;
	bool gotHit = GetWorld()->LineTraceSingleByChannel(HitResult, WLocation, ForwardVector * 1000 + WLocation, ECollisionChannel::PlaceTrace,Params);
	if (gotHit) 
	{	
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, HitResult.ImpactPoint.ToString());
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, HitResult.Component->GetReadableName());
		FVector SelectedTileKey = AbsoluteToGrid(HitResult.ImpactPoint+HitResult.ImpactNormal);
		if(!ObjectGrid.Contains(SelectedTileKey))
		{
			ACrop* newCrop = GetWorld()->SpawnActor<ACrop>(CropClass, FTransform(SelectedTileKey*TileLength));
			newCrop->SetPPCWRotation(FRotator(0,UKismetMathLibrary::FindLookAtRotation(newCrop->GetPPCWLocation(), WLocation).Yaw-90,0));
			ObjectGrid.Add(SelectedTileKey, newCrop);
		}
	}
}

FVector AAutomafarmCharacter::AbsoluteToGrid(FVector aCoords) {
	return FVector(floor(aCoords[0]/TileLength), floor(aCoords[1] / TileLength), floor(aCoords[2] / TileLength));
}

void AAutomafarmCharacter::SetHasRifle(bool bNewHasRifle)
{
	bHasRifle = bNewHasRifle;
}

bool AAutomafarmCharacter::GetHasRifle()
{
	return bHasRifle;
}