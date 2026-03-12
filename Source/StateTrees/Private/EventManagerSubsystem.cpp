// Code written by Fabio Pittaccio - 2026

#include "EventManagerSubsystem.h"
#include "LogMessages.h"

// Take damage
void UEventManagerSubsystem::OnTakeDamageEvent(const float Damage, AActor* DamageCauser) const
{
	// Check if the damage causer is valid
	if (!DamageCauser) return;
	
	// Log a message
	ULogMessages::OnScreen(
		FString::Printf(TEXT("%f damage from %s"), Damage, *DamageCauser->GetName()));
	
	// Execute the broadcast
	OnTakeDamage.Broadcast(Damage, DamageCauser);	
}

// Entity killed
void UEventManagerSubsystem::OnEntityKilledEvent(AActor* EntityKilled) const
{
	// Check if the entity killed is valid
	if (!EntityKilled) return;
	
	// Log a message
	ULogMessages::OnScreen(
		FString::Printf(TEXT("%s is killed"), *EntityKilled->GetName()));
	
	// Execute the broadcast
	OnEntityKilled.Broadcast(EntityKilled);
}
