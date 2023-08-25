// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Custom Classes
#include "Items/BaseBlock.h"
#include "Items/PivotPaper.h"
#include "Items/InteractableBlock.h"
//Other Classes
#include "Components/InstancedStaticMeshComponent.h"
#include "CoreMinimal.h"
//Generated File
#include "SerializableStructs.generated.h"

USTRUCT(BlueprintType)
struct FSerializedBaseBlock
{
    GENERATED_BODY()

    UPROPERTY()
        TSubclassOf<ABaseBlock> BlockClass;
    UPROPERTY()
        FVector GridLocation;
    UPROPERTY()
        TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData;

};

USTRUCT(BlueprintType)
struct FSerializedPivotPaper
{
    GENERATED_BODY()

    UPROPERTY()
        TSubclassOf<APivotPaper> PivotPaperClass;
    UPROPERTY()
        FTransform Transform;

};

USTRUCT(BlueprintType)
struct FSerializedInteractableBlock
{
    GENERATED_BODY()

    UPROPERTY()
        TSubclassOf<AInteractableBlock> PivotPaperClass;
    UPROPERTY()
        FText Name;
    //UPROPERTY()
    //    UInventory Inventory;
    UPROPERTY()
        FTransform Transform;
};