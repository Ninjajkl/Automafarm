// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AutomafarmEnums.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "Misc/CoreDelegates.h"
#include "Inventory.h"
#include "AutomafarmCharacter.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class USceneComponent;
class UCameraComponent;
class UAnimMontage;
class USoundBase;
class ACrop;
class APivotPaper;
class ABaseBlock;
class APlaceableObject;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKFOnPlayerMoved,FVector,PlayerLoc);

UCLASS(config=Game)
class AAutomafarmCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
		USkeletalMeshComponent* Mesh1P;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		UCameraComponent* FirstPersonCameraComponent;

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
		class UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
		class UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
		class UInputAction* MoveAction;

	/** Interact Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* InteractAction;
	
public:
	AAutomafarmCharacter();

	UPROPERTY(BlueprintAssignable)
		FKFOnPlayerMoved OnPlayerMoved;

protected:
	virtual void BeginPlay();

public:
		
	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* LookAction;

	UPROPERTY(EditAnywhere, Meta = (ClampMin = 0.000001))
		float TileLength = 100.0f;

protected:
	/** Called for movement input */
	UFUNCTION(BlueprintCallable, Category = Input)
		void Move(const FInputActionValue& Value);

	/** Called for looking input */
	UFUNCTION(BlueprintCallable, Category = Input)
		void Look(const FInputActionValue& Value);

	/** Called for interaction input */
	UFUNCTION(BlueprintCallable, Category = Input)
		void Interact(const FInputActionValue& Value);

	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UInventory* PlayerInventory;
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int CurrHotbarSlot = 0;

	/** Returns Mesh1P subobject **/
	UFUNCTION(BlueprintCallable, Category = Getters)
		USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }

	/** Returns FirstPersonCameraComponent subobject **/
	UFUNCTION(BlueprintCallable, Category = Getters)
		UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

	UFUNCTION(BlueprintCallable, Category = Placement)
		FVector AbsoluteToGrid(FVector aCoords);

	UFUNCTION(BlueprintCallable, Category = Placement)
		void PlaceHeldItem(TSubclassOf<APlaceableObject> placeableClass, FVector TileKey);

	UFUNCTION(BlueprintCallable, Category = Placement)
		bool ValidPlacement(TSubclassOf<APlaceableObject> placeableClass, FVector TileKey);
	
	UFUNCTION(BlueprintCallable, Category = Placement)
		FVector RoundVector(const FVector Vector);
	
	UFUNCTION(BlueprintCallable, Category = Placement)
		TArray<FVector> RotateByYaw(TArray<FVector> Positions, FVector ForwardVector);
};

