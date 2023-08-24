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
			LoadInstanceableBlock(SerializedBlock.BlockClass, SerializedBlock.PerInstanceSMData);
			//InitializeInstanceableObject(SerializedBlock.BlockClass);
			//ABaseBlock* Block = GetWorld()->SpawnActor<ABaseBlock>(SerializedBlock.BlockClass, SerializedBlock.Transform);
			//Block->BlockMesh->PerInstanceSMData = SerializedBlock.PerInstanceSMData;
			//Block->SetInstancedMeshComponent(SerializedBlock.InstancedMeshComponent);
			// Set other properties specific to ABlock
			LevelMap.Add(SerializedBlock.Transform.GetLocation(), *InstancedObjectMap.Find(SerializedBlock.BlockClass));
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

void AFarmGameStateBase::LoadInstanceableBlock(TSubclassOf<APlaceableObject> instanceableClass, TArray<FInstancedStaticMeshInstanceData> InPerInstanceSMData)
{
	if (InstancedObjectMap.Contains(instanceableClass)) { return; }
	APlaceableObject* InstancedObject = GetWorld()->SpawnActor<APlaceableObject>(instanceableClass);
	InstancedObjectMap.Add(instanceableClass, InstancedObject);
	ABaseBlock* InstancedBlock = Cast<ABaseBlock>(InstancedObject);
	InstancedBlock->BlockMesh->PerInstanceSMData = InPerInstanceSMData;
	return;
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