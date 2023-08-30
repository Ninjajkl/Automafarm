// Fill out your copyright notice in the Description page of Project Settings.

//Header for this Class
#include "Game/FarmGameStateBase.h"
//Custom Classes
#include "Characters/AutomafarmCharacter.h"
#include "Items/BaseBlock.h"
#include "Systems/SaveFarmLevel.h"
//Other Classes
#include "Kismet/GameplayStatics.h"

double gameSecondsPassed;

AFarmGameStateBase::AFarmGameStateBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AFarmGameStateBase::BeginPlay()
{
	if (USaveFarmLevel* LoadedFarmSave = Cast<USaveFarmLevel>(UGameplayStatics::LoadGameFromSlot("TerrainSaveSlot", 0)))
	{
		TArray<FSerializedBaseBlock> SerializedBaseBlocks = LoadedFarmSave->SerializedBaseBlocks;
		TArray<FSerializedPivotPaper> SerializedPivotPapers = LoadedFarmSave->SerializedPivotPapers;
		TArray<FSerializedInteractableBlock> SerializedInteractableBlocks = LoadedFarmSave->SerializedInteractableBlocks;

		for (const FSerializedBaseBlock& SerializedBlock : SerializedBaseBlocks)
		{
			LoadInstanceableBlock(SerializedBlock);
		}

		for (const FSerializedPivotPaper& SerializedPivotPaper : SerializedPivotPapers)
		{
			APivotPaper* PivotPaper = GetWorld()->SpawnActor<APivotPaper>(APivotPaper::StaticClass(), SerializedPivotPaper.Transform);
			// Set other properties specific to APivotPaper
			LevelMap.Add(SerializedPivotPaper.Transform.GetLocation(), PivotPaper);
		}

		for (const FSerializedInteractableBlock& SerializedInteractableBlock : SerializedInteractableBlocks)
		{
			AInteractableBlock* InteractableBlock = GetWorld()->SpawnActor<AInteractableBlock>(AInteractableBlock::StaticClass(), SerializedInteractableBlock.Transform);
			InteractableBlock->Name = SerializedInteractableBlock.Name;
			//InteractableBlock->Inventory = SerializedInteractableBlock.Inventory;
			// Set other properties specific to AInteractableBlock
			LevelMap.Add(SerializedInteractableBlock.Transform.GetLocation(), InteractableBlock);
		}

		// The operation was successful, so LoadedGame now contains the data we saved earlier.
		UE_LOG(LogTemp, Warning, TEXT("LOADED: %s"), *LoadedFarmSave->SaveSlotName);
	}
	gameSecondsPassed = 0;
	GameTimeSpan = FTimespan::FromHours(StartingHour);
	OnHourPassed.Broadcast(GameTimeSpan);
}

//General Game Functions

void AFarmGameStateBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	GameTimeSpan += FTimespan::FromSeconds(DeltaSeconds * TimeMultiplier);
	gameSecondsPassed += DeltaSeconds*TimeMultiplier;
	//Number of seconds in an hour
	if(gameSecondsPassed >= 3600)
	{
		gameSecondsPassed -= 3600;
		OnHourPassed.Broadcast(GameTimeSpan);
	}
}

//Terrain Functions

bool AFarmGameStateBase::InitializeInstanceableObject(TSubclassOf<APlaceableObject> instanceableClass)
{
	if (InstancedObjectMap.Contains(instanceableClass)) { return true; }
	InstancedObjectMap.Add(instanceableClass, GetWorld()->SpawnActor<APlaceableObject>(instanceableClass));
	return true;
}

void AFarmGameStateBase::LoadInstanceableBlock(FSerializedBaseBlock SerializedBlock)
{
	//If already loaded, return
	if (InstancedObjectMap.Contains(SerializedBlock.BlockClass)) { return; }
	//Add the Block to the world
	APlaceableObject* InstancedObject = GetWorld()->SpawnActor<APlaceableObject>(SerializedBlock.BlockClass);
	//Add this blockclass to the InstancedObjectMap
	InstancedObjectMap.Add(SerializedBlock.BlockClass, InstancedObject);
	ABaseBlock* InstancedBlock = Cast<ABaseBlock>(InstancedObject);

	//Create an array of the Individual Instances Transforms
	TArray<FTransform> Transforms;
	for (const FInstancedStaticMeshInstanceData& InstanceData : SerializedBlock.PerInstanceSMData)
	{
		FTransform InstanceTransform = FTransform(InstanceData.Transform);
		Transforms.Add(InstanceTransform);
		//As each Transform is made, add it to the level map
		LevelMap.Add(InstanceTransform.GetTranslation(), InstancedObject);
	}
	//Add all of the Transforms to the InstancedBlock
	InstancedBlock->BlockMesh->AddInstances(Transforms, false);

}

APivotPaper* AFarmGameStateBase::AddPivotPaper(TSubclassOf<APlaceableObject> PivotClass, FVector TileLoc, FVector PlayerLocation)
{
	APivotPaper* newPivotPaper = GetWorld()->SpawnActor<APivotPaper>(PivotClass, FTransform(TileLoc));
	newPivotPaper->PlayerMoved(PlayerLocation);
	return newPivotPaper;
}

AInteractableBlock* AFarmGameStateBase::AddInteractableBlock(TSubclassOf<APlaceableObject> BlockClass, FVector TileLoc)
{
	AInteractableBlock* newIB = GetWorld()->SpawnActor<AInteractableBlock>(BlockClass, FTransform(TileLoc));
	return newIB;
}