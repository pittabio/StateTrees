// Code written by Fabio Pittaccio - 2026

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * @brief Base C++ class for the game's Game Instance.
 * Handles early-game setup and exposes Blueprint-implementable events
 * for decoupled communication via the EventManagerSubsystem.
 */
UCLASS()
class STATETREES_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()

	// Called after the game world is ready. Used to bind subsystem events.
	virtual void OnStart() override;
	
public:
	// Called when an entity is killed. Implement in Blueprint to handle game logic (quests, saves, etc.).
	UFUNCTION(BlueprintImplementableEvent, Category = "Events")
	void OnEntityKilled(AActor* EntityKilled);
};
