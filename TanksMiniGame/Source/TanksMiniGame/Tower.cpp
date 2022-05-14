// Fill out your copyright notice in the Description page of Project Settings.


#include "Tower.h"
#include "Kismet/GameplayStatics.h"
#include "Tank.h"

void ATower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Check if Tank is valid and store the distance to the tank
	if (Tank)
	{
		float Distance = FVector:Dist(GetActorLocation(), Tank->GetActorLocation());

		//Find if Tank Pawn is in the range
		//If Tank is in range, rotate Turret in the Tank Direction
		if (Distance <= FireRange)
		{
			
			RotateTurret(Tank->GetActorLocation());
		}
	}
}

void ATower::BeginPlay()
{
	Super::BeginPlay();
}