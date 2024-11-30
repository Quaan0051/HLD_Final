// Fill out your copyright notice in the Description page of Project Settings.


#include "RotoDisc.h"
#include "Components/BoxComponent.h"
#include "PaperSprite.h"
#include "PaperSpriteComponent.h"
#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"
#include "PlatformConstants.h"

// Sets default values
ARotoDisc::ARotoDisc() :
	Direction(ERotoDiscDirection::Clockwise)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxComponent = CreateDefaultSubobject<UBoxComponent>("RotoDiscCoreBoxComponent");
	BoxComponent->SetCollisionProfileName("BlockAllDynamic");
	BoxComponent->SetNotifyRigidBodyCollision(true);
	BoxComponent->SetSimulatePhysics(false);
	RootComponent = BoxComponent;

	DiscPivotBoxComponent = CreateDefaultSubobject<UBoxComponent>("DiscPivotBoxComponent");
	DiscPivotBoxComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	DiscPivotBoxComponent->SetCollisionProfileName("NoCollision");
	DiscPivotBoxComponent->SetupAttachment(RootComponent);

	DiscBoxComponent = CreateDefaultSubobject<UBoxComponent>("RotoDiscBoxComponent");
	DiscBoxComponent->SetCollisionProfileName("OverlapAll");
	DiscBoxComponent->SetGenerateOverlapEvents(true);
	DiscBoxComponent->SetupAttachment(DiscPivotBoxComponent);

	SpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>("RotoDiscSpriteComponent");
	SpriteComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	SpriteComponent->SetCollisionProfileName("NoCollision");
	SpriteComponent->SetupAttachment(RootComponent);

	FlipbookComponent = CreateDefaultSubobject<UPaperFlipbookComponent>("RotoDiscFlipbookComponent");
	FlipbookComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	FlipbookComponent->SetCollisionProfileName("NoCollision");
	FlipbookComponent->SetupAttachment(RootComponent);

	Tags.Add("RotoDisc");

}

// Called when the game starts or when spawned
void ARotoDisc::BeginPlay()
{
	Super::BeginPlay();
	
	if (Direction == ERotoDiscDirection::Clockwise)
	{
		Velocity = PlatformConstants::RotoDiskSpeed;
	}
	else if (Direction == ERotoDiscDirection::CounterClockwise)
	{
		Velocity = -PlatformConstants::RotoDiskSpeed;
	}
}

// Called every frame
void ARotoDisc::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FRotator rot = DiscPivotBoxComponent->GetRelativeRotation();
	rot.Pitch += Velocity * DeltaTime;
	DiscPivotBoxComponent->SetRelativeRotation(rot);
}

