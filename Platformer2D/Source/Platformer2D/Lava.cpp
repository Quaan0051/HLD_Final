// Fill out your copyright notice in the Description page of Project Settings.


#include "Lava.h"
#include "MarioCharacter.h"
#include "MarioPlayerState.h"
#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"
#include "Components/BoxComponent.h"

// Sets default values
ALava::ALava()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create the BoxComponent and set it as the Root component
	BoxComponent = CreateDefaultSubobject<UBoxComponent>("LavaBoxComponent");
	BoxComponent->SetCollisionProfileName("BlockAllDynamic");
	BoxComponent->SetNotifyRigidBodyCollision(true);
	BoxComponent->SetSimulatePhysics(false);
	BoxComponent->OnComponentHit.AddDynamic(this, &ALava::OnHit);
	RootComponent = BoxComponent;

	// Create the FlipbookComponent and attach it to the Root component
	FlipbookComponent = CreateDefaultSubobject<UPaperFlipbookComponent>("LavaFlipbook");
	FlipbookComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	FlipbookComponent->SetCollisionProfileName("NoCollision");
	FlipbookComponent->SetupAttachment(RootComponent);

	Tags.Add("Lava");

}

// Called when the game starts or when spawned
void ALava::BeginPlay()
{
	Super::BeginPlay();
	
}

void ALava::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor->ActorHasTag("MarioCharacter"))
	{
		Cast<AMarioCharacter>(OtherActor)->ApplyTransformChange(EMarioForm::Small, true);
		Cast<AMarioCharacter>(OtherActor)->HandleDamage(true);
	}
}
