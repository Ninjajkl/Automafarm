// Fill out your copyright notice in the Description page of Project Settings.

//Header for this Class
#include "Characters/AutomafarmCharacter.h"
//Character Classes
#include "Characters/AutomafarmPlayerController.h"
//Game Classes
#include "Game/FarmGameStateBase.h"
//Items Classes
#include "Items/BaseBlock.h"
#include "Items/PivotPaper.h"
//Library Classes
#include "Library/GameConstants.h"
#include "Library/Structs.h"
//Systems Classes
//Other Classes
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Engine/StaticMeshActor.h"

#define PlaceTrace ECC_GameTraceChannel1
#define BreakTrace ECC_GameTraceChannel2


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

	// Create an Inventory Component
	PlayerInventory = CreateDefaultSubobject<UInventory>("PlayerInventory");

	//Get the Game State and store its reference
	myGameState = GetWorld() != NULL ? GetWorld()->GetGameState<AFarmGameStateBase>() : NULL;
}

void AAutomafarmCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	if(Controller)
	{
		//Add Delegate
		Cast<AAutomafarmPlayerController>(Controller)->OnHotbarSlotChanged.AddDynamic(this, &AAutomafarmCharacter::SetCurrHotbarSlot);
	} else {
		UE_LOG(LogTemp, Error, TEXT("Delegate binding failed: PlayerController not initialized."));
	}
}

//////////////////////////////////////////////////////////////////////////// Input

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
		UE_LOG(LogTemp, Warning, TEXT("First SelectedTile: %s"), *SelectedTile.ToString());
		//First, check if we are clicking on something interactable
		if(HitResult.GetActor()->Implements<UInteractable>())
		{
			IInteractable::Execute_Interact(HitResult.GetActor());
		}
		//Otherwise, Check if item in current held slot
		else if (PlayerInventory->Content.Contains(CurrHotbarSlot)) {
			FSlotStruct& Slot = PlayerInventory->Content[CurrHotbarSlot];
			// Retrieve the FItemStruct from the ItemDataTable using the ItemID
			FItemStruct* ItemStruct = PlayerInventory->ItemDataTable->FindRow<FItemStruct>(Slot.ItemID.RowName, TEXT(""));
			//Check if held item is Placeable
			if (ItemStruct->Item.GetDefaultObject()->Placeable) {
				//If so, safe to cast as TSubclassOf<APlaceableObject>KO
				TSubclassOf<APlaceableObject> PlaceableItemClass = TSubclassOf<APlaceableObject>(ItemStruct->Item);
				if (ValidPlacement(PlaceableItemClass, SelectedTile))
				{
					PlaceHeldItem(PlaceableItemClass, SelectedTile);
				}
			}
		}
	}
}

void AAutomafarmCharacter::Dismantle(const FInputActionValue& Value)
{
	UCameraComponent* Camera = GetFirstPersonCameraComponent();
	FVector WLocation = Camera->GetComponentLocation();
	FVector ForwardVector = Camera->GetForwardVector();
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);
	TArray<FHitResult> OutHits;
	bool blockingHit = GetWorld()->LineTraceMultiByChannel(OutHits, WLocation, ForwardVector * 1000 + WLocation, ECollisionChannel::BreakTrace, Params);

	bool firstHit = true;

	for (const FHitResult& OverlappingHit : OutHits)
	{
		AActor* OverlappingActor = OverlappingHit.GetActor();
		// If the overlapping hit is of a PivotPaper, call its Dismantle function
		if (APivotPaper* PivotPaperActor = Cast<APivotPaper>(OverlappingActor))
		{
			PivotPaperActor->Dismantle();
			firstHit = false;
			continue;
		}
		// If the overlapping hit is of an InteractableBlock, BaseBlock, or Unknown:
		// If it is the first overlap, destruct it (If not Unknown)
		// Otherwise, Ignore it and stop checking
		else if (firstHit == false)
		{
			return;
		}
		else if (ABaseBlock* BaseBlockActor = Cast<ABaseBlock>(OverlappingActor))
		{
			FVector SelectedTile = AbsoluteToGrid(OverlappingHit.ImpactPoint - OverlappingHit.ImpactNormal);
			UE_LOG(LogTemp, Warning, TEXT("Second SelectedTile: %s"), *SelectedTile.ToString());
			BaseBlockActor->RemoveBlockAt(SelectedTile);
		}
		else if (AInteractableBlock* InteractableBlockActor = Cast<AInteractableBlock>(OverlappingActor))
		{

		}
		return;
	}
}

