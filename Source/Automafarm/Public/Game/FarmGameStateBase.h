// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Custom Classes
#include "../Characters/AutomafarmCharacter.h"
#include "../Characters/AutomafarmPlayerController.h"
#include "../Items/InteractableBlock.h"
#include "../Items/PivotPaper.h"
#include "../Items/PlaceableObject.h"
#include "../Library/SerializableStructs.h"
//Other Classes
#include "CoreMinimal.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "GameFramework/GameStateBase.h"
//Generated File
#include "FarmGameStateBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKFOnHourPassed, FTimespan, GameTimePassed);

UCLASS()
class AUTOMAFARM_API AFarmGameStateBase : public AGameStateBase
{
	GENERATED_BODY()

public:
	AFarmGameStateBase();

	UPROPERTY(BlueprintAssignable)
		FKFOnHourPassed OnHourPassed;

public:
	virtual void Tick(float DeltaSeconds) override;

	//Terrain Properties and Functions
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Terrain")
		TMap<FVector, FTileStruct> LevelMap;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Terrain")
		TMap<TSubclassOf<APlaceableObject>, APlaceableObject*> InstancedObjectMap;

	void InitializeInstanceableObject(TSubclassOf<APlaceableObject> BlockClass);
	void AddBlockInstance(TSubclassOf<APlaceableObject> BlockClass, FVector GridLocation);
	APivotPaper* AddPivotPaper(TSubclassOf<APlaceableObject> PivotClass, FVector GridLocation, FVector PlayerLocation);
	AInteractableBlock* AddInteractableBlock(TSubclassOf<APlaceableObject> BlockClass, FVector GridLocation);
	void AddToLevelMap(APlaceableObject* TileReference, TArray<FVector> TilesToFill, FVector TileKey, ETileType TileType);

	//Saving System Prperties and Functions

	void SaveLevel();

private:
	FSerializedBaseBlock SerializeBaseBlock(APlaceableObject* InstancedBlock);
	FSerializedPivotPaper SerializePivotPaper(APivotPaper* PivotPaper);
	FSerializedCrop SerializeCrop(ACrop* Crop);
	FSerializedInteractableBlock SerializeInteractableBlock(AInteractableBlock* InteractableBlock);
	FSerializedTimeSystem SerializeTimeSystem(AFarmGameStateBase* FarmGameState);
	FSerializedPlayerController SerializePlayerController(AAutomafarmPlayerController* PlayerController);
	FSerializedPlayerCharacter SerializePlayerCharacter(AAutomafarmCharacter* PlayerCharacter);
	FSerializedInventory SerializeInventory(UInventory* Inventory);

	//Loading System Properties and Functions
private:
	void LoadLevelSave();
	void LoadInstanceableBlocks(TArray<FSerializedBaseBlock> SerializedBlocks);
	void LoadPivotPapers(TArray<FSerializedPivotPaper> SerializedPivotPapers);
	void LoadCrops(TArray<FSerializedCrop> SerializedCrops);
	void LoadInteractableBlocks(TArray<FSerializedInteractableBlock> SerializedInteractableBlocks);
	void LoadTimeSystem(FSerializedTimeSystem SerializedTimeSystem);
	void LoadPlayerController(FSerializedPlayerController SerializedPlayerController, AAutomafarmPlayerController* PlayerController);
	void LoadPlayerCharacter(FSerializedPlayerCharacter SerializedPlayerCharacter, AAutomafarmCharacter* PlayerCharacter);

	//Time System Properties and Functions
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "TimeSystem")
		FTimespan GameTimeSpan;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TimeSystem")
		double TimeMultiplier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TimeSystem")
		double StartingHour;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TimeSystem")
		double GameSecondsPassed;

	virtual void BeginPlay() override;
};
