// Fill out your copyright notice in the Description page of Project Settings.

//Header for this Class
#include "UI/DragPreview.h"
//Custom Classes
#include "Library/Structs.h"
//Other Classes
#include "Components/Image.h"
#include "Engine/DataTable.h"

UDragPreview::UDragPreview(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UDragPreview::Init(const FSlotStruct& InSlotStruct)
{
	SlotPreview->Init(InSlotStruct);
}