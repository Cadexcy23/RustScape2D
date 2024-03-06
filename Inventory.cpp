#include "Inventory.h"
#include "Items.h"
#include "Chat.h"


Items::item Inventory::selectedItem = Items::empty;

struct inventorySlot {
	Items::item item;
	int amount;
};
inventorySlot
inventorySlot1,
inventorySlot2,
inventorySlot3,
inventorySlot4,
inventorySlot5,
inventorySlot6,
inventorySlot7,
inventorySlot8,
inventorySlot9,
inventorySlot10,
inventorySlot11,
inventorySlot12,
inventorySlot13,
inventorySlot14,
inventorySlot15,
inventorySlot16,
inventorySlot17,
inventorySlot18,
inventorySlot19,
inventorySlot20,
inventorySlot21,
inventorySlot22,
inventorySlot23,
inventorySlot24,
inventorySlot25,
inventorySlot26,
inventorySlot27,
inventorySlot28;



Items::item Inventory::getInventorySlotItem(int slot)
{
	Items Items;
	switch (slot)
	{
	case 0:
		return Items::empty;
		break;
	case 1:
		return inventorySlot1.item;
		break;
	case 2:
		return inventorySlot2.item;
		break;
	case 3:
		return inventorySlot3.item;
		break;
	case 4:
		return inventorySlot4.item;
		break;
	case 5:
		return inventorySlot5.item;
		break;
	case 6:
		return inventorySlot6.item;
		break;
	case 7:
		return inventorySlot7.item;
		break;
	case 8:
		return inventorySlot8.item;
		break;
	case 9:
		return inventorySlot9.item;
		break;
	case 10:
		return inventorySlot10.item;
		break;
	case 11:
		return inventorySlot11.item;
		break;
	case 12:
		return inventorySlot12.item;
		break;
	case 13:
		return inventorySlot13.item;
		break;
	case 14:
		return inventorySlot14.item;
		break;
	case 15:
		return inventorySlot15.item;
		break;
	case 16:
		return inventorySlot16.item;
		break;
	case 17:
		return inventorySlot17.item;
		break;
	case 18:
		return inventorySlot18.item;
		break;
	case 19:
		return inventorySlot19.item;
		break;
	case 20:
		return inventorySlot20.item;
		break;
	case 21:
		return inventorySlot21.item;
		break;
	case 22:
		return inventorySlot22.item;
		break;
	case 23:
		return inventorySlot23.item;
		break;
	case 24:
		return inventorySlot24.item;
		break;
	case 25:
		return inventorySlot25.item;
		break;
	case 26:
		return inventorySlot26.item;
		break;
	case 27:
		return inventorySlot27.item;
		break;
	case 28:
		return inventorySlot28.item;
		break;
	}
}

int Inventory::getInventorySlotItemID(int slot)
{
	switch (slot)
	{
	case 0:
		return 0;
		break;
	case 1:
		return inventorySlot1.item.id;
		break;
	case 2:
		return inventorySlot2.item.id;
		break;
	case 3:
		return inventorySlot3.item.id;
		break;
	case 4:
		return inventorySlot4.item.id;
		break;
	case 5:
		return inventorySlot5.item.id;
		break;
	case 6:
		return inventorySlot6.item.id;
		break;
	case 7:
		return inventorySlot7.item.id;
		break;
	case 8:
		return inventorySlot8.item.id;
		break;
	case 9:
		return inventorySlot9.item.id;
		break;
	case 10:
		return inventorySlot10.item.id;
		break;
	case 11:
		return inventorySlot11.item.id;
		break;
	case 12:
		return inventorySlot12.item.id;
		break;
	case 13:
		return inventorySlot13.item.id;
		break;
	case 14:
		return inventorySlot14.item.id;
		break;
	case 15:
		return inventorySlot15.item.id;
		break;
	case 16:
		return inventorySlot16.item.id;
		break;
	case 17:
		return inventorySlot17.item.id;
		break;
	case 18:
		return inventorySlot18.item.id;
		break;
	case 19:
		return inventorySlot19.item.id;
		break;
	case 20:
		return inventorySlot20.item.id;
		break;
	case 21:
		return inventorySlot21.item.id;
		break;
	case 22:
		return inventorySlot22.item.id;
		break;
	case 23:
		return inventorySlot23.item.id;
		break;
	case 24:
		return inventorySlot24.item.id;
		break;
	case 25:
		return inventorySlot25.item.id;
		break;
	case 26:
		return inventorySlot26.item.id;
		break;
	case 27:
		return inventorySlot27.item.id;
		break;
	case 28:
		return inventorySlot28.item.id;
		break;
	}
}

