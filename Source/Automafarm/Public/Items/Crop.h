// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Custom Classes
#include "PivotPaper.h"
#include "../Library/Structs.h"
//Other Classes
#include "CoreMinimal.h"
#include "PaperFlipbook.h"
//Generated File
#include "Crop.generated.h"

class AItem;
class AFarmGameStateBase;
class UInventory;

UCLASS()
class AUTOMAFARM_API ACrop : public APivotPaper
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACrop();

protected:
	virtual void BeginPlay() override;
	AFarmGameStateBase* FarmGameState;
	FItemStruct SeedsStruct;
	FItemStruct HarvestStruct;

public:
	//Crop System Properties and Functions
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CropSystem")
		bool Harvestable = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CropSystem")
		TSubclassOf<ACrop> SeedsItem;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CropSystem")
		TSubclassOf<AItem> HarvestItem;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CropSystem", meta = (ToolTip = "A map of growth stages for playing Flipbooks over time.\nKey: Hours since creation\nValue: Flipbook to play at the specified hour."))
		TMap<float, TObjectPtr<UPaperFlipbook>> GrowthStages;

	//Time System Properties and Functions
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "TimeSystem")
		FTimespan CropCreationTime;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "TimeSystem")
		FTimespan CropTimespan;
	UFUNCTION()
		void UpdateTime(FTimespan GameTimeSpan);

	UFUNCTION(BlueprintCallable, Category = "TimeSystem")
		void UpdateCurrentFlipBook();

	virtual void Tick(float DeltaTime) override;
	virtual void Load() override;
	virtual void Dismantle(UInventory* breakingInventory) override;
};
