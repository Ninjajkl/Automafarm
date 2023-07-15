// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PivotPaper.h"
#include "Crop.generated.h"

class UPaperZDAnimSequence;

UCLASS()
class AUTOMAFARM_API ACrop : public APivotPaper
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACrop();

protected:
	virtual void BeginPlay() override;

public:
	//Crop System Properties and Functions
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CropSystem")
		bool Harvestable = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CropSystem", meta = (ToolTip = "A map of growth stages for playing AnimSequences over time.\nKey: Hours since creation\nValue: AnimSequence to play at the specified hour."))
		TMap<float, TSoftObjectPtr<UPaperZDAnimSequence>> GrowthStages;

	//Time System Properties and Functions
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "TimeSystem")
		FTimespan CropCreationTime;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "TimeSystem")
		FTimespan CropTimespan;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "TimeSystem")
		TSoftObjectPtr<UPaperZDAnimSequence> CurrAnimSeq;
	UFUNCTION()
		void UpdateTime(FTimespan GameTimeSpan);

	UFUNCTION(BlueprintCallable, Category = "TimeSystem")
		void UpdateCurrentAnimSeq();

	virtual void Tick(float DeltaTime) override;
};
