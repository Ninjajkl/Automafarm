
//Header for this Class
#include "Characters/AutomafarmPlayerController.h"
//Custom Classes
#include "Characters/AutomafarmCharacter.h"
#include "Game/FarmGameStateBase.h"
#include "Items/Crop.h"
#include "Library/SerializableStructs.h"
#include "Systems/SaveFarmLevel.h"
//Other Classes
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraComponent.h"

AAutomafarmPlayerController::AAutomafarmPlayerController()
{

}

void AAutomafarmPlayerController::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(DefaultMappingContext, 0);
	}

	if(IsLocalController())
	{
		AAutomafarmCharacter* AutomafarmCharacter = Cast<AAutomafarmCharacter>(GetPawn());

		PlayerHud = CreateWidget<UPlayerHud>(this, PlayerHudClass);
		PlayerHud->Init(AutomafarmCharacter->PlayerInventory);
		PlayerHud->AddToViewport();
	}
}

//////////////////////////////////////////////////////////////////////////// Input

void AAutomafarmPlayerController::SetupInputComponent()
{
	APlayerController::SetupInputComponent();

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent))
	{
		//Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &AAutomafarmPlayerController::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &AAutomafarmPlayerController::StopJumping);

		//Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AAutomafarmPlayerController::Move);

		//Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AAutomafarmPlayerController::Look);

		//Interacting
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Triggered, this, &AAutomafarmPlayerController::Interact);

		//Inventory
		EnhancedInputComponent->BindAction(InventoryAction, ETriggerEvent::Triggered, this, &AAutomafarmPlayerController::Inventory);

		//Scroll
		EnhancedInputComponent->BindAction(ScrollAction, ETriggerEvent::Triggered, this, &AAutomafarmPlayerController::Scroll);

		//Save
		EnhancedInputComponent->BindAction(SaveAction, ETriggerEvent::Triggered, this, &AAutomafarmPlayerController::SaveLevel);

		//Numbers
		EnhancedInputComponent->BindAction(Hotbar0Action, ETriggerEvent::Triggered, this, &AAutomafarmPlayerController::Hotbar0);
		EnhancedInputComponent->BindAction(Hotbar1Action, ETriggerEvent::Triggered, this, &AAutomafarmPlayerController::Hotbar1);
		EnhancedInputComponent->BindAction(Hotbar2Action, ETriggerEvent::Triggered, this, &AAutomafarmPlayerController::Hotbar2);
		EnhancedInputComponent->BindAction(Hotbar3Action, ETriggerEvent::Triggered, this, &AAutomafarmPlayerController::Hotbar3);
		EnhancedInputComponent->BindAction(Hotbar4Action, ETriggerEvent::Triggered, this, &AAutomafarmPlayerController::Hotbar4);
		EnhancedInputComponent->BindAction(Hotbar5Action, ETriggerEvent::Triggered, this, &AAutomafarmPlayerController::Hotbar5);
		EnhancedInputComponent->BindAction(Hotbar6Action, ETriggerEvent::Triggered, this, &AAutomafarmPlayerController::Hotbar6);
		EnhancedInputComponent->BindAction(Hotbar7Action, ETriggerEvent::Triggered, this, &AAutomafarmPlayerController::Hotbar7);
		EnhancedInputComponent->BindAction(Hotbar8Action, ETriggerEvent::Triggered, this, &AAutomafarmPlayerController::Hotbar8);
		EnhancedInputComponent->BindAction(Hotbar9Action, ETriggerEvent::Triggered, this, &AAutomafarmPlayerController::Hotbar9);
	}
}

void AAutomafarmPlayerController::Jump(const FInputActionValue& Value)
{
	AAutomafarmCharacter* MyCharacter = Cast<AAutomafarmCharacter>(GetPawn());
	if (!MyCharacter)
	{
		return;
	}

	MyCharacter->Jump();
}

void AAutomafarmPlayerController::StopJumping(const FInputActionValue& Value)
{
	AAutomafarmCharacter* MyCharacter = Cast<AAutomafarmCharacter>(GetPawn());
	if (!MyCharacter)
	{
		return;
	}

	MyCharacter->StopJumping();
}

void AAutomafarmPlayerController::Move(const FInputActionValue& Value)
{
	AAutomafarmCharacter* MyCharacter = Cast<AAutomafarmCharacter>(GetPawn());
	if (!MyCharacter)
	{
		return;
	}

	MyCharacter->Move(Value);
}

