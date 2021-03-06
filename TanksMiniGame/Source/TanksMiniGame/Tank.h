// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tank.generated.h"

/**
 * 
 */
UCLASS()
class TANKSMINIGAME_API ATank : public ABasePawn
{
	GENERATED_BODY()

public:

	ATank();

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void HandleDestruction();

	APlayerController* GetTankPlayerController() const { return TankPlayerController; }

	bool bAlive = true;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	UPROPERTY(VisibleAnywhere, Category = "Components")
		class USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, Category = "Components")
		class UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, Category = "Movements")
		float Speed = 700.f;

	UPROPERTY(EditAnywhere, Category = "Movements")
		float TurnRate = 75.f;

	UPROPERTY(EditAnywhere, Category = "Movements")
		float TurnRateTestFiled = 75.f;

	
	
	void Move (float Value);
	void Turn (float Value);

	APlayerController* TankPlayerController;

};
