// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Custom Classes
#include "../Items/InteractableBlock.h"
#include "../Items/PivotPaper.h"
#include "../Items/PlaceableObject.h"
//Other Classes
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
//Generated File
#include "FarmGameStateBase.generated.h"

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
		TMap<FVector, APlaceableObject*> LevelMap;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Terrain")
		TMap<TSubclassOf<APlaceableObject>, APlaceableObject*> InstancedObjectMap;

	bool InitializeInstanceableObject(TSubclassOf<APlaceableObject> BlockClass);
	APivotPaper* AddPivotPaper(TSubclassOf<APlaceableObject> PivotClass, FVector TileLoc, FVector PlayerLocation);
	AInteractableBlock* AddInteractableBlock(TSubclassOf<APlaceableObject> BlockClass, FVector TileLoc);

	//Time System Properties and Functions
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "TimeSystem")
		FTimespan GameTimeSpan;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TimeSystem")
		double TimeMultiplier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TimeSystem")
		double StartingHour;

	virtual void BeginPlay() override;
};
