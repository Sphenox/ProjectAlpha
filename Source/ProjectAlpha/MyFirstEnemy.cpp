// Fill out your copyright notice in the Description page of Project Settings.

#include "MyFirstEnemy.h"
#include "Engine/Engine.h"

// Sets default values
AMyFirstEnemy::AMyFirstEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMyFirstEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyFirstEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector TargetLocation = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();

	if(GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, FString::Printf(TEXT("Player Location is: %s"), *TargetLocation.ToString()));
	}

	FVector NewLocation = GetActorLocation();

	NewLocation.X += (TargetLocation.X - NewLocation.X)/(MovementSpeed/0.01);
	NewLocation.Y += (TargetLocation.Y - NewLocation.Y)/(MovementSpeed/0.01);
	//float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	//NewLocation.Y += DeltaHeight * MovementSpeed;
	//RunningTime += DeltaTime;
	SetActorLocation(NewLocation);

}

