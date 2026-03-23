// Code written by Fabio Pittaccio - 2026

#include "Events/EventManagerSubsystem.h"
#include "Events/EventListener.h"
#include "Events/EventUtils.h"
#include "Game/LogMessages.h"

// Broadcast the event to all listeners, both direct and interface-based.
void UEventManagerSubsystem::BroadcastEvent(const FEventData& EventData)
{	
	FString Message;
	
	// Notify direct delegate listeners
	if (OnEvent.IsBound())
	{
		Message = FString::Printf(TEXT("Event: %s from %s"),
			*UEnum::GetValueAsString(EventData.EventType), 
			*EventData.EntityID);
		
		OnEvent.Broadcast(EventData);
	}
	// Cannot notify
	else Message = FString::Printf(TEXT("No listeners for Event: %s from %s"), 
		*UEnum::GetValueAsString(EventData.EventType), 
		*EventData.EntityID);
	
	// Array snapshot to avoid issues if listeners modify the list during notification
	TArray<TWeakObjectPtr<UObject>> ListenersCopy = InterfaceListeners;
	
	// Notify interface-based listeners
	int32 ValidCount = 0; // Reset count
	for (const TWeakObjectPtr<UObject>& WeakObj : ListenersCopy)
	{
		// Get the current object int the list
		UObject* Obj = WeakObj.Get();
		
		// Clean up dead references
		if (!IsValid(Obj)) continue;
		
		// Check fot listeners with interface
		if (Obj->GetClass()->ImplementsInterface(UEventListener::StaticClass()))
		{
			IEventListener::Execute_OnListenEvent(Obj, EventData);
			ValidCount++;
		}
	}
	
	// Dead reference cleanup — separate from iteration to avoid modifying the array while iterating
	InterfaceListeners.RemoveAll([](const TWeakObjectPtr<UObject>& Ptr)
		{  return !Ptr.IsValid();  });
	
	// No interface listeners so log the complete message
	if (ValidCount == 0) Message += TEXT(" | No interface listeners");
	ULogMessages::OnScreen(Message);
}

// Register 
void UEventManagerSubsystem::RegisterListener(UObject* Listener)
{
	// Check if the listener is valid
	if (!IsValid(Listener)) return;
	
	// Check if the listener implements the interface
	if (!Listener->GetClass()->ImplementsInterface(UEventListener::StaticClass()))
	{
		ULogMessages::OnScreen(FString::Printf(TEXT(
			"RegisterListener: %s does not implement IEventListener."), *UEventUtils::GetEntityID(Listener)));
		return;
	}
	
	// Avoid duplicates
	const bool bAlreadyRegistered = InterfaceListeners.ContainsByPredicate(
		[Listener](const TWeakObjectPtr<UObject>& Ptr)
		{ return Ptr.Get() == Listener; });

	// If not already registered, add to the list
	if (!bAlreadyRegistered)
	{
		InterfaceListeners.Add(Listener);
		//ULogMessages::OnScreen(FString::Printf(TEXT("Registered listener: %s"), *UEventUtils::GetEntityID(Listener)));
	}
	else ULogMessages::OnScreen(FString::Printf(TEXT("Listener already registered: %s"), *UEventUtils::GetEntityID(Listener)));
	
	//if (InterfaceListeners.Num() == 0) ULogMessages::OnScreen("No listeners registered in the subsystem.");
}
