// Fill out your copyright notice in the Description page of Project Settings.


#include "StarEffect.h"
#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"
#include "EffectConstants.h"

// Sets default values
AStarEffect::AStarEffect() :
	StartPoint(),
	EndPoint(),
	AnimationTimer(EffectConstants::StarEffectDuration)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	FlipbookComponent = CreateDefaultSubobject<UPaperFlipbookComponent>("StarEffectFlipbook");
	FlipbookComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	FlipbookComponent->SetCollisionProfileName("NoCollision");
	RootComponent = FlipbookComponent;

	Tags.Add("StarEffect");
}

// Called when the game starts or when spawned
void AStarEffect::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AStarEffect::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AnimationTimer -= DeltaTime;

	float pct = 1.0f - (AnimationTimer / EffectConstants::StarEffectDuration);
	FVector location = FMath::Lerp(StartPoint, EndPoint, pct);
	SetActorLocation(location);
	if (pct >= 1.0f)
	{
		Destroy();
	}
}

void AStarEffect::Spawn(FVector endPoint)
{
	StartPoint = GetActorLocation();
	EndPoint = endPoint;
	AnimationTimer = EffectConstants::StarEffectDuration;
}

