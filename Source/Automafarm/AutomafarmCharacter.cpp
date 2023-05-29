// Fill out your copyright notice in the Description page of Project Settings.

#include "AutomafarmCharacter.h"
#include "Animation/AnimInstance.h"
#include "AutomafarmProjectile.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Crop.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "FarmGameStateBase.h"
#include "Kismet/KismetMathLibrary.h"
#include "Math/TransformNonVectorized.h"
#include "Math/UnrealMathUtility.h"
#include "Misc/CoreDelegates.h"
#include "TileHolder.h"
#include "Engine/World.h"

#define PlaceTrace ECC_GameTraceChannel1


//////////////////////////////////////////////////////////////////////////
// AAutomafarmCharacter

AFarmGameStateBase* myGameState;

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
		if (HitResult.Component->ComponentHasTag("BlockMesh")) 
		{
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, Cast<UInstancedStaticMeshComponent>(HitResult.Component)->GetMaterial(0)->GetName());
		}
		FVector SelectedTileKey = AbsoluteToGrid(HitResult.ImpactPoint+HitResult.ImpactNormal);
		//if(!myGameState->LevelMap.Contains(SelectedTileKey))
		if(ValidPlacement(CropClass, SelectedTileKey))
		{
			ACrop* newCrop = GetWorld()->SpawnActor<ACrop>(CropClass, FTransform(SelectedTileKey*TileLength));
			newCrop->SetPPCWRotation(FRotator(0,UKismetMathLibrary::FindLookAtRotation(newCrop->GetPPCWLocation(), WLocation).Yaw-90,0));
			AddToLevelMap(newCrop, SelectedTileKey);
		}
	}
}

FVector AAutomafarmCharacter::AbsoluteToGrid(FVector aCoords) {
	return FVector(floor(aCoords[0]/TileLength), floor(aCoords[1] / TileLength), floor(aCoords[2] / TileLength));
}

bool AAutomafarmCharacter::ValidPlacement(UClass* PlacedObjectClass, FVector TileKey)
{
	ACrop* CropClassCDO = Cast<ACrop>(PlacedObjectClass->GetDefaultObject());
	for(int i = 0; i < CropClassCDO->TilesToFill.Num(); i++)
	{
		if (myGameState->LevelMap.Contains(TileKey + CropClassCDO->TilesToFill[i]))
		{
			return false;
		}
	}
	return true;
}

void AAutomafarmCharacter::AddToLevelMap(ACrop* newCrop, FVector TileKey) 
{
	FTileHolder newCoreTile;
	newCoreTile.CorePivotPaper = Cast<APivotPaper>(newCrop);
	newCoreTile.TileType = ETileType::PIVOTPAPER;
	while (!newCoreTile.CorePivotPaper->TilesToFill.IsEmpty()) 
	{
		FVector newTileKey = TileKey + newCoreTile.CorePivotPaper->TilesToFill.Pop();
		newCoreTile.CorePivotPaper->FilledTiles.Add(newTileKey);
		myGameState->LevelMap.Add(newTileKey, newCoreTile);
	}
}

void AAutomafarmCharacter::SetHasRifle(bool bNewHasRifle)
{
	bHasRifle = bNewHasRifle;
}

bool AAutomafarmCharacter::GetHasRifle()
{
	return bHasRifle;
}