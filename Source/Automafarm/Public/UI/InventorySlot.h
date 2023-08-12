// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Custom Classes
#include "DragDropInventorySlot.h"
#include "DragPreview.h"
//Other Classes
#include "Blueprint/UserWidget.h"
#include "Components/Border.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
//Generated File
#include "InventorySlot.generated.h"

UCLASS()
class AUTOMAFARM_API UInventorySlot : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UInventorySlot(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void Init(UInventory* InInventory, const FSlotStruct& InSlotStruct, int InContentIndex);

protected:
	virtual void NativePreConstruct() override;
	virtual void NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation) override;
	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;

public:

	//Classes of Widgets
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		TSubclassOf<UDragPreview> DragPreviewWidgetClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		TSubclassOf<UDragDropInventorySlot> DragDropSlotClass;

	//Propeties for this Widget
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Inventory")
		UInventory* Inventory;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Inventory")
		FSlotStruct SlotStruct;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Inventory")
		int ContentIndex;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		bool ShowBorder = true;

	//Widget Component References
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget), Category = "Inventory")
		USlotPreview* SlotPreview = nullptr;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget), Category = "Inventory")
		UBorder* InventorySlotBorder = nullptr;

	//Functions
	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void RefreshSlot();
};
