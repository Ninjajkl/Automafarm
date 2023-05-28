// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/PrimitiveComponent.h"
#include "BaseBlock.generated.h"

UCLASS(Blueprintable, BlueprintType)
class AUTOMAFARM_API UBaseBlock : public UPrimitiveComponent
{
	GENERATED_BODY()
public:	
	// Sets default values for this actor's properties
	UBaseBlock();

	UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.000001))
		float TileLength = 100.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UInstancedStaticMeshComponent* BlockMesh;
protected:
public:	
	void AddBlock(FTransform BlockTransform);
	void AddBlock(FVector BlockLocation);
	void ClearBlocks();
};
