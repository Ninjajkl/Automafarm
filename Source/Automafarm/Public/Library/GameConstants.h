// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Custom Classes
//Other Classes
#include "CoreMinimal.h"

class AUTOMAFARM_API UGC
{

public:

	//Static Constants
	static const float TileLength;
	static const FVector TileOffset;

	//Static Functions
	static FVector RoundVector(const FVector Vector);
	static FVector WorldToGridPosition(const FVector wCoords);
	static FVector GridToWorldPosition(const FVector gCoords);
};
