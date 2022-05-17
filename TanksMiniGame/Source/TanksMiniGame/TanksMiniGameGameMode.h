// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TanksMiniGameGameMode.generated.h"

/**
 * 
 */
UCLASS()
class TANKSMINIGAME_API ATanksMiniGameGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	void ActorDied(AActor* DeadACtor);

protected:
	virtual void BeginPlay() override;
private:
	class ATank* Tank;
	
};
