// Code written by Fabio Pittaccio - 2026

#include "MyGameInstance.h"
#include "EventManagerSubsystem.h"

// Bind subsystem events once the world is ready.

void UMyGameInstance::OnStart()
{
	Super::OnStart();

	// Subscribe to the EntityKilled event to be notified when an enemy or entity dies.
	if (UEventManagerSubsystem* EventManager = GetSubsystem<UEventManagerSubsystem>())
		EventManager->OnEntityKilled.AddDynamic(this, &UMyGameInstance::OnEntityKilled);
}
