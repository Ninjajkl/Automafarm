// Fill out your copyright notice in the Description page of Project Settings.

#include "AutomafarmCharacter.h"
#include "Animation/AnimInstance.h"
#include "AutomafarmProjectile.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "PivotPaper.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "FarmGameStateBase.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Math/TransformNonVectorized.h"
#include "Math/UnrealMathUtility.h"
#include "Misc/CoreDelegates.h"
#include "Structs.h"
#include "Engine/World.h"

#define PlaceTrace ECC_GameTraceChannel1


//////////////////////////////////////////////////////////////////////////
// AAutomafarmCharacter

AFarmGameStateBase* myGameState;

AAutomafarmCharacter::AAutomafarmCharacter()
{
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

	myGameState = GetWorld() != NULL ? GetWorld()->GetGameState<AFarmGameStateBase>() : NULL;
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
	GetCharacterMovement()->JumpZVelocity = JumpHeight;
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
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, HitResult.Component->ComponentHasTag("BlockMesh") ? "Yes" : "No");
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, HitResult.Component->GetClass()->GetName());
		/*
		if (HitResult.Component->ComponentHasTag("BlockMesh")) 
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, Cast<UInstancedStaticMeshComponent>(HitResult.Component)->GetMaterial(0)->GetName());
		}
		*/
		FVector SelectedTile = AbsoluteToGrid(HitResult.ImpactPoint+HitResult.ImpactNormal);
		
		if(ValidPlacement(PlaceableClass, SelectedTile))
		{
			PlaceHeldItem(PlaceableClass, SelectedTile);
		}
	}
}

TArray<FVector> AAutomafarmCharacter::RotateByYaw(TArray<FVector> Positions, FVector ForwardVector)
{
	// Get the absolute values of X and Y components
	float AbsX = FMath::Abs(ForwardVector.X);
	float AbsY = FMath::Abs(ForwardVector.Y);

	FVector AbsRotationAngle = AbsX > AbsY ? FVector(0, FMath::Sign(ForwardVector.X), 0) : FVector(-FMath::Sign(ForwardVector.Y), 0, 0);

	// Calculate the Yaw angle
	float YawAngle = AbsRotationAngle.Rotation().Yaw;

	// Create a rotation quaternion based on the yaw angle
	FQuat RotationQuat(FVector::UpVector, FMath::DegreesToRadians(YawAngle));

	TArray<FVector> rotatedPositions = TArray<FVector>();

	for(FVector position : Positions)
	{
		rotatedPositions.Add(RoundVector(RotationQuat.RotateVector(position)));
	}

	return rotatedPositions;
}

FVector AAutomafarmCharacter::AbsoluteToGrid(FVector aCoords) 
{
	return FVector(floor(aCoords[0]/TileLength), floor(aCoords[1] / TileLength), floor(aCoords[2] / TileLength));
}

FVector AAutomafarmCharacter::RoundVector(const FVector Vector)
{
	return FVector(FMath::RoundToInt(Vector.X), FMath::RoundToInt(Vector.Y), FMath::RoundToInt(Vector.Z));
}

bool AAutomafarmCharacter::ValidPlacement(TSubclassOf<UPlaceableObject> placeableClass, FVector TileKey)
{
	TArray<FVector> TilesToCheck = RotateByYaw(Cast<UPlaceableObject>(placeableClass->GetDefaultObject())->TilesToFill, GetFirstPersonCameraComponent()->GetForwardVector());
	for (int i = 0; i < TilesToCheck.Num(); i++)
	{
		if (myGameState->LevelMap.Contains(TileKey + TilesToCheck[i]) ||
			GetWorld()->OverlapAnyTestByChannel((TileKey + TilesToCheck[i]) * TileLength + FVector(50, 50, 50), FQuat(), PlaceTrace, FCollisionShape::MakeBox(FVector(49.9999f))))
		{
			return false;
		}
	}
	return true;
}

void AAutomafarmCharacter::PlaceHeldItem(TSubclassOf<UPlaceableObject> placeableClass, FVector TileKey)
{
	UPlaceableObject* placeableObject = Cast<UPlaceableObject>(placeableClass->GetDefaultObject());
	FTileHolder newCoreTile;
	newCoreTile.TileType = placeableObject->TileType;
	TArray<FVector> TilesToFill = RotateByYaw(placeableObject->TilesToFill, GetFirstPersonCameraComponent()->GetForwardVector());
	if (newCoreTile.TileType == ETileType::PIVOTPAPER) {
		myGameState->AddPivotPaperComponent(placeableClass, TileKey * TileLength + FVector(50, 50, 150), GetFirstPersonCameraComponent()->GetComponentLocation());
	}
	else if (newCoreTile.TileType == ETileType::BLOCK)
	{
		myGameState->InitializeInstanceableObject(placeableClass);
	}
	while (!TilesToFill.IsEmpty())
	{
		FVector newTileKey = TileKey + TilesToFill.Pop();
		if (newCoreTile.TileType == ETileType::BLOCK) {
			Cast<UBaseBlock>(myGameState->InstancedObjectMap[placeableClass])->AddBlock(newTileKey * TileLength + FVector(50, 50, 50));
		}
		placeableObject->FilledTiles.Add(newTileKey);
		myGameState->LevelMap.Add(newTileKey, newCoreTile);
	}
}