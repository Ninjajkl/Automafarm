// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Custom Classes
//Other Classes
#include "Components/ActorComponent.h"
#include "CoreMinimal.h"
//Generated File
#include "Item.generated.h"

UCLASS( ClassGroup=(Item), meta=(BlueprintSpawnableComponent) )
class AUTOMAFARM_API AItem : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	AItem();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item")
		bool Placeable = false;
};