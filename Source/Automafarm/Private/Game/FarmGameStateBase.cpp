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
			for(const FInstancedStaticMeshInstanceData& InstanceData : SerializedBlock.PerInstanceSMData)
			{
				FMatrix instanceMatrix = InstanceData.Transform;
				FVector Location;
				Location.X = instanceMatrix.M[3][0];
				Location.Y = instanceMatrix.M[3][1];
				Location.Z = instanceMatrix.M[3][2];

				LevelMap.Add(Location, *InstancedObjectMap.Find(SerializedBlock.BlockClass));
			}
			//LevelMap.Add(SerializedBlock.PerInstanceSMData., *InstancedObjectMap.Find(SerializedBlock.BlockClass));
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
	if (InstancedObjectMap.Contains(SerializedBlock.BlockClass)) { return; }
	APlaceableObject* InstancedObject = GetWorld()->SpawnActor<APlaceableObject>(SerializedBlock.BlockClass);
	InstancedObjectMap.Add(SerializedBlock.BlockClass, InstancedObject);
	ABaseBlock* InstancedBlock = Cast<ABaseBlock>(InstancedObject);
	InstancedBlock->BlockMesh->PerInstanceSMData = SerializedBlock.PerInstanceSMData;
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