// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/PrimitiveComponent.h"
#include "PlaceableObject.h"
#include "Templates/Tuple.h"
#include "PlaceableObject.h"
#include "BaseBlock.generated.h"

UCLASS(Blueprintable, BlueprintType)
class AUTOMAFARM_API ABaseBlock : public APlaceableObject
{
	GENERATED_BODY()
public:	
	// Sets default values for this actor's properties
	ABaseBlock();

	UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.000001), Category = "BaseBlock")
		float TileLength = 100.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseBlock")
		UInstancedStaticMeshComponent* BlockMesh;
protected:
public:	
	void AddBlock(FTransform BlockTransform);
	void AddBlock(FVector BlockLocation);
	void ClearBlocks();
};
