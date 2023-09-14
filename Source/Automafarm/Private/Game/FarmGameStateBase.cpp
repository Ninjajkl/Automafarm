// Fill out your copyright notice in the Description page of Project Settings.

//Header for this Class
#include "Game/FarmGameStateBase.h"
//Custom Classes
#include "Characters/AutomafarmCharacter.h"
#include "Characters/AutomafarmPlayerController.h"
#include "Items/BaseBlock.h"
#include "Items/Crop.h"
#include "Systems/SaveFarmLevel.h"
#include "Library/GameConstants.h"
//Other Classes
#include "Kismet/GameplayStatics.h"


AFarmGameStateBase::AFarmGameStateBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AFarmGameStateBase::BeginPlay()
{
	GameSecondsPassed = 0;
	GameTimeSpan = FTimespan::FromHours(StartingHour);
	LoadLevelSave();
	OnHourPassed.Broadcast(GameTimeSpan);
}

//General Game Functions

void AFarmGameStateBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	GameTimeSpan += FTimespan::FromSeconds(DeltaSeconds * TimeMultiplier);
	GameSecondsPassed += DeltaSeconds*TimeMultiplier;
	//Number of seconds in an hour
	if(GameSecondsPassed >= 3600)
	{
		GameSecondsPassed -= 3600;
		OnHourPassed.Broadcast(GameTimeSpan);
	}
}

//Terrain Functions

void AFarmGameStateBase::InitializeInstanceableObject(TSubclassOf<APlaceableObject> instanceableClass)
{
	if (InstancedObjectMap.Contains(instanceableClass)) { return; }
	InstancedObjectMap.Add(instanceableClass, GetWorld()->SpawnActor<APlaceableObject>(instanceableClass));
}

void AFarmGameStateBase::AddBlockInstance(TSubclassOf<APlaceableObject> BlockClass, FVector GridLocation)
{
	Cast<ABaseBlock>(InstancedObjectMap[BlockClass])->AddBlock(GridLocation);
}

APivotPaper* AFarmGameStateBase::AddPivotPaper(TSubclassOf<APlaceableObject> PivotClass, FVector GridLocation, FVector PlayerLocation)
{
	APivotPaper* newPivotPaper = GetWorld()->SpawnActor<APivotPaper>(PivotClass, FTransform(GridLocation * UGC::TileLength));
	newPivotPaper->GridLocation = GridLocation;
	newPivotPaper->PlayerMoved(PlayerLocation);
	return newPivotPaper;
}

AInteractableBlock* AFarmGameStateBase::AddInteractableBlock(TSubclassOf<APlaceableObject> BlockClass, FVector GridLocation)
{
	AInteractableBlock* newIB = GetWorld()->SpawnActor<AInteractableBlock>(BlockClass, FTransform(GridLocation * UGC::TileLength));
	newIB->GridLocation = GridLocation;
	return newIB;
}

void AFarmGameStateBase::AddToLevelMap(APlaceableObject* TileReference, TArray<FVector> TilesToFill, FVector TileKey, ETileType TileType)
{
	for (const FVector& TileOffset : TilesToFill) {
		FTileStruct newTile;
		newTile.PlaceableObjectReference = TileReference;
		FVector newTileKey = TileKey + TileOffset;

		if (TileOffset.IsZero() && TileType != ETileType::BASEBLOCK)
		{
			newTile.TileType = TileType;
		}
		else
		{
			newTile.TileType = ETileType::REFERENCER;
		}
		LevelMap.Add(newTileKey, newTile);
	}
}

//Saving Functions

