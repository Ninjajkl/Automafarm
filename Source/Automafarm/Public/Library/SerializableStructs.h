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
        TSubclassOf<ABaseBlock> Class;
    UPROPERTY()
        TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData;

};

USTRUCT(BlueprintType)
struct FSerializedPivotPaper
{
    GENERATED_BODY()

    UPROPERTY()
        TSubclassOf<APivotPaper> Class;
    UPROPERTY()
        FVector GridLocation;

    FSerializedPivotPaper()
        :Class(nullptr), GridLocation(FVector::ZeroVector){}
    FSerializedPivotPaper(const FSerializedPivotPaper& PivotPaperData)
        :Class(PivotPaperData.Class), GridLocation(PivotPaperData.GridLocation) {}
};

USTRUCT(BlueprintType)
struct FSerializedCrop : public FSerializedPivotPaper
{
    GENERATED_BODY()

    UPROPERTY()
        FTimespan CropCreationTime;
    UPROPERTY()
        FTimespan CropTimespan;

    FSerializedCrop()
        : CropCreationTime(FTimespan::Zero()), CropTimespan(FTimespan::Zero()){}
    FSerializedCrop(const FSerializedPivotPaper& PivotPaperData)
        : FSerializedPivotPaper(PivotPaperData) {}
};

USTRUCT(BlueprintType)
struct FSerializedInventory
{
    GENERATED_BODY()

    UPROPERTY()
        int NumRows;
    UPROPERTY()
        int NumCols;
    UPROPERTY()
        TMap<int, FSlotStruct> Content;
};

USTRUCT(BlueprintType)
struct FSerializedInteractableBlock
{
    GENERATED_BODY()

    UPROPERTY()
        TSubclassOf<AInteractableBlock> Class;
    UPROPERTY()
        FText Name;
    UPROPERTY()
        FSerializedInventory SerializedInventory;
    UPROPERTY()
        FVector GridLocation;
    UPROPERTY()
        FRotator Rotation;
};

USTRUCT(BlueprintType)
struct FSerializedTimeSystem
{
    GENERATED_BODY()

    UPROPERTY()
        FTimespan GameTimeSpan;
    UPROPERTY()
        double GameSecondsPassed;
};

USTRUCT(BlueprintType)
struct FSerializedPlayerCharacter
{
    GENERATED_BODY()

    UPROPERTY()
        FSerializedInventory SerializedInventory;
    UPROPERTY()
        FTransform Transform;
};

USTRUCT(BlueprintType)
struct FSerializedPlayerController
{
    GENERATED_BODY()

    UPROPERTY()
        FRotator Rotation;
};