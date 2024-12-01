// Fill out your copyright notice in the Description page of Project Settings.


#include "PoofEffect.h"
#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"

// Sets default values
APoofEffect::APoofEffect()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	FlipbookComponent = CreateDefaultSubobject<UPaperFlipbookComponent>("PoofEffectFlipbook");
	FlipbookComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	FlipbookComponent->SetCollisionProfileName("NoCollision");
	FlipbookComponent->SetLooping(false);
	FlipbookComponent->OnFinishedPlaying.AddDynamic(this, &APoofEffect::OnFinishedPlaying);
	RootComponent = FlipbookComponent;

	Tags.Add("PoofEffect");
}

// Called when the game starts or when spawned
void APoofEffect::BeginPlay()
{
	Super::BeginPlay();
	
}

void APoofEffect::OnFinishedPlaying()
{
	Destroy();
}