void AFarmGameStateBase::SaveLevel() 
{
	AFarmGameStateBase* FarmGameState = Cast<AFarmGameStateBase>(GetWorld()->GetGameState());
	AAutomafarmPlayerController* PlayerController = Cast<AAutomafarmPlayerController>(GetWorld()->GetFirstPlayerController());
	AAutomafarmCharacter* PlayerCharacter = Cast<AAutomafarmCharacter>(PlayerController->GetPawn());
	USaveFarmLevel* SaveFarmLevel = Cast<USaveFarmLevel>(UGameplayStatics::CreateSaveGameObject(USaveFarmLevel::StaticClass()));
	if (FarmGameState && SaveFarmLevel)
	{
		UE_LOG(LogTemp, Warning, TEXT("Save Started"));

		TArray<FSerializedBaseBlock> SerializedBaseBlocks;
		TArray<FSerializedPivotPaper> SerializedPivotPapers;
		TArray<FSerializedCrop> SerializedCrops;
		TArray<FSerializedInteractableBlock> SerializedInteractableBlocks;

		for (const auto& InstancedBlock : FarmGameState->InstancedObjectMap)
		{
			SerializedBaseBlocks.Add(SerializeBaseBlock(InstancedBlock.Value));
		}

		for (const auto& Entry : FarmGameState->LevelMap)
		{
			if (Entry.Value.TileType == ETileType::PIVOTPAPER)
			{
				APivotPaper* PivotPaper = Cast<APivotPaper>(Entry.Value.PlaceableObjectReference);
				if (ACrop* Crop = Cast<ACrop>(PivotPaper))
				{
					SerializedCrops.Add(SerializeCrop(Crop));
				}
				else
				{
					SerializedPivotPapers.Add(SerializePivotPaper(PivotPaper));
				}
			}
			else if (Entry.Value.TileType == ETileType::INTERACTABLEBLOCK)
			{
				SerializedInteractableBlocks.Add(SerializeInteractableBlock(Cast<AInteractableBlock>(Entry.Value.PlaceableObjectReference)));
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

		// Set data on the savegame object.
		SaveFarmLevel->SerializedBaseBlocks = SerializedBaseBlocks;
		SaveFarmLevel->SerializedPivotPapers = SerializedPivotPapers;
		SaveFarmLevel->SerializedCrops = SerializedCrops;
		SaveFarmLevel->SerializedInteractableBlocks = SerializedInteractableBlocks;
		SaveFarmLevel->SerializedTimeSystem = SerializeTimeSystem(FarmGameState);
		SaveFarmLevel->SerializedPlayerController = SerializePlayerController(PlayerController);
		SaveFarmLevel->SerializedPlayerCharacter = SerializePlayerCharacter(PlayerCharacter);

		// Start async save process.
		UGameplayStatics::AsyncSaveGameToSlot(SaveFarmLevel, SaveFarmLevel->SaveSlotName, SaveFarmLevel->UserIndex);
	}
}

FSerializedBaseBlock AFarmGameStateBase::SerializeBaseBlock(APlaceableObject* InstancedBlock)
{
	ABaseBlock* Block = Cast<ABaseBlock>(InstancedBlock);
	FSerializedBaseBlock SerializedBlock;
	SerializedBlock.Class = Block->GetClass();
	SerializedBlock.PerInstanceSMData = Block->BlockMesh->PerInstanceSMData;
	return SerializedBlock;
}

FSerializedPivotPaper AFarmGameStateBase::SerializePivotPaper(APivotPaper* PivotPaper)
{
	FSerializedPivotPaper SerializedPivotPaper;
	SerializedPivotPaper.Class = PivotPaper->GetClass();
	SerializedPivotPaper.GridLocation = PivotPaper->GridLocation;
	return SerializedPivotPaper;
}

FSerializedCrop AFarmGameStateBase::SerializeCrop(ACrop* Crop)
{
	FSerializedCrop SerializedCrop(SerializePivotPaper(Crop));
	SerializedCrop.CropCreationTime = Crop->CropCreationTime;
	SerializedCrop.CropTimespan = Crop->CropTimespan;
	return SerializedCrop;
}

FSerializedInteractableBlock AFarmGameStateBase::SerializeInteractableBlock(AInteractableBlock* InteractableBlock)
{
	FSerializedInteractableBlock SerializedInteractableBlock;
	SerializedInteractableBlock.Class = InteractableBlock->GetClass();
	SerializedInteractableBlock.Name = InteractableBlock->Name;
	SerializedInteractableBlock.SerializedInventory = SerializeInventory(InteractableBlock->Inventory);
	SerializedInteractableBlock.GridLocation = InteractableBlock->GridLocation;

	return SerializedInteractableBlock;
}

FSerializedTimeSystem AFarmGameStateBase::SerializeTimeSystem(AFarmGameStateBase* FarmGameState)
{
	FSerializedTimeSystem SerializedTimeSystem;
	SerializedTimeSystem.GameTimeSpan = FarmGameState->GameTimeSpan;
	SerializedTimeSystem.GameSecondsPassed = FarmGameState->GameSecondsPassed;
	return SerializedTimeSystem;
}

FSerializedPlayerController AFarmGameStateBase::SerializePlayerController(AAutomafarmPlayerController* PlayerController)
{
	FSerializedPlayerController SerializedPlayerController;
	SerializedPlayerController.Rotation = PlayerController->GetControlRotation();
	return SerializedPlayerController;
}

FSerializedPlayerCharacter AFarmGameStateBase::SerializePlayerCharacter(AAutomafarmCharacter* PlayerCharacter)
{
	FSerializedPlayerCharacter SerializedPlayerCharacter;
	SerializedPlayerCharacter.Transform = PlayerCharacter->GetActorTransform();
	SerializedPlayerCharacter.SerializedInventory = SerializeInventory(PlayerCharacter->PlayerInventory);
	return SerializedPlayerCharacter;
}

FSerializedInventory AFarmGameStateBase::SerializeInventory(UInventory* Inventory)
{
	FSerializedInventory SerializedInventory;
	SerializedInventory.NumRows = Inventory->NumRows;
	SerializedInventory.NumCols = Inventory->NumCols;
	SerializedInventory.Content = Inventory->Content;
	return SerializedInventory;
}

//Loading Functions

void AFarmGameStateBase::LoadLevelSave()
{
	if (USaveFarmLevel* LoadedFarmSave = Cast<USaveFarmLevel>(UGameplayStatics::LoadGameFromSlot("TerrainSaveSlot", 0)))
	{
		LoadInstanceableBlocks(LoadedFarmSave->SerializedBaseBlocks);
		LoadPivotPapers(LoadedFarmSave->SerializedPivotPapers);
		LoadCrops(LoadedFarmSave->SerializedCrops);
		LoadInteractableBlocks(LoadedFarmSave->SerializedInteractableBlocks);
		LoadTimeSystem(LoadedFarmSave->SerializedTimeSystem);

		AAutomafarmPlayerController* PlayerController = Cast<AAutomafarmPlayerController>(GetWorld()->GetFirstPlayerController());
		LoadPlayerController(LoadedFarmSave->SerializedPlayerController, PlayerController);

		AAutomafarmCharacter* PlayerCharacter = Cast<AAutomafarmCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
		LoadPlayerCharacter(LoadedFarmSave->SerializedPlayerCharacter, PlayerCharacter);

		//Log that the Save succeeded
		UE_LOG(LogTemp, Warning, TEXT("LOADED: %s"), *LoadedFarmSave->SaveSlotName);
	}
}

void AFarmGameStateBase::LoadInstanceableBlocks(TArray<FSerializedBaseBlock> SerializedBlocks)
{
	for (const FSerializedBaseBlock& SerializedBlock : SerializedBlocks)
	{
		//Add the Block to the world
		APlaceableObject* InstancedObject = GetWorld()->SpawnActor<APlaceableObject>(SerializedBlock.Class);
		//Add this blockclass to the InstancedObjectMap
		InstancedObjectMap.Add(SerializedBlock.Class, InstancedObject);
		ABaseBlock* InstancedBlock = Cast<ABaseBlock>(InstancedObject);

		//Create an array of the Individual Instances Transforms
		TArray<FTransform> Transforms;
		TMap<FVector, int32> GridLocationInstanceMap;
		int instancePosition = 0;
		for (const FInstancedStaticMeshInstanceData& InstanceData : SerializedBlock.PerInstanceSMData)
		{
			FTransform InstanceTransform = FTransform(InstanceData.Transform);
			Transforms.Add(InstanceTransform);
			GridLocationInstanceMap.Add(UGC::WorldToGridPosition(InstanceTransform.GetTranslation()), instancePosition++);
			//As each Transform is made, add it to the level map
			LevelMap.Add(InstanceTransform.GetTranslation(), FTileStruct(InstancedBlock, ETileType::REFERENCER));
		}
		//Add all of the Transforms to the InstancedBlock
		InstancedBlock->GridLocationInstanceMap = GridLocationInstanceMap;
		InstancedBlock->BlockMesh->AddInstances(Transforms, false);;
	}

}

void AFarmGameStateBase::LoadPivotPapers(TArray<FSerializedPivotPaper> SerializedPivotPapers)
{
	for (const FSerializedPivotPaper& SerializedPivotPaper : SerializedPivotPapers)
	{
		APivotPaper* PivotPaper = GetWorld()->SpawnActor<APivotPaper>(SerializedPivotPaper.Class, FTransform(SerializedPivotPaper.GridLocation * UGC::TileLength));
		PivotPaper->GridLocation = SerializedPivotPaper.GridLocation;
		AddToLevelMap(PivotPaper, PivotPaper->TilesToFill, PivotPaper->GridLocation, ETileType::PIVOTPAPER);
	}
}

void AFarmGameStateBase::LoadCrops(TArray<FSerializedCrop> SerializedCrops)
{
	for (const FSerializedCrop& SerializedCrop : SerializedCrops) {
		ACrop* Crop = GetWorld()->SpawnActor<ACrop>(SerializedCrop.Class, FTransform(SerializedCrop.GridLocation * UGC::TileLength));
		Crop->GridLocation = SerializedCrop.GridLocation;
		Crop->CropCreationTime = SerializedCrop.CropCreationTime;
		Crop->CropTimespan = SerializedCrop.CropTimespan;
		AddToLevelMap(Crop, Crop->TilesToFill, Crop->GridLocation, ETileType::PIVOTPAPER);
	}
}

void AFarmGameStateBase::LoadInteractableBlocks(TArray<FSerializedInteractableBlock> SerializedInteractableBlocks)
{
	for (const FSerializedInteractableBlock& SerializedInteractableBlock : SerializedInteractableBlocks) {
		AInteractableBlock* InteractableBlock = GetWorld()->SpawnActor<AInteractableBlock>(SerializedInteractableBlock.Class, FTransform(SerializedInteractableBlock.GridLocation * UGC::TileLength));
		InteractableBlock->Name = SerializedInteractableBlock.Name;
		InteractableBlock->GridLocation = SerializedInteractableBlock.GridLocation;
		InteractableBlock->Inventory->NumRows = SerializedInteractableBlock.SerializedInventory.NumRows;
		InteractableBlock->Inventory->NumCols = SerializedInteractableBlock.SerializedInventory.NumCols;
		InteractableBlock->Inventory->Content = SerializedInteractableBlock.SerializedInventory.Content;
		AddToLevelMap(InteractableBlock, InteractableBlock->TilesToFill, InteractableBlock->GridLocation, ETileType::INTERACTABLEBLOCK);
	}
}

void AFarmGameStateBase::LoadTimeSystem(FSerializedTimeSystem SerializedTimeSystem)
{
	GameTimeSpan = SerializedTimeSystem.GameTimeSpan;
	GameSecondsPassed = SerializedTimeSystem.GameSecondsPassed;
}

void AFarmGameStateBase::LoadPlayerController(FSerializedPlayerController SerializedPlayerController, AAutomafarmPlayerController* PlayerController)
{
	PlayerController->SetControlRotation(SerializedPlayerController.Rotation);
}

void AFarmGameStateBase::LoadPlayerCharacter(FSerializedPlayerCharacter SerializedPlayerCharacter, AAutomafarmCharacter* PlayerCharacter)
{
	PlayerCharacter->SetActorTransform(SerializedPlayerCharacter.Transform);
	PlayerCharacter->PlayerInventory->NumRows = SerializedPlayerCharacter.SerializedInventory.NumRows;
	PlayerCharacter->PlayerInventory->NumCols = SerializedPlayerCharacter.SerializedInventory.NumCols;
	PlayerCharacter->PlayerInventory->Content = SerializedPlayerCharacter.SerializedInventory.Content;
}