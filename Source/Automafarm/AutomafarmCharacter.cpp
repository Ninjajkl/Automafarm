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

	PivPClass = APivotPaper::StaticClass();

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
		/*
		if (HitResult.Component->ComponentHasTag("BlockMesh")) 
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, Cast<UInstancedStaticMeshComponent>(HitResult.Component)->GetMaterial(0)->GetName());
		}
		*/
		FVector SelectedTileKey = AbsoluteToGrid(HitResult.ImpactPoint+HitResult.ImpactNormal);
		
		/*
		if(ValidPlacement(PivPClass, SelectedTileKey))
		{
			APivotPaper* newPivotPaper = GetWorld()->SpawnActor<APivotPaper>(PivPClass, FTransform(SelectedTileKey*TileLength));
			newPivotPaper->SetPPCWRotation(FRotator(0,UKismetMathLibrary::FindLookAtRotation(newPivotPaper->GetPPCWLocation(), WLocation).Yaw-90,0));
			AddToLevelMap(newPivotPaper, SelectedTileKey);
		}
		*/
		if (ValidPlacement((Cast<UBaseBlock>(BlockClass->GetDefaultObject()))->TilesToFill, SelectedTileKey, true, FCollisionShape::MakeBox(FVector(49.9999f))) && myGameState->InitilizeUniqueBlock(BlockClass, SelectedTileKey))
		{
			AddToLevelMap(ETileType::BLOCK, SelectedTileKey, nullptr, myGameState->BlockMap[BlockClass]);
		}

	}
}

FVector AAutomafarmCharacter::AbsoluteToGrid(FVector aCoords) 
{
	return FVector(floor(aCoords[0]/TileLength), floor(aCoords[1] / TileLength), floor(aCoords[2] / TileLength));
}

bool AAutomafarmCharacter::ValidPlacement(TArray<FVector> TilesToCheck, FVector TileKey, bool checkEntities, FCollisionShape collisionShape)
{
	for(int i = 0; i < TilesToCheck.Num(); i++)
	{
		if (myGameState->LevelMap.Contains(TileKey + TilesToCheck[i]) || 
			(checkEntities && GetWorld()->OverlapAnyTestByChannel((TileKey + TilesToCheck[i]) * TileLength + FVector(50, 50, 50), FQuat(), PlaceTrace, collisionShape)))
		{
			return false;
		}
	}
	return true;
}

void AAutomafarmCharacter::AddToLevelMap(ETileType TileType, FVector TileKey, APivotPaper* newPivotPaper, UBaseBlock* newBlock)
{
	FTileHolder newCoreTile;
	newCoreTile.TileType = TileType;
	TArray<FVector> TilesToFill;
	TArray<FVector> FilledTiles;
	if (TileType == ETileType::PIVOTPAPER) {
		newCoreTile.CorePivotPaper = newPivotPaper;
		TilesToFill = newCoreTile.CorePivotPaper->TilesToFill;
		
	} else {
		newCoreTile.CoreBlock = newBlock;
		TilesToFill = newCoreTile.CoreBlock->TilesToFill;
	}
	while (!TilesToFill.IsEmpty())
	{
		FVector newTileKey = TileKey + TilesToFill.Pop();
		if(TileType == ETileType::BLOCK){
			myGameState->BlockMap[BlockClass]->AddBlock(newTileKey * TileLength + FVector(50, 50, 50));
		}
		FilledTiles.Add(newTileKey);
		myGameState->LevelMap.Add(newTileKey, newCoreTile);
	}
	if (TileType == ETileType::PIVOTPAPER) {
		newCoreTile.CorePivotPaper->FilledTiles = FilledTiles;

	} else {
		newCoreTile.CoreBlock->FilledTiles = FilledTiles;
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