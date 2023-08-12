// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Custom Classes
//Other Classes
#include "CoreMinimal.h"
//Generated File
#include "Interactable.generated.h"

UINTERFACE(BlueprintType)
class AUTOMAFARM_API UInteractable : public UInterface
{
    GENERATED_BODY()
};

class IInteractable
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interactable")
        void Interact();
};