// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "Partial_GameMode.generated.h"

/**
 * 
 */
UCLASS()
class PARTIAL_API APartial_GameMode : public AGameMode
{
	GENERATED_BODY()

	APartial_GameMode();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		TSubclassOf<APawn> PlayerRecharger;

	float Spawn_Z = 500.0f; //how high are we spawning our player?

	UPROPERTY(EditAnywhere)
		float Spawn_X_Min;

	UPROPERTY(EditAnywhere)
		float Spawn_X_Max;

	UPROPERTY(EditAnywhere)
		float Spawn_Y_Min;

	UPROPERTY(EditAnywhere)
		float Spawn_Y_Max;

	void SpawnPlayerRecharge(); 
};