int Inventory::getInventorySlotItemAmount(int slot)
{
	switch (slot)
	{
	case 0:
		return 0;
		break;
	case 1:
		return inventorySlot1.amount;
		break;
	case 2:
		return inventorySlot2.amount;
		break;
	case 3:
		return inventorySlot3.amount;
		break;
	case 4:
		return inventorySlot4.amount;
		break;
	case 5:
		return inventorySlot5.amount;
		break;
	case 6:
		return inventorySlot6.amount;
		break;
	case 7:
		return inventorySlot7.amount;
		break;
	case 8:
		return inventorySlot8.amount;
		break;
	case 9:
		return inventorySlot9.amount;
		break;
	case 10:
		return inventorySlot10.amount;
		break;
	case 11:
		return inventorySlot11.amount;
		break;
	case 12:
		return inventorySlot12.amount;
		break;
	case 13:
		return inventorySlot13.amount;
		break;
	case 14:
		return inventorySlot14.amount;
		break;
	case 15:
		return inventorySlot15.amount;
		break;
	case 16:
		return inventorySlot16.amount;
		break;
	case 17:
		return inventorySlot17.amount;
		break;
	case 18:
		return inventorySlot18.amount;
		break;
	case 19:
		return inventorySlot19.amount;
		break;
	case 20:
		return inventorySlot20.amount;
		break;
	case 21:
		return inventorySlot21.amount;
		break;
	case 22:
		return inventorySlot22.amount;
		break;
	case 23:
		return inventorySlot23.amount;
		break;
	case 24:
		return inventorySlot24.amount;
		break;
	case 25:
		return inventorySlot25.amount;
		break;
	case 26:
		return inventorySlot26.amount;
		break;
	case 27:
		return inventorySlot27.amount;
		break;
	case 28:
		return inventorySlot28.amount;
		break;
	}
}

void Inventory::setInventorySlotItem(int slot, Items::item item)
{
	switch (slot)
	{
	case 1:
		inventorySlot1.item = item;
		break;
	case 2:
		inventorySlot2.item = item;
		break;
	case 3:
		inventorySlot3.item = item;
		break;
	case 4:
		inventorySlot4.item = item;
		break;
	case 5:
		inventorySlot5.item = item;
		break;
	case 6:
		inventorySlot6.item = item;
		break;
	case 7:
		inventorySlot7.item = item;
		break;
	case 8:
		inventorySlot8.item = item;
		break;
	case 9:
		inventorySlot9.item = item;
		break;
	case 10:
		inventorySlot10.item = item;
		break;
	case 11:
		inventorySlot11.item = item;
		break;
	case 12:
		inventorySlot12.item = item;
		break;
	case 13:
		inventorySlot13.item = item;
		break;
	case 14:
		inventorySlot14.item = item;
		break;
	case 15:
		inventorySlot15.item = item;
		break;
	case 16:
		inventorySlot16.item = item;
		break;
	case 17:
		inventorySlot17.item = item;
		break;
	case 18:
		inventorySlot18.item = item;
		break;
	case 19:
		inventorySlot19.item = item;
		break;
	case 20:
		inventorySlot20.item = item;
		break;
	case 21:
		inventorySlot21.item = item;
		break;
	case 22:
		inventorySlot22.item = item;
		break;
	case 23:
		inventorySlot23.item = item;
		break;
	case 24:
		inventorySlot24.item = item;
		break;
	case 25:
		inventorySlot25.item = item;
		break;
	case 26:
		inventorySlot26.item = item;
		break;
	case 27:
		inventorySlot27.item = item;
		break;
	case 28:
		inventorySlot28.item = item;
		break;
	}
}

