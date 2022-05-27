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

		GameOver(false);

	}
	else if (ATower* DestroyedTower = Cast<ATower>(DeadActor))
	{
		DestroyedTower->HandleDestruction();
		--TargetTowers;

		if (TargetTowers == 0)
		{
			GameOver(true);
		}
	}

	FTimerDelegate TimerDel = FTimerDelegate::CreateUObject(this, &ATanksMiniGameGameMode::BeginPlay);
}

void ATanksMiniGameGameMode::BeginPlay()
{
	Super::BeginPlay();
	HandleGameStart();

	
}

void ATanksMiniGameGameMode::HandleGameStart()
{
	TargetTowers = GetTargetTowerCount();
	Tank = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this, 0));
	MiniTanksPlayerController = Cast<AMiniTanksPlayerController>(UGameplayStatics::GetPlayerController(this, 0));

	StartGame();

	if (MiniTanksPlayerController)
	{
		MiniTanksPlayerController->SetPlayerEnabledState(false);

		FTimerHandle PlayerEnableTimerHandle;
		FTimerDelegate PlayerEnableTimerDelegate = FTimerDelegate::CreateUObject(
			MiniTanksPlayerController,
			&AMiniTanksPlayerController::SetPlayerEnabledState,
			true
		);

		GetWorldTimerManager().SetTimer(PlayerEnableTimerHandle,
			PlayerEnableTimerDelegate,
			StartDelay,
			false
		);
	}
}

int32 ATanksMiniGameGameMode::GetTargetTowerCount()
{
	TArray<AActor*> Towers;
	UGameplayStatics::GetAllActorsOfClass(this, ATower::StaticClass(), Towers);
	return Towers.Num();
}