//////////////////////////////////////////////////////////////////////////// Placement

FVector AAutomafarmCharacter::AbsoluteToGrid(FVector aCoords) 
{
	return FVector(
		floor(aCoords[0]/ UGC::TileLength), 
		floor(aCoords[1] / UGC::TileLength), 
		floor(aCoords[2] / UGC::TileLength)
	);
}

bool AAutomafarmCharacter::ValidPlacement(TSubclassOf<APlaceableObject> placeableClass, FVector TileKey)
{
	TArray<FVector> TilesToCheck = RotateByYaw(Cast<APlaceableObject>(placeableClass->GetDefaultObject())->TilesToFill, GetFirstPersonCameraComponent()->GetForwardVector());
	for (int i = 0; i < TilesToCheck.Num(); i++)
	{
		if (myGameState->LevelMap.Contains(TileKey + TilesToCheck[i]) ||
			GetWorld()->OverlapAnyTestByChannel((TileKey + TilesToCheck[i]) * UGC::TileLength + UGC::TileOffset, FQuat::MakeFromEuler(FVector::ZeroVector), PlaceTrace, FCollisionShape::MakeBox(FVector(UGC::TileLength/2-6))))
		{
			return false;
		}
	}
	return true;
}

void AAutomafarmCharacter::PlaceHeldItem(TSubclassOf<APlaceableObject> placeableClass, FVector TileKey)
{
	//Place the item in the World
	APlaceableObject* defaultPlaceableObject = Cast<APlaceableObject>(placeableClass->GetDefaultObject());
	ETileType TileType = defaultPlaceableObject->TileType;
	TArray<FVector> TilesToFill = RotateByYaw(defaultPlaceableObject->TilesToFill, GetFirstPersonCameraComponent()->GetForwardVector());
	APlaceableObject* newPO = nullptr;
	switch (TileType)
	{
		case ETileType::BASEBLOCK:
			myGameState->InitializeInstanceableObject(placeableClass);
			myGameState->AddBlockInstance(placeableClass, TileKey);
			newPO = myGameState->InstancedObjectMap[placeableClass];
			break;
		case ETileType::INTERACTABLEBLOCK:
			newPO = myGameState->AddInteractableBlock(placeableClass, TileKey);
			break;
		case ETileType::PIVOTPAPER:
			newPO = myGameState->AddPivotPaper(placeableClass, TileKey, GetFirstPersonCameraComponent()->GetComponentLocation());
			break;
		case ETileType::DEFAULT:
			UE_LOG(LogTemp, Error, TEXT("Item to be placed is missing a TileType"));
			return;
	}
	myGameState->AddToLevelMap(newPO, TilesToFill, TileKey, TileType);

	//Modify the Player's inventory to reflect the change
	PlayerInventory->ReduceSlotByAmount(CurrHotbarSlot, 1);
}

FVector AAutomafarmCharacter::RoundVector(const FVector Vector)
{
	return FVector(
		FMath::RoundToInt(Vector.X), 
		FMath::RoundToInt(Vector.Y), 
		FMath::RoundToInt(Vector.Z)
	);
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

	for (FVector position : Positions)
	{
		rotatedPositions.Add(RoundVector(RotationQuat.RotateVector(position)));
	}

	return rotatedPositions;
}

void AAutomafarmCharacter::SetCurrHotbarSlot(int InCurrHotbarSlot)
{
	CurrHotbarSlot = InCurrHotbarSlot == 0 ? 9 : InCurrHotbarSlot - 1;
}