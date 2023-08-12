// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Custom Classes
#include "../Library/Structs.h"
//Other Classes
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
//Generated File
#include "SlotPreview.generated.h"

UCLASS()
class AUTOMAFARM_API USlotPreview : public UUserWidget
{
	GENERATED_BODY()
	
public:
	USlotPreview(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void Init(const FSlotStruct& InSlotStruct);
	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void RefreshSlot(const FSlotStruct& InSlotStruct);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		FSlotStruct SlotStruct;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget), Category = "Inventory")
		UTextBlock* TXTQuantity = nullptr;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget), Category = "Inventory")
		UImage* IMGIcon = nullptr;
};
