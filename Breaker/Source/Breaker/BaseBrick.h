// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "BaseBrick.generated.h"


UCLASS()
class BREAKER_API ABaseBrick : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseBrick();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UStaticMeshComponent* brickMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UBoxComponent* boxCollider;

	float BounceSpeedModifier = 1.01f;

	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* otherActor, 
			class UPrimitiveComponent* otherComp, int32 OtherBodyIndexType, bool bfromSweep, const FHitResult& SweepResult);

	void DestroyBrick();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
