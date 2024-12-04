// Fill out your copyright notice in the Description page of Project Settings.


#include "RotoDisc.h"
#include "Components/BoxComponent.h"
#include "PaperSprite.h"
#include "PaperSpriteComponent.h"
#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"
#include "PlatformConstants.h"
#include "MarioCharacter.h"

// Sets default values
ARotoDisc::ARotoDisc() :
	Direction(ERotoDiscDirection::Clockwise),
	Rotation(0,0,0)
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
	DiscBoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ARotoDisc::OnOverlap);
	DiscBoxComponent->SetupAttachment(DiscPivotBoxComponent);

	SpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>("RotoDiscSpriteComponent");
	SpriteComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	SpriteComponent->SetCollisionProfileName("NoCollision");
	SpriteComponent->SetupAttachment(RootComponent);

	FlipbookComponent = CreateDefaultSubobject<UPaperFlipbookComponent>("RotoDiscFlipbookComponent");
	FlipbookComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	FlipbookComponent->SetCollisionProfileName("NoCollision");
	FlipbookComponent->SetupAttachment(DiscBoxComponent);

	Tags.Add("RotoDisc");

}

// Called when the game starts or when spawned
void ARotoDisc::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARotoDisc::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Direction == ERotoDiscDirection::Clockwise)
	{
		Rotation.Pitch -= PlatformConstants::RotoDiskSpeed * DeltaTime;

		if (Rotation.Pitch < -360)
		{
			Rotation.Pitch += 360;
		}
	}
	else if (Direction == ERotoDiscDirection::CounterClockwise)
	{
		Rotation.Pitch += PlatformConstants::RotoDiskSpeed * DeltaTime;

		if (Rotation.Pitch > 360)
		{
			Rotation.Pitch -= 360;
		}
	}
	DiscPivotBoxComponent->SetRelativeRotation(Rotation);
	FlipbookComponent->SetWorldRotation(FRotator(0, 0, 0));
}

void ARotoDisc::OnOverlap(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("MarioCharacter"))
	{
		Cast<AMarioCharacter>(OtherActor)->HandleDamage();
	}
}

