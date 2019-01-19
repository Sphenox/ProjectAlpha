// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyFirstEnemy.generated.h"

UCLASS()
class PROJECTALPHA_API AMyFirstEnemy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyFirstEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	/** How far can the enemy see? */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		int32 EnemyViewDistance;

	/** Enemy MovementSpeed
	 * MovementSpeed / 100 per Tick
	 **/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		int32 MovementSpeed;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	float RunningTime;
};
