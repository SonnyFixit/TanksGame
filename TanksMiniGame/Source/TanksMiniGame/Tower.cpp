// Fill out your copyright notice in the Description page of Project Settings.


#include "Tower.h"
#include "Kismet/GameplayStatics.h"
#include "Tank.h"
#include "TimerManager.h"


void ATower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Check if Tank is valid and store the distance to the tank
	if (InFireRange())
	{
		

		//Find if Tank Pawn is in the range
		//If Tank is in range, rotate Turret in the Tank Direction
	

		RotateTurret(Tank->GetActorLocation());
	}
}

void ATower::BeginPlay()
{
	Super::BeginPlay();
	Tank = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this, 0));
	GetWorldTimerManager().SetTimer(FireRateTimerHandle, this, &ATower::CheckFireCondition, FireRate, true);
}

bool ATower::InFireRange()
{
	

		//Check if Tank is valid and store the distance to the tank
		if (Tank)
		{
			float Distance = FVector::Dist(GetActorLocation(), Tank->GetActorLocation());

			//Find if Tank Pawn is in the range
			if (Distance <= FireRange)
			{
				return true;
			}
		}

		return false;
	
}

void ATower::CheckFireCondition()
{
	if (InFireRange())
	{
		Fire();
	}
}