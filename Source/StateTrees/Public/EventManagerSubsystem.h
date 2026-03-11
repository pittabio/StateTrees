// Code written by Fabio Pittaccio - 2026

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EventManagerSubsystem.generated.h"

// ===== DELEGATES ===== //

// Delegate for damage events. 
// NOTE: I used the internal Unreal system, so this delegate is no longer used, but still available
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTakeDamage, float, Damage, AActor*, DamageCauser);

// Delegate for entity death events.
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEntityKilled, AActor*, EntityKilled);

/**
 * @brief A GameInstanceSubsystem acting as a global event bus to facilitate 
 * decoupled communication, minimizing hard references and casting.
 */
UCLASS(Blueprintable)
class STATETREES_API UEventManagerSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	
	// ===== EVENTS ===== //
	
	// Event triggered when an entity takes damage, passing the damage amount.
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Events|Bind")
	FOnTakeDamage OnTakeDamage;
	
	// Event triggered when an entity is killed, passing the entity actor.
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Events|Bind")
	FOnEntityKilled OnEntityKilled;
	
	// ===== DISPATCHERS ===== //
	
	/** Broadcasts the OnTakeDamage event to all listeners. Call this when any entity receives damage.
	 * @param Damage The amount of damage dealt to the entity.
	 * @param DamageCauser Reference to the Actor that causes the damage.
	 */
	UFUNCTION(BlueprintCallable, Category = "Events|Publishers", meta = (DisplayName = "Broadcast Take Damage"))
	void OnTakeDamageEvent(float Damage, AActor* DamageCauser = nullptr) const;
	
	/** Broadcasts the OnEntityKilled event. Useful for updating Quest Systems or State Tree Tasks.
	 * @param EntityKilled Reference to the Actor that has been killed.
	 */
	UFUNCTION(BlueprintCallable, Category = "Events|Publishers", meta = (DisplayName = "Broadcast Entity Killed"))
	void OnEntityKilledEvent(AActor* EntityKilled) const;
};
