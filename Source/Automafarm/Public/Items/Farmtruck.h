// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Custom Classes
#include "Items/InteractableBlock.h"
//Other Classes
#include "CoreMinimal.h"
//Generated File
#include "Farmtruck.generated.h"

UCLASS()
class AUTOMAFARM_API AFarmtruck : public AInteractableBlock
{
	GENERATED_BODY()
	
public:
	AFarmtruck();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
};
