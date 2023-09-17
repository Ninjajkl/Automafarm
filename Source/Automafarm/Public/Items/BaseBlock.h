// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Custom Classes
#include "PlaceableObject.h"
#include "../Library/Structs.h"
//Other Classes
#include "CoreMinimal.h"
//Generated File
#include "BaseBlock.generated.h"

class AFarmGameStateBase;
class UInventory;

UCLASS(Blueprintable, BlueprintType)
class AUTOMAFARM_API ABaseBlock : public APlaceableObject
{
	GENERATED_BODY()
public:	
	// Sets default values for this actor's properties
	ABaseBlock();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseBlock")
		FName BlockName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseBlock")
		UInstancedStaticMeshComponent* BlockMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseBlock")
		TMap<FVector, int32> GridLocationInstanceMap;

protected:
	AFarmGameStateBase* FarmGameState;
	FItemStruct ItemStruct;

public:	
	virtual void BeginPlay();
	void AddBlock(FVector GridLocation);
	void ClearBlocks();
	void Dismantle(FVector GridLocation, UInventory* breakingInventory);
	bool RemoveBlockInstance(FVector GridLocation);
};
