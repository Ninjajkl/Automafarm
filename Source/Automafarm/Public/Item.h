// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Item.generated.h"


UCLASS( ClassGroup=(Item), meta=(BlueprintSpawnableComponent) )
class AUTOMAFARM_API UItem : public UPrimitiveComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UItem();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
