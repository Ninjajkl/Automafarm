// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "Structs.h"
#include "Misc/CoreDelegates.h"
#include "FarmGameStateBase.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKFOnHourPassed, FTimespan, GameTimePassed);

UCLASS()
class AUTOMAFARM_API AFarmGameStateBase : public AGameStateBase
{
	GENERATED_BODY()

public:
	AFarmGameStateBase();

	UPROPERTY(BlueprintAssignable)
		FKFOnHourPassed OnHourPassed;

public:
	virtual void Tick(float DeltaSeconds) override;

	//Terrain Properties and Functions
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Terrain")
		TMap<FVector, FTileHolder> LevelMap;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Terrain")
		TArray<TSubclassOf<UPlaceableObject>> InstancedObjects;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Terrain")
		TMap<TSubclassOf<UPlaceableObject>, UPlaceableObject*> InstancedObjectMap;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Terrain")
		AActor* TerrainHolder;

	bool InitializeInstanceableObject(TSubclassOf<UPlaceableObject> BlockClass);
	void AddPivotPaperComponent(TSubclassOf<UPlaceableObject> PivotClass, FVector TileLoc, FVector PlayerLocation);
	void InitializeTerrain();

	//Time System Properties and Functions
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "TimeSystem")
		FTimespan GameTimeSpan;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TimeSystem")
		double TimeMultiplier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TimeSystem")
		double StartingHour;

	virtual void BeginPlay() override;
};
