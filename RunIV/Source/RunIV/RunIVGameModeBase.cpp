// Copyright Epic Games, Inc. All Rights Reserved.

#include "RunIVGameModeBase.h"
#include "FloorTile.h"
#include "Blueprint/UserWidget.h"
#include "Components/ArrowComponent.h"
#include "Kismet/GameplayStatics.h"


void ARunIVGameModeBase::BeginPlay()
{
	CreateInitialFloorTiles();
}

void ARunIVGameModeBase::CreateInitialFloorTiles()
{
	AFloorTile* initialTile = AddFloorTile(false);

	if (initialTile)
	{
		LaneValues.Add(initialTile->LeftLane->GetComponentLocation().Y);
		LaneValues.Add(initialTile->CenterLane->GetComponentLocation().Y);
		LaneValues.Add(initialTile->RightLane->GetComponentLocation().Y);
	}

	AddFloorTile(false);
	AddFloorTile(false);
	
	for (int i = 0; i < initialTileNum; i++)
	{
		AddFloorTile(true);
	}
}

AFloorTile* ARunIVGameModeBase::AddFloorTile(const bool SpawnItems)
{
	UWorld* globe = GetWorld();

	if (globe) {

		AFloorTile* Tile = globe->SpawnActor<AFloorTile>(TileClass, nextSpawn);

		if (Tile)
		{
			if (SpawnItems)
			{
				Tile->ItemSpawn();
			}

			nextSpawn = Tile->GetAttachTransform();
		}

		return Tile; //can be nullptr
	}

	return nullptr;
}

void ARunIVGameModeBase::AddCoin()
{
	coinTotal += 1;
}
