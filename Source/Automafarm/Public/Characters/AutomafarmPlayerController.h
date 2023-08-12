// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Custom Classes
#include "UI/PlayerHud.h"
//Other Classes
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
//Generated File
#include "AutomafarmPlayerController.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKFOnHotbarSlotChanged, int, CurrHotbarSlot);

UCLASS()
class AUTOMAFARM_API AAutomafarmPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	AAutomafarmPlayerController();

	UPROPERTY(BlueprintAssignable)
		FKFOnHotbarSlotChanged OnHotbarSlotChanged;

protected:
	virtual void BeginPlay();

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputMappingContext* DefaultMappingContext;
	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* JumpAction;
	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* MoveAction;
	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* LookAction;
	/** Interact Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* InteractAction;
	/** Interact Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* InventoryAction;
	/** Scroll Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* ScrollAction;
	/** Hotbar Numbers Input Actions */
	////////So ugly
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* Hotbar0Action;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* Hotbar1Action;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* Hotbar2Action;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* Hotbar3Action;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* Hotbar4Action;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* Hotbar5Action;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* Hotbar6Action;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* Hotbar7Action;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* Hotbar8Action;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		class UInputAction* Hotbar9Action;

	UFUNCTION()
		void Jump(const FInputActionValue& Value);
	UFUNCTION()
		void StopJumping(const FInputActionValue& Value);
	UFUNCTION()
		void Move(const FInputActionValue& Value);
	UFUNCTION()
		void Look(const FInputActionValue& Value);
	UFUNCTION()
		void Interact(const FInputActionValue& Value);
	UFUNCTION()
		void Inventory(const FInputActionValue& Value);
	UFUNCTION()
		void Scroll(const FInputActionValue& Value);

	//Disgusting
	UFUNCTION()
		void Hotbar0(const FInputActionValue& Value);
	UFUNCTION()
		void Hotbar1(const FInputActionValue& Value);
	UFUNCTION()
		void Hotbar2(const FInputActionValue& Value);
	UFUNCTION()
		void Hotbar3(const FInputActionValue& Value);
	UFUNCTION()
		void Hotbar4(const FInputActionValue& Value);
	UFUNCTION()
		void Hotbar5(const FInputActionValue& Value);
	UFUNCTION()
		void Hotbar6(const FInputActionValue& Value);
	UFUNCTION()
		void Hotbar7(const FInputActionValue& Value);
	UFUNCTION()
		void Hotbar8(const FInputActionValue& Value);
	UFUNCTION()
		void Hotbar9(const FInputActionValue& Value);

	UFUNCTION()
		void SetHotbar(int InHotbarPosition);
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		TSubclassOf<UPlayerHud> PlayerHudClass;

	UPROPERTY(BlueprintReadOnly, Category = "Inventory")
		UPlayerHud* PlayerHud = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Inventory")
		int CurrHotbarSlot = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		bool FlipHotbarScrollDirection = false;

	virtual void SetupInputComponent() override;
};
