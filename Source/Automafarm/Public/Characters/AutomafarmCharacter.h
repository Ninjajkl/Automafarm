// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Custom Classes
#include "../Systems/Inventory.h"
//Other Classes
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
//Generated File
#include "AutomafarmCharacter.generated.h"

class AFarmGameStateBase;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKFOnPlayerMoved,FVector,PlayerLoc);

UCLASS(config=Game)
class AAutomafarmCharacter : public ACharacter
{
	GENERATED_BODY()


	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		UCameraComponent* FirstPersonCameraComponent;
	
public:
	AAutomafarmCharacter();


	//Delegates
	UPROPERTY(BlueprintAssignable)
		FKFOnPlayerMoved OnPlayerMoved;

	//General Properties
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int CurrHotbarSlot = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UInventory* PlayerInventory;

	//Input Handlers

	/** Called for movement input */
	UFUNCTION(BlueprintCallable, Category = Input)
		void Move(const FInputActionValue& Value);

	/** Called for looking input */
	UFUNCTION(BlueprintCallable, Category = Input)
		void Look(const FInputActionValue& Value);

	/** Called for interaction input */
	UFUNCTION(BlueprintCallable, Category = Input)
		void Interact(const FInputActionValue& Value);

	/** Called for dismantling input */
	UFUNCTION(BlueprintCallable, Category = Input)
		void Dismantle(const FInputActionValue& Value);

	/** Returns FirstPersonCameraComponent subobject **/
	UFUNCTION(BlueprintCallable, Category = Getters)
		UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

	UFUNCTION(BlueprintCallable, Category = Placement)
		bool ValidPlacement(TSubclassOf<APlaceableObject> placeableClass, FVector TileKey);

	UFUNCTION(BlueprintCallable, Category = Placement)
		void PlaceHeldItem(TSubclassOf<APlaceableObject> placeableClass, FVector TileKey, FRotator CameraRotator);

	UFUNCTION(BlueprintCallable, Category = Placement)
		TArray<FVector> RotateByYaw(TArray<FVector> Positions, FVector ForwardVector);

	UFUNCTION(BlueprintCallable, Category = Placement)
		void SetCurrHotbarSlot(int InCurrHotbarSlot);


protected:
	AFarmGameStateBase* myGameState;

	virtual void BeginPlay();

public:
};