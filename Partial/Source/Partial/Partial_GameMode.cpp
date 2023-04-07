// Fill out your copyright notice in the Description page of Project Settings.


#include "Partial_GameMode.h"
#include "Gameframework/Actor.h"

APartial_GameMode::APartial_GameMode() 
{
	PrimaryActorTick.bCanEverTick = true;

}

void APartial_GameMode::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle UnusedHandle;
	GetWorldTimerManager().SetTimer(UnusedHandle, this, &APartial_GameMode::SpawnPlayerRecharge, FMath::RandRange(2, 5), true);
}

void APartial_GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APartial_GameMode::SpawnPlayerRecharge()
{
	float RandX = FMath::RandRange(Spawn_X_Min, Spawn_X_Max);
	float RandY = FMath::RandRange(Spawn_Y_Min, Spawn_Y_Max);

	FVector SpawnPosition = FVector(RandX, RandY, Spawn_Z);
	FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);

	GetWorld()->SpawnActor(PlayerRecharger, &SpawnPosition, &SpawnRotation); 
}
