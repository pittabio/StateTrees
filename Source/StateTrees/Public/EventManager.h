// Code written by Fabio Pittaccio - 2026

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EventManager.generated.h"

// Declare events
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEntityKilled);

/**
 * @brief A GameInstanceSubsystem acting as a global event bus to facilitate 
 * decoupled communication, minimizing hard references and casting.
 */
UCLASS()
class STATETREES_API UEventManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Events")
	FOnEntityKilled OnEntityKilled;
};
