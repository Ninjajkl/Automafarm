// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Custom Classes
#include "../Items/Item.h"
#include "AutomafarmEnums.h"
#include "../Items/PlaceableObject.h"
//Other Classes
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
//Generated File
#include "Structs.generated.h"

USTRUCT(BlueprintType)
struct FSlotStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FDataTableRowHandle ItemID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int Quantity;
};

USTRUCT(BlueprintType)
struct FItemStruct : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
		FName Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
		FString Description;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
		UTexture2D* Thumbnail;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
		TSubclassOf<AItem> Item;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
		int MaxStackSize;
};

USTRUCT(BlueprintType)
struct FTileStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TObjectPtr<APlaceableObject> PlaceableObjectReference;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ETileType TileType;

	FTileStruct() 
		: PlaceableObjectReference(nullptr), TileType(ETileType::DEFAULT){}
	FTileStruct(TObjectPtr<APlaceableObject> InPlaceableObjectReference, ETileType InTileType)
		: PlaceableObjectReference(InPlaceableObjectReference), TileType(InTileType){}
};