void AAutomafarmPlayerController::Look(const FInputActionValue& Value)
{
	AAutomafarmCharacter* MyCharacter = Cast<AAutomafarmCharacter>(GetPawn());
	if (!MyCharacter)
	{
		return;
	}

	MyCharacter->Look(Value);
}

void AAutomafarmPlayerController::Interact(const FInputActionValue& Value)
{
	AAutomafarmCharacter* MyCharacter = Cast<AAutomafarmCharacter>(GetPawn());
	if (!MyCharacter)
	{
		return;
	}

	MyCharacter->Interact(Value);
}

void AAutomafarmPlayerController::Inventory(const FInputActionValue& Value)
{
	if(PlayerHud)
	{
		PlayerHud->DisplayPlayerInventory();
	}
}

void AAutomafarmPlayerController::Scroll(const FInputActionValue& InputValue)
{
	// If the input value is a scroll of the mouse wheel, perform an action
	if (InputValue.GetValueType() == EInputActionValueType::Axis1D)
	{
		FInputActionValue::Axis1D ScrollValue = InputValue.Get<FInputActionValue::Axis1D>();
		if (ScrollValue != 0.0f)
		{
			int HotbarDirection = FlipHotbarScrollDirection ? 1 : -1;
			SetHotbar(ScrollValue > 0 ? CurrHotbarSlot+HotbarDirection : CurrHotbarSlot-HotbarDirection);
		}
	}
}

void AAutomafarmPlayerController::SetHotbar(int InHotbarPosition)
{
	CurrHotbarSlot = (InHotbarPosition < 0) ? 9 : 
					 (InHotbarPosition > 9) ? 0 : 
					 InHotbarPosition;
	//Send HotbarChanged Event
	OnHotbarSlotChanged.Broadcast(CurrHotbarSlot);
}

