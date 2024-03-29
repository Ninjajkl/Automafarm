// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Custom Classes
#include "../Items/PlaceableObject.h"
#include "../Library/SerializableStructs.h"
//Other Classes
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
//Generated File
#include "SaveFarmLevel.generated.h"

UCLASS()
class AUTOMAFARM_API USaveFarmLevel : public USaveGame
{
	GENERATED_BODY()
	
public:
	USaveFarmLevel();

	UPROPERTY(VisibleAnywhere, Category = Basic)
		FString SaveSlotName;
	UPROPERTY(VisibleAnywhere, Category = Basic)
		uint32 UserIndex;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Terrain")
		TArray<FSerializedBaseBlock> SerializedBaseBlocks;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Terrain")
		TArray<FSerializedPivotPaper> SerializedPivotPapers;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Terrain")
		TArray<FSerializedCrop> SerializedCrops;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Terrain")
		TArray<FSerializedInteractableBlock> SerializedInteractableBlocks;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "TimeSystem")
		FSerializedTimeSystem SerializedTimeSystem;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PlayerCharacter")
		FSerializedPlayerCharacter SerializedPlayerCharacter;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PlayerCharacter")
		FSerializedPlayerController SerializedPlayerController;
};
