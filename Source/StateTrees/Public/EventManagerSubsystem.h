// Code written by Fabio Pittaccio - 2026

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EventManagerSubsystem.generated.h"

// Declare events
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEntityKilled);

/**
 * @brief A GameInstanceSubsystem acting as a global event bus to facilitate 
 * decoupled communication, minimizing hard references and casting.
 */
UCLASS(Blueprintable)
class STATETREES_API UEventManagerSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Events")
	FOnEntityKilled OnEntityKilled;
	
	UEventManagerSubsystem();
};
