// Fill out your copyright notice in the Description page of Project Settings.


#include "TanksMiniGameGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Tank.h"
#include "Tower.h"
#include "MiniTanksPlayerController.h"
#include "TimerManager.h"

void ATanksMiniGameGameMode::ActorDied(AActor* DeadActor)
{
	if (DeadActor == Tank)
	{
		Tank->HandleDestruction();

		if (MiniTanksPlayerController)
		{
			//Tank->DisableInput(Tank->GetTankPlayerController());
			//Tank->GetTankPlayerController()->bShowMouseCursor = false;
			MiniTanksPlayerController->SetPlayerEnabledState(false);
		}
	}
	else if (ATower* DestroyedTower = Cast<ATower>(DeadActor))
	{
		DestroyedTower->HandleDestruction();
	}

	FTimerDelegate TimerDel = FTimerDelegate::CreateUObject(this, &ATanksMiniGameGameMode::BeginPlay);
}

void ATanksMiniGameGameMode::BeginPlay()
{
	Super::BeginPlay();
	HandleGameStart();

	Tank = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this, 0));
	MiniTanksPlayerController = Cast<AMiniTanksPlayerController>(UGameplayStatics::GetPlayerController(this, 0));
}

