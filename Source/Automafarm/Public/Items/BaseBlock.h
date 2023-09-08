// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Custom Classes
#include "PlaceableObject.h"
//Other Classes
#include "CoreMinimal.h"
//Generated File
#include "BaseBlock.generated.h"

UCLASS(Blueprintable, BlueprintType)
class AUTOMAFARM_API ABaseBlock : public APlaceableObject
{
	GENERATED_BODY()
public:	
	// Sets default values for this actor's properties
	ABaseBlock();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseBlock")
		UInstancedStaticMeshComponent* BlockMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseBlock")
		TMap<FVector, int32> GridLocationInstanceMap;

protected:
public:	
	void AddBlock(FVector GridLocation);
	void ClearBlocks();
	void RemoveBlockAt(FVector GridLocation);
};
