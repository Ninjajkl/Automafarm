// Fill out your copyright notice in the Description page of Project Settings.

//Header for this Class
#include "Game/FarmGameStateBase.h"
//Custom Classes
#include "Characters/AutomafarmCharacter.h"
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

void AFarmGameStateBase::LoadLevelSave()
{
	if (USaveFarmLevel* LoadedFarmSave = Cast<USaveFarmLevel>(UGameplayStatics::LoadGameFromSlot("TerrainSaveSlot", 0)))
	{
		TArray<FSerializedBaseBlock> SerializedBaseBlocks = LoadedFarmSave->SerializedBaseBlocks;
		TArray<FSerializedPivotPaper> SerializedPivotPapers = LoadedFarmSave->SerializedPivotPapers;
		TArray<FSerializedCrop> SerializedCrops = LoadedFarmSave->SerializedCrops;
		TArray<FSerializedInteractableBlock> SerializedInteractableBlocks = LoadedFarmSave->SerializedInteractableBlocks;

		for (const FSerializedBaseBlock& SerializedBlock : SerializedBaseBlocks)
		{
			LoadInstanceableBlock(SerializedBlock);
		}
		for (const FSerializedPivotPaper& SerializedPivotPaper : SerializedPivotPapers)
		{
			LoadPivotPaper(SerializedPivotPaper);
		}
		for (const FSerializedCrop& SerializedCrop : SerializedCrops)
		{
			LoadCrop(SerializedCrop);
		}
		for (const FSerializedInteractableBlock& SerializedInteractableBlock : SerializedInteractableBlocks)
		{
			LoadInteractableBlock(SerializedInteractableBlock);
		}
		GameTimeSpan = LoadedFarmSave->GameTimeSpan;
		GameSecondsPassed = LoadedFarmSave->GameSecondsPassed;
		AAutomafarmCharacter* PlayerCharacter = Cast<AAutomafarmCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
		PlayerCharacter->SetActorTransform(LoadedFarmSave->SerializedPlayerCharacter.Transform);
		PlayerCharacter->SetActorRotation(LoadedFarmSave->SerializedPlayerCharacter.Transform.GetRotation().Rotator());
		FVector Location = LoadedFarmSave->SerializedPlayerCharacter.Transform.GetLocation();
		FRotator Rotation = LoadedFarmSave->SerializedPlayerCharacter.Transform.GetRotation().Rotator();
		FVector Scale = LoadedFarmSave->SerializedPlayerCharacter.Transform.GetScale3D();

		UE_LOG(LogTemp, Warning, TEXT("Transform - Location: %s, Rotation: %s, Scale: %s"), *Location.ToString(), *Rotation.ToString(), *Scale.ToString());
		PlayerCharacter->PlayerInventory->NumRows = LoadedFarmSave->SerializedPlayerCharacter.SerializedInventory.NumRows;
		PlayerCharacter->PlayerInventory->NumCols = LoadedFarmSave->SerializedPlayerCharacter.SerializedInventory.NumCols;
		PlayerCharacter->PlayerInventory->Content = LoadedFarmSave->SerializedPlayerCharacter.SerializedInventory.Content;
		// The operation was successful, so LoadedGame now contains the data we saved earlier.
		UE_LOG(LogTemp, Warning, TEXT("LOADED: %s"), *LoadedFarmSave->SaveSlotName);
	}
}

void AFarmGameStateBase::LoadInstanceableBlock(FSerializedBaseBlock SerializedBlock)
{
	//Add the Block to the world
	APlaceableObject* InstancedObject = GetWorld()->SpawnActor<APlaceableObject>(SerializedBlock.Class);
	//Add this blockclass to the InstancedObjectMap
	InstancedObjectMap.Add(SerializedBlock.Class, InstancedObject);
	ABaseBlock* InstancedBlock = Cast<ABaseBlock>(InstancedObject);

	//Create an array of the Individual Instances Transforms
	TArray<FTransform> Transforms;
	for (const FInstancedStaticMeshInstanceData& InstanceData : SerializedBlock.PerInstanceSMData)
	{
		FTransform InstanceTransform = FTransform(InstanceData.Transform);
		Transforms.Add(InstanceTransform);
		//As each Transform is made, add it to the level map
		LevelMap.Add(InstanceTransform.GetTranslation(), FTileStruct(InstancedBlock, ETileType::REFERENCER));
	}
	//Add all of the Transforms to the InstancedBlock
	InstancedBlock->BlockMesh->AddInstances(Transforms, false);

}

void AFarmGameStateBase::LoadPivotPaper(FSerializedPivotPaper SerializedPivotPaper) 
{
	APivotPaper* PivotPaper = GetWorld()->SpawnActor<APivotPaper>(SerializedPivotPaper.Class, FTransform(SerializedPivotPaper.GridLocation * UGC::TileLength));
	PivotPaper->GridLocation = SerializedPivotPaper.GridLocation;
	AddToLevelMap(PivotPaper, PivotPaper->TilesToFill, PivotPaper->GridLocation, ETileType::PIVOTPAPER);
}

void AFarmGameStateBase::LoadCrop(FSerializedCrop SerializedCrop)
{
	ACrop* Crop = GetWorld()->SpawnActor<ACrop>(SerializedCrop.Class, FTransform(SerializedCrop.GridLocation * UGC::TileLength));
	Crop->GridLocation = SerializedCrop.GridLocation;
	Crop->CropCreationTime = SerializedCrop.CropCreationTime;
	Crop->CropTimespan = SerializedCrop.CropTimespan;
	AddToLevelMap(Crop, Crop->TilesToFill, Crop->GridLocation, ETileType::PIVOTPAPER);
}

void AFarmGameStateBase::LoadInteractableBlock(FSerializedInteractableBlock SerializedInteractableBlock)
{
	AInteractableBlock* InteractableBlock = GetWorld()->SpawnActor<AInteractableBlock>(SerializedInteractableBlock.Class, FTransform(SerializedInteractableBlock.GridLocation * UGC::TileLength));
	InteractableBlock->Name = SerializedInteractableBlock.Name;
	InteractableBlock->GridLocation = SerializedInteractableBlock.GridLocation;
	InteractableBlock->Inventory->NumRows = SerializedInteractableBlock.SerializedInventory.NumRows;
	InteractableBlock->Inventory->NumCols = SerializedInteractableBlock.SerializedInventory.NumCols;
	InteractableBlock->Inventory->Content = SerializedInteractableBlock.SerializedInventory.Content;
	AddToLevelMap(InteractableBlock, InteractableBlock->TilesToFill, InteractableBlock->GridLocation, ETileType::INTERACTABLEBLOCK);
}