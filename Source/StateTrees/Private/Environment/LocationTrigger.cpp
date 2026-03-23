// Code written by Fabio Pittaccio - 2026

#include "Environment/LocationTrigger.h"

// Sets default values
ALocationTrigger::ALocationTrigger()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	// Create the text and attach the root component
	TextComponent = CreateDefaultSubobject<UTextRenderComponent>("Text");
	TextComponent->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	
	// Visibility
	AActor::SetActorHiddenInGame(false);
}
