// Code written by Fabio Pittaccio - 2026

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EventManagerSubsystem.generated.h"

// Describes what kind of event occurred
UENUM(BlueprintType)
enum class EEventType : uint8
{
	Loaded,		// Any loaded into the world (e.g.: from a save file)
	Act,		// Any discrete world action (e.g.: enemy killed, a door opened)
	Updated,	// Any update to an ongoing event (e.g.: progress on a timed event)
	Succeeded,	// Any successful conclusion (e.g.: a quest completed)
	Failed,		// Any failure condition (e.g.: a timed event expires without success)
	// ...
};

// Payload carried by every event broadcast through the bus
USTRUCT(BlueprintType)
struct FEventData
{
	GENERATED_BODY()
	
	// The entity ID related to the event (e.g.: the actor that caused it, or the one most relevant to it)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EventData")
	FString EntityID;
	
	// The type of event (e.g.: loaded, act, succeeded, etc.)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EventData")
	EEventType EventType;
	
	// The object responsible for the event (e.g.: the actor that caused it, or the one most relevant to it)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EventData")
	UObject* Instigator;
};

// Raw delegate — used by Blueprint/C++ callers who bind directly (no interface required)
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEvent, const FEventData&, Data);

/**
 * @brief A GameInstanceSubsystem acting as a global event bus to facilitate
 * decoupled communication, minimizing hard references and casting.
 *
 * Two binding strategies are supported:
 *   1. Direct delegate  — call OnEvent.AddDynamic() yourself (Blueprint-friendly).
 *   2. IEventListener   — call RegisterListener(); the subsystem dispatches via
 *                         the interface, so the object never needs a hard ref here.
 */
UCLASS(Blueprintable)
class STATETREES_API UEventManagerSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:
	
	// Bind here if you do NOT implement IEventListener
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Events")
	FOnEvent OnEvent;
	
	// Broadcasts an event to all direct delegate listeners and all IEventListener implementers
	UFUNCTION(BlueprintCallable, Category = "Events", meta = (DisplayName = "Broadcast Event"))
	void BroadcastEvent(const FEventData& EventData);
	
	// Registers an object that implements IEventListener to receive events via the interface
	UFUNCTION(BlueprintCallable, Category = "Events")
	void RegisterListener(UObject* Listener);
	
private:
	
	// List of objects that implement IEventListener and want to receive events
	UPROPERTY()
	TArray<TWeakObjectPtr<UObject>> InterfaceListeners;
};
