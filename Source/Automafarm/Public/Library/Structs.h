// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Custom Classes
#include "../Items/Item.h"
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