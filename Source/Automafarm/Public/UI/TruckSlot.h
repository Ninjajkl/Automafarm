// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Custom Classes
#include "UI/InventorySlot.h"
//Other Classes
#include "CoreMinimal.h"
//Generated File
#include "TruckSlot.generated.h"

UCLASS()
class AUTOMAFARM_API UTruckSlot : public UInventorySlot
{
	GENERATED_BODY()
	
public:
	UTruckSlot(const FObjectInitializer& ObjectInitializer);

protected:
	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;
};
