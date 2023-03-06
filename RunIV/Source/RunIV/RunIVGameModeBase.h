// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "RunIVGameModeBase.generated.h"

class AFloorTile;
class UUserWidget;

/**
 * 
 */
UCLASS()
class RUNIV_API ARunIVGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "Config")
		TSubclassOf<UUserWidget> GameHUDclass;

	UPROPERTY(EditAnywhere, Category = "Config") //used to spawn the blueprint, with all the defined aspects
		TSubclassOf<AFloorTile> TileClass;

	UPROPERTY(VisibleAnywhere)
		int32 coinTotal = 0;

	UPROPERTY(EditAnywhere, Category = "Config")
		int32 initialTileNum = 10;

	UPROPERTY(VisibleInstanceOnly, Category = "Runtime")
		FTransform nextSpawn;

	UPROPERTY(VisibleInstanceOnly, Category = "Runtime")
		TArray<float> LaneValues;

	UFUNCTION(BlueprintCallable)
		void CreateInitialFloorTiles();

	UFUNCTION(BlueprintCallable)
		AFloorTile* AddFloorTile(const bool SpawnItems);

	//this is the place where the main game functionality is, such as adding items
	UFUNCTION(BlueprintCallable)
		void AddCoin();

protected:
	virtual void BeginPlay();
	
};