void Inventory::setInventorySlotItemAmount(int slot, int amount)
{
	switch (slot)
	{
	case 1:
		inventorySlot1.amount = amount;
		break;
	case 2:
		inventorySlot2.amount = amount;
		break;
	case 3:
		inventorySlot3.amount = amount;
		break;
	case 4:
		inventorySlot4.amount = amount;
		break;
	case 5:
		inventorySlot5.amount = amount;
		break;
	case 6:
		inventorySlot6.amount = amount;
		break;
	case 7:
		inventorySlot7.amount = amount;
		break;
	case 8:
		inventorySlot8.amount = amount;
		break;
	case 9:
		inventorySlot9.amount = amount;
		break;
	case 10:
		inventorySlot10.amount = amount;
		break;
	case 11:
		inventorySlot11.amount = amount;
		break;
	case 12:
		inventorySlot12.amount = amount;
		break;
	case 13:
		inventorySlot13.amount = amount;
		break;
	case 14:
		inventorySlot14.amount = amount;
		break;
	case 15:
		inventorySlot15.amount = amount;
		break;
	case 16:
		inventorySlot16.amount = amount;
		break;
	case 17:
		inventorySlot17.amount = amount;
		break;
	case 18:
		inventorySlot18.amount = amount;
		break;
	case 19:
		inventorySlot19.amount = amount;
		break;
	case 20:
		inventorySlot20.amount = amount;
		break;
	case 21:
		inventorySlot21.amount = amount;
		break;
	case 22:
		inventorySlot22.amount = amount;
		break;
	case 23:
		inventorySlot23.amount = amount;
		break;
	case 24:
		inventorySlot24.amount = amount;
		break;
	case 25:
		inventorySlot25.amount = amount;
		break;
	case 26:
		inventorySlot26.amount = amount;
		break;
	case 27:
		inventorySlot27.amount = amount;
		break;
	case 28:
		inventorySlot28.amount = amount;
		break;
	}
}

bool Inventory::addItemToInventory(Items::item item, int amount)
{
	Inventory Inventory;
	Items Items;
	Chat Chat;
	int placed = 0;
	if (item.stackable)
	{
		for (int a = 1; a < 29; a++)
		{
			if (Inventory.getInventorySlotItemID(a) == item.id)
			{
				if (Inventory.getInventorySlotItemAmount(a) + amount > 999999999)
				{
					Chat.sendMessage("you can't fit that many " + item.name + "s");
					//printf("you don't have enough room for that many! \n");// put this in chat
					return false;
				}
				Inventory.setInventorySlotItemAmount(a, Inventory.getInventorySlotItemAmount(a) + amount);
				//printf("amount placed: %i \n", amount);
				//printf("returned true \n");
				return true;
			}
		}
		for (int a = 1; a < 29; a++)
		{
			if (Inventory.getInventorySlotItemID(a) == 0 || Inventory.getInventorySlotItemAmount(a) == 0)
			{
				Inventory.setInventorySlotItem(a, item);
				Inventory.setInventorySlotItemAmount(a, Inventory.getInventorySlotItemAmount(a) + amount);
				//printf("amount placed: %i \n", amount);
				//printf("returned true \n");
				return true;
			}
		}
	}
	for (int a = 1; a < 29; a++)
	{
		if (Inventory.getInventorySlotItemID(a) == 0 || Inventory.getInventorySlotItemAmount(a) == 0)
		{
			int amountPlaced = 0;
			Inventory.setInventorySlotItem(a, item);
			Inventory.setInventorySlotItemAmount(a, 1);
			amountPlaced++;
			
			//printf("amount placed: %i \n", amountPlaced);
			placed += amountPlaced;
		}
		if (placed >= amount)
		{
			//printf("total placed: %i \n", placed);
			//printf("returned true \n");
			return true;
		}
	}
	//printf("total placed: %i \n", placed);
	//printf("returned false \n");
	Chat.sendMessage("Your inventory is full.");
	return false;
}

bool Inventory::checkForItem(Items::item item, int amount)
{
	Inventory Inventory;
	Items Items;
	int found = 0;
	for (int a = 1; a < 29; a++)
	{
		if (Inventory.getInventorySlotItemID(a) == item.id)
		{
			found += Inventory.getInventorySlotItemAmount(a);
			//printf("amount found: %i \n", found);
		}
	}
	if (found >= amount)
	{
		//printf("returned true, amount found: %i\n", found);
		return true;
	}
	//printf("returned false, amount found: %i\n", found);
	return false;
}

bool Inventory::removeItem(Items::item item, int amount)
{
	Inventory Inventory;
	Items Items;
	int found = 0;
	for (int a = 1; a < 29; a++)
	{
		if (Inventory.getInventorySlotItemID(a) == item.id)
		{
			int amountTaken = 0;
			for (int b = 0; b < amount - found; b++)
			{
				if (Inventory.getInventorySlotItemAmount(a) > 0)
				{
					Inventory.setInventorySlotItemAmount(a, Inventory.getInventorySlotItemAmount(a) - 1);
					amountTaken++;
				}
			}
			//printf("amount found/removed: %i \n", amountTaken);
			found += amountTaken;

			if (Inventory.getInventorySlotItemAmount(a) == 0)
			{
				Inventory.setInventorySlotItem(a, Items.getItemFromID(0));
			}
		}
		if (found >= amount)
		{
			//printf("total found: %i \n", found);
			//printf("returned true \n");
			return true;
		}
	}
	//printf("total found: %i \n", found);
	//printf("returned false \n");
	return false;
}