// Fill out your copyright notice in the Description page of Project Settings.


#include "Library/GameConstants.h"

const float UGC::TileLength = 100.0f;
const FVector UGC::TileOffset = FVector(50, 50, 50);

FVector UGC::RoundVector(const FVector Vector)
{
	return FVector(
		FMath::RoundToInt(Vector.X),
		FMath::RoundToInt(Vector.Y),
		FMath::RoundToInt(Vector.Z)
	);
}

FVector UGC::WorldToGridPosition(const FVector aCoords)
{
	return FVector(
		floor(aCoords[0] / UGC::TileLength),
		floor(aCoords[1] / UGC::TileLength),
		floor(aCoords[2] / UGC::TileLength)
	);
}

FVector UGC::GridToWorldPosition(const FVector gCoords)
{
	return gCoords * UGC::TileLength + UGC::TileOffset;
}