void AAutomafarmPlayerController::SaveLevel(const FInputActionValue& Value)
{
	AFarmGameStateBase* FarmGameState = Cast<AFarmGameStateBase>(GetWorld()->GetGameState());
	USaveFarmLevel* SaveFarmLevel = Cast<USaveFarmLevel>(UGameplayStatics::CreateSaveGameObject(USaveFarmLevel::StaticClass()));
	if(FarmGameState && SaveFarmLevel)
	{
		UE_LOG(LogTemp, Warning, TEXT("Save Started"));

		TArray<FSerializedBaseBlock> SerializedBaseBlocks;
		TArray<FSerializedPivotPaper> SerializedPivotPapers;
		TArray<FSerializedCrop> SerializedCrops;
		TArray<FSerializedInteractableBlock> SerializedInteractableBlocks;

		for (const auto& InstancedBlock : FarmGameState->InstancedObjectMap)
		{
			ABaseBlock* Block = Cast<ABaseBlock>(InstancedBlock.Value);
			FSerializedBaseBlock SerializedBlock;
			SerializedBlock.Class = Block->GetClass();
			SerializedBlock.PerInstanceSMData = Block->BlockMesh->PerInstanceSMData;
			SerializedBaseBlocks.Add(SerializedBlock);
		}

		for (const auto& Entry : FarmGameState->LevelMap)
		{
			if (Entry.Value.TileType == ETileType::PIVOTPAPER)
			{
				APivotPaper* PivotPaper = Cast<APivotPaper>(Entry.Value.PlaceableObjectReference);
				FSerializedPivotPaper SerializedPivotPaper;
				SerializedPivotPaper.Class = PivotPaper->GetClass();
				SerializedPivotPaper.GridLocation = PivotPaper->GridLocation;
				if (ACrop* Crop = Cast<ACrop>(PivotPaper)) 
				{
					FSerializedCrop SerializedCrop(SerializedPivotPaper);
					SerializedCrop.CropCreationTime = Crop->CropCreationTime;
					SerializedCrop.CropTimespan = Crop->CropTimespan;
					SerializedCrops.Add(SerializedCrop);
				}
				else 
				{
					SerializedPivotPapers.Add(SerializedPivotPaper);
				}
			}
			else if (Entry.Value.TileType == ETileType::INTERACTABLEBLOCK)
			{
				AInteractableBlock* InteractableBlock = Cast<AInteractableBlock>(Entry.Value.PlaceableObjectReference);
				FSerializedInteractableBlock SerializedInteractableBlock;
				SerializedInteractableBlock.Class = InteractableBlock->GetClass();
				SerializedInteractableBlock.Name = InteractableBlock->Name;
				//SerializedInteractableBlock.Inventory = InteractableBlock->GetInventory();
				FSerializedInventory SerializedInventory;
				SerializedInventory.NumRows = InteractableBlock->Inventory->NumRows;
				SerializedInventory.NumCols = InteractableBlock->Inventory->NumCols;
				SerializedInventory.Content = InteractableBlock->Inventory->Content;
				SerializedInteractableBlock.SerializedInventory = SerializedInventory;

				SerializedInteractableBlock.GridLocation = InteractableBlock->GridLocation;
				SerializedInteractableBlocks.Add(SerializedInteractableBlock);
			}
			else if (Entry.Value.TileType == ETileType::REFERENCER) 
			{
				//Do nothing, we don't need to save this
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Cast Failed"));
			}
			// Repeat for other subclasses if needed
		}

		AAutomafarmCharacter* PlayerCharacter = Cast<AAutomafarmCharacter>(GetPawn());
		FSerializedPlayerCharacter SerializedPlayerCharacter;
		SerializedPlayerCharacter.Transform = PlayerCharacter->GetActorTransform();
		FVector Location = SerializedPlayerCharacter.Transform.GetLocation();
		FRotator Rotation = SerializedPlayerCharacter.Transform.GetRotation().Rotator();
		FVector Scale = SerializedPlayerCharacter.Transform.GetScale3D();

		UE_LOG(LogTemp, Warning, TEXT("Transform - Location: %s, Rotation: %s, Scale: %s"), *Location.ToString(), *Rotation.ToString(), *Scale.ToString());

		FSerializedInventory SerializedPlayerInventory;
		SerializedPlayerInventory.NumRows = PlayerCharacter->PlayerInventory->NumRows;
		SerializedPlayerInventory.NumCols = PlayerCharacter->PlayerInventory->NumCols;
		SerializedPlayerInventory.Content = PlayerCharacter->PlayerInventory->Content;
		SerializedPlayerCharacter.SerializedInventory = SerializedPlayerInventory;

		// Set data on the savegame object.
		SaveFarmLevel->SerializedBaseBlocks = SerializedBaseBlocks;
		SaveFarmLevel->SerializedPivotPapers = SerializedPivotPapers;
		SaveFarmLevel->SerializedCrops = SerializedCrops;
		SaveFarmLevel->SerializedInteractableBlocks = SerializedInteractableBlocks;
		SaveFarmLevel->GameTimeSpan = FarmGameState->GameTimeSpan;
		SaveFarmLevel->GameSecondsPassed = FarmGameState->GameSecondsPassed;
		SaveFarmLevel->SerializedPlayerCharacter = SerializedPlayerCharacter;

		// Start async save process.
		UGameplayStatics::AsyncSaveGameToSlot(SaveFarmLevel, SaveFarmLevel->SaveSlotName, SaveFarmLevel->UserIndex);
	}
}

/// AAAAAAA
void AAutomafarmPlayerController::Hotbar0(const FInputActionValue& InputValue) { SetHotbar(0); };
void AAutomafarmPlayerController::Hotbar1(const FInputActionValue& InputValue) { SetHotbar(1); };
void AAutomafarmPlayerController::Hotbar2(const FInputActionValue& InputValue) { SetHotbar(2); };
void AAutomafarmPlayerController::Hotbar3(const FInputActionValue& InputValue) { SetHotbar(3); };
void AAutomafarmPlayerController::Hotbar4(const FInputActionValue& InputValue) { SetHotbar(4); };
void AAutomafarmPlayerController::Hotbar5(const FInputActionValue& InputValue) { SetHotbar(5); };
void AAutomafarmPlayerController::Hotbar6(const FInputActionValue& InputValue) { SetHotbar(6); };
void AAutomafarmPlayerController::Hotbar7(const FInputActionValue& InputValue) { SetHotbar(7); };
void AAutomafarmPlayerController::Hotbar8(const FInputActionValue& InputValue) { SetHotbar(8); };
void AAutomafarmPlayerController::Hotbar9(const FInputActionValue& InputValue) { SetHotbar(9); };
