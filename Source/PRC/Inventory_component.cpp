// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory_component.h"

// Sets default values for this component's properties
UInventory_component::UInventory_component()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInventory_component::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInventory_component::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UInventory_component::AddItem(const FString& ItemName)
{
	Items.Add(ItemName);
}

bool UInventory_component::RemoveItem(const FString& ItemName)
{
	return Items.RemoveSingle(ItemName) > 0;
}

int32 UInventory_component::CountItem(const FString& ItemName) const
{
	int32 Count = 0;
	for (const FString& Item : Items) {
		if (Item == ItemName) { Count++; }
	}
	return Count;
}

