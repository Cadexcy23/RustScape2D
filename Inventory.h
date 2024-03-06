#pragma once
#ifndef Items
#include "Items.h"
#endif // !SDL
class Inventory {
public:
	
	static Items::item selectedItem;

	Items::item getInventorySlotItem(int slot);
	int getInventorySlotItemID(int slot);
	int getInventorySlotItemAmount(int slot);
	void setInventorySlotItem(int slot, Items::item item);
	void setInventorySlotItemAmount(int slot, int amount);
	bool addItemToInventory(Items::item item, int amount);

	bool checkForItem(Items::item item, int amount);

	bool removeItem(Items::item itesm, int amount);
	
};