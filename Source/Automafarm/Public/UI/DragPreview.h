// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Custom Classes
#include "../Library/Structs.h"
#include "SlotPreview.h"
//Other Classes
#include "Blueprint/UserWidget.h"
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
//Generated File
#include "DragPreview.generated.h"

UCLASS()
class AUTOMAFARM_API UDragPreview : public UUserWidget
{
	GENERATED_BODY()

public:
	UDragPreview(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void Init(const FSlotStruct& InSlotStruct);

public:

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget), Category = "Inventory")
		USlotPreview* SlotPreview = nullptr;
};
