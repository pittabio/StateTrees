// Code written by Fabio Pittaccio - 2026

#pragma once

#include "CoreMinimal.h"
#include "EventManagerSubsystem.h"
#include "UObject/Interface.h"
#include "EventListener.generated.h"

// Marker interface for objects that want to receive events from the EventManagerSubsystem
UINTERFACE()
class UEventListener : public UInterface
{
	GENERATED_BODY()
};

/**
 * @brief Interface that any listener can implement to receive FEventData
 * without binding directly to the multicast delegate.
 */
class STATETREES_API IEventListener
{
	GENERATED_BODY()

public:
	// Called by the EventManagerSubsystem when an event is broadcast
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void OnListenEvent(const FEventData& Data);
};
