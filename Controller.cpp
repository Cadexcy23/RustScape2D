
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "Controller.h"
#include "Maps.h"
#include "Logic.h"
#include "Menus.h"
#include "Chat.h"
#include "Inventory.h"
#include "Shop.h"
#include "Player.h"
#include "Artist.h"

//Keeps track if game is running
bool quit = false;
//Keeps track of dragging 
bool mouseDragged = false;
bool itemSelected = false;
int selectedItemsSlot = 1;
//Event handler
SDL_Event e;

bool Controller::isRunning()
{
	return !quit;
}



void Controller::controller()
{
	//Declare classes
	Logic Logic;
	Maps Maps;
	Menus Menus;
	Chat Chat;
	Inventory Inventory;
	Items Items;
	Shop Shop;
	Player Player;
	Artist Artist;
	//Handle events on queue
	if (SDL_PollEvent(&e) != 0)
	{
		//printf("input detected: %i\n", e.type);
		//User requests quit
		if (e.type == SDL_QUIT)
		{
			quit = true;
		}

		int x, y;
		//MOUSE
		Uint32 mouseState = SDL_GetMouseState(&x, &y);
		//User clicks
		if (e.type == SDL_MOUSEBUTTONDOWN)
		{
			bool canMove = true;

			//LEFT CLICK
			if (mouseState == 1)
			{
				//printf("Mouse X: %i Mouse Y: %i\n", x, y);
				
				//furnace
				if (Menus.getActivityType() == Menus::ACTIVITY_FURNACE)
				{
					if (x >= 611 && x <= 643 && y >= 113 && y <= 145)
					{
						Menus.setActivityType(Menus::ACTIVITY_NONE);
						Menus.setActivityState(0);
						//printf("clicked on exit\n");
					}
					if (Menus.getActivityState() == 1)
					{
						if (x >= 83 && x <= 147 && y >= 511 && y <= 575)
						{
							if (Inventory.checkForItem(Items.getItemFromID(Items::ITEM_COPPER_ORE), 1) && Inventory.checkForItem(Items.getItemFromID(Items::ITEM_TIN_ORE), 1))
							{
								Inventory.removeItem(Items.getItemFromID(Items::ITEM_COPPER_ORE), 1);
								Inventory.removeItem(Items.getItemFromID(Items::ITEM_TIN_ORE), 1);
								Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_BRONZE_BAR), 1);
							}
							//printf("clicked on bronze\n");
						}
						if (x >= 153 && x <= 217 && y >= 511 && y <= 575)
						{
							if (Inventory.checkForItem(Items.getItemFromID(Items::ITEM_IRON_ORE), 1))
							{
								Inventory.removeItem(Items.getItemFromID(Items::ITEM_IRON_ORE), 1);
								Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_IRON_BAR), 1);
							}
							//printf("clicked on iron\n");
						}
						if (x >= 223 && x <= 287 && y >= 511 && y <= 575)
						{
							if (Inventory.checkForItem(Items.getItemFromID(Items::ITEM_IRON_ORE), 1) && Inventory.checkForItem(Items.getItemFromID(Items::ITEM_COAL_ORE), 1))
							{
								Inventory.removeItem(Items.getItemFromID(Items::ITEM_IRON_ORE), 1);
								Inventory.removeItem(Items.getItemFromID(Items::ITEM_COAL_ORE), 1);
								Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_STEEL_BAR), 1);
							}
							//printf("clicked on steel\n");
						}
						if (x >= 293 && x <= 357 && y >= 511 && y <= 575)
						{
							if (Inventory.checkForItem(Items.getItemFromID(Items::ITEM_MITHRIL_ORE), 1) && Inventory.checkForItem(Items.getItemFromID(Items::ITEM_COAL_ORE), 4))
							{
								Inventory.removeItem(Items.getItemFromID(Items::ITEM_MITHRIL_ORE), 1);
								Inventory.removeItem(Items.getItemFromID(Items::ITEM_COAL_ORE), 4);
								Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_MITHRIL_BAR), 1);
							}
							//printf("clicked on mithril\n");
						}
						if (x >= 363 && x <= 427 && y >= 511 && y <= 575)
						{
							if (Inventory.checkForItem(Items.getItemFromID(Items::ITEM_ADAMANTITE_ORE), 1) && Inventory.checkForItem(Items.getItemFromID(Items::ITEM_COAL_ORE), 6))
							{
								Inventory.removeItem(Items.getItemFromID(Items::ITEM_ADAMANTITE_ORE), 1);
								Inventory.removeItem(Items.getItemFromID(Items::ITEM_COAL_ORE), 6);
								Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_ADAMANTIUM_BAR), 1);
							}
							//printf("clicked on addy\n");
						}
						if (x >= 433 && x <= 497 && y >= 511 && y <= 575)
						{
							if (Inventory.checkForItem(Items.getItemFromID(Items::ITEM_RUNITE_ORE), 1) && Inventory.checkForItem(Items.getItemFromID(Items::ITEM_COAL_ORE), 8))
							{
								Inventory.removeItem(Items.getItemFromID(Items::ITEM_RUNITE_ORE), 1);
								Inventory.removeItem(Items.getItemFromID(Items::ITEM_COAL_ORE), 8);
								Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_RUNE_BAR), 1);
							}
							//printf("clicked on rune\n");
						}
						if (x >= 503 && x <= 567 && y >= 511 && y <= 575)
						{
							if (Inventory.checkForItem(Items.getItemFromID(Items::ITEM_SILVER_ORE), 1))
							{
								Inventory.removeItem(Items.getItemFromID(Items::ITEM_SILVER_ORE), 1);
								Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_SILVER_BAR), 1);
							}
							//printf("clicked on silver\n");
						}
						if (x >= 573 && x <= 637 && y >= 511 && y <= 575)
						{
							if (Inventory.checkForItem(Items.getItemFromID(Items::ITEM_GOLD_ORE), 1))
							{
								Inventory.removeItem(Items.getItemFromID(Items::ITEM_GOLD_ORE), 1);
								Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_GOLD_BAR), 1);
							}
							//printf("clicked on gold\n");
						}
					}
					if (Menus.getActivityState() == 0)
					{
						if (x >= 83 && x <= 147 && y >= 511 && y <= 575)
						{
							Menus.setActivityState(1);
							//printf("clicked on bars\n");
						}
						if (x >= 153 && x <= 217 && y >= 511 && y <= 575)
						{
							Menus.setActivityState(2);
							//printf("clicked on jewlery\n");
						}
					}

					if (x >= 72 && x <= 648 && y >= 108 && y <= 612)
					{
						canMove = false;
						//printf("clicked in\n");
					}
				}
				//anvil
				if (Menus.getActivityType() == Menus::ACTIVITY_ANVIL)
				{
					if (x >= 611 && x <= 643 && y >= 113 && y <= 145)
					{
						Menus.setActivityType(Menus::ACTIVITY_NONE);
						Menus.setActivityState(0);
						//printf("clicked on exit\n");
					}

					//bronze
					if (Menus.getActivityState() == 1)
					{
						if (x >= 83 && x <= 147 && y >= 187 && y <= 251)
						{
							if (Inventory.checkForItem(Items.getItemFromID(Items::ITEM_BRONZE_BAR), 1))
							{
								Inventory.removeItem(Items.getItemFromID(Items::ITEM_BRONZE_BAR), 1);
								Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_BRONZE_DAGGER), 1);
							}
							else
							{
								Chat.sendMessage("You need a Bronze Bar");
							}
						}
						if (x >= 153 && x <= 217 && y >= 187 && y <= 251)
						{
							if (Inventory.checkForItem(Items.getItemFromID(Items::ITEM_BRONZE_BAR), 2))
							{
								Inventory.removeItem(Items.getItemFromID(Items::ITEM_BRONZE_BAR), 2);
								Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_BRONZE_SWORD), 1);
							}
							else
							{
								Chat.sendMessage("You need 2 Bronze Bars");
							}
						}
					}
					//iron
					if (Menus.getActivityState() == 2)
					{
						if (x >= 83 && x <= 147 && y >= 187 && y <= 251)
						{
							if (Inventory.checkForItem(Items.getItemFromID(Items::ITEM_IRON_BAR), 1))
							{
								Inventory.removeItem(Items.getItemFromID(Items::ITEM_IRON_BAR), 1);
								Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_IRON_DAGGER), 1);
							}
							else
							{
								Chat.sendMessage("You need an Iron Bar");
							}
						}
						if (x >= 153 && x <= 217 && y >= 187 && y <= 251)
						{
							if (Inventory.checkForItem(Items.getItemFromID(Items::ITEM_IRON_BAR), 2))
							{
								Inventory.removeItem(Items.getItemFromID(Items::ITEM_IRON_BAR), 2);
								Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_IRON_SWORD), 1);
							}
							else
							{
								Chat.sendMessage("You need 2 Iron Bars");
							}
						}
					}
					//steel
					if (Menus.getActivityState() == 3)
					{
						if (x >= 83 && x <= 147 && y >= 187 && y <= 251)
						{
							if (Inventory.checkForItem(Items.getItemFromID(Items::ITEM_STEEL_BAR), 1))
							{
								Inventory.removeItem(Items.getItemFromID(Items::ITEM_STEEL_BAR), 1);
								Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_STEEL_DAGGER), 1);
							}
							else
							{
								Chat.sendMessage("You need a Steel Bar");
							}
						}
						if (x >= 153 && x <= 217 && y >= 187 && y <= 251)
						{
							if (Inventory.checkForItem(Items.getItemFromID(Items::ITEM_STEEL_BAR), 2))
							{
								Inventory.removeItem(Items.getItemFromID(Items::ITEM_STEEL_BAR), 2);
								Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_STEEL_SWORD), 1);
							}
							else
							{
								Chat.sendMessage("You need 2 Steel Bars");
							}
						}
					}
					//mithril
					if (Menus.getActivityState() == 4)
					{
						if (x >= 83 && x <= 147 && y >= 187 && y <= 251)
						{
							if (Inventory.checkForItem(Items.getItemFromID(Items::ITEM_MITHRIL_BAR), 1))
							{
								Inventory.removeItem(Items.getItemFromID(Items::ITEM_MITHRIL_BAR), 1);
								Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_MITHRIL_DAGGER), 1);
							}
							else
							{
								Chat.sendMessage("You need a Mithril Bar");
							}
						}
						if (x >= 153 && x <= 217 && y >= 187 && y <= 251)
						{
							if (Inventory.checkForItem(Items.getItemFromID(Items::ITEM_MITHRIL_BAR), 2))
							{
								Inventory.removeItem(Items.getItemFromID(Items::ITEM_MITHRIL_BAR), 2);
								Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_MITHRIL_SWORD), 1);
							}
							else
							{
								Chat.sendMessage("You need 2 Mithril Bars");
							}
						}
					}
					//addy
					if (Menus.getActivityState() == 5)
					{
						if (x >= 83 && x <= 147 && y >= 187 && y <= 251)
						{
							if (Inventory.checkForItem(Items.getItemFromID(Items::ITEM_ADAMANTIUM_BAR), 1))
							{
								Inventory.removeItem(Items.getItemFromID(Items::ITEM_ADAMANTIUM_BAR), 1);
								Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_ADAMANTIUM_DAGGER), 1);
							}
							else
							{
								Chat.sendMessage("You need an Adamantium Bar");
							}
						}
						if (x >= 153 && x <= 217 && y >= 187 && y <= 251)
						{
							if (Inventory.checkForItem(Items.getItemFromID(Items::ITEM_ADAMANTIUM_BAR), 2))
							{
								Inventory.removeItem(Items.getItemFromID(Items::ITEM_ADAMANTIUM_BAR), 2);
								Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_ADAMANTIUM_SWORD), 1);
							}
							else
							{
								Chat.sendMessage("You need 2 Adamantium Bars");
							}
						}
					}
					//rune
					if (Menus.getActivityState() == 6)
					{
						if (x >= 83 && x <= 147 && y >= 187 && y <= 251)
						{
							if (Inventory.checkForItem(Items.getItemFromID(Items::ITEM_RUNE_BAR), 1))
							{
								Inventory.removeItem(Items.getItemFromID(Items::ITEM_RUNE_BAR), 1);
								Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_RUNE_DAGGER), 1);
							}
							else
							{
								Chat.sendMessage("You need a Rune Bar");
							}
						}
						if (x >= 153 && x <= 217 && y >= 187 && y <= 251)
						{
							if (Inventory.checkForItem(Items.getItemFromID(Items::ITEM_RUNE_BAR), 2))
							{
								Inventory.removeItem(Items.getItemFromID(Items::ITEM_RUNE_BAR), 2);
								Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_RUNE_SWORD), 1);
							}
							else
							{
								Chat.sendMessage("You need 2 Rune Bars");
							}
						}
					}
					if (Menus.getActivityState() == 0)
					{
						if (x >= 83 && x <= 147 && y >= 187 && y <= 251)
							Menus.setActivityState(1);
						if (x >= 153 && x <= 217 && y >= 187 && y <= 251)
							Menus.setActivityState(2);
						if (x >= 223 && x <= 287 && y >= 187 && y <= 251)
							Menus.setActivityState(3);
						if (x >= 293 && x <= 357 && y >= 187 && y <= 251)
							Menus.setActivityState(4);
						if (x >= 363 && x <= 427 && y >= 187 && y <= 251)
							Menus.setActivityState(5);
						if (x >= 433 && x <= 497 && y >= 187 && y <= 251)
							Menus.setActivityState(6);
						if (x >= 503 && x <= 567 && y >= 187 && y <= 251)
							Menus.setActivityState(7);
						if (x >= 573 && x <= 637 && y >= 187 && y <= 251)
							Menus.setActivityState(8);
					}
					if (x >= 72 && x <= 648 && y >= 108 && y <= 612)
					{
						canMove = false;
						//printf("clicked in\n");
					}
				}
				//shop
				if (Menus.getActivityType() == Menus::ACTIVITY_SHOP)
				{
					if (x >= 611 && x <= 643 && y >= 113 && y <= 145)
					{
						Menus.setActivityType(Menus::ACTIVITY_NONE);
						Menus.setActivityState(0);
						//printf("clicked on exit\n");
					}
					//items
					for (int a = 0; a < 8; a++)
					{
						if (x >= 83 + (a * 70) && x <= 147 + (a * 70) && y >= 187 && y <= 251 && Shop::currentShop->getItem(a + 1).id != 0)
						{
							Chat.sendMessage(Shop::currentShop->getItem(a + 1).name + "s are " + std::to_string(Shop::currentShop->getItem(a + 1).price) + " each");
						}
					}
					for (int a = 0; a < 8; a++)
					{
						if (x >= 83 + (a * 70) && x <= 147 + (a * 70) && y >= 257 && y <= 321 && Shop::currentShop->getItem(a + 9).id != 0)
						{
							Chat.sendMessage(Shop::currentShop->getItem(a + 9).name + "s are " + std::to_string(Shop::currentShop->getItem(a + 9).price) + " each");
						}
					}
					for (int a = 0; a < 8; a++)
					{
						if (x >= 83 + (a * 70) && x <= 147 + (a * 70) && y >= 327 && y <= 391 && Shop::currentShop->getItem(a + 17).id != 0)
						{
							Chat.sendMessage(Shop::currentShop->getItem(a + 17).name + "s are " + std::to_string(Shop::currentShop->getItem(a + 17).price) + " each");
						}
					}
					for (int a = 0; a < 8; a++)
					{
						if (x >= 83 + (a * 70) && x <= 147 + (a * 70) && y >= 397 && y <= 461 && Shop::currentShop->getItem(a + 25).id != 0)
						{
							Chat.sendMessage(Shop::currentShop->getItem(a + 25).name + "s are " + std::to_string(Shop::currentShop->getItem(a + 25).price) + " each");
						}
					}
					for (int a = 0; a < 8; a++)
					{
						if (x >= 83 + (a * 70) && x <= 147 + (a * 70) && y >= 467 && y <= 531 && Shop::currentShop->getItem(a + 33).id != 0)
						{
							Chat.sendMessage(Shop::currentShop->getItem(a + 33).name + "s are " + std::to_string(Shop::currentShop->getItem(a + 33).price) + " each");
						}
					}
					for (int a = 0; a < 8; a++)
					{
						if (x >= 83 + (a * 70) && x <= 147 + (a * 70) && y >= 537 && y <= 601 && Shop::currentShop->getItem(a + 41).id != 0)
						{
							Chat.sendMessage(Shop::currentShop->getItem(a + 41).name + "s are " + std::to_string(Shop::currentShop->getItem(a + 41).price) + " each");
						}
					}
					//inventory
					if (Menus.getSidebarState() == Menus::SIDEBAR_INVENTORY)
					{
						for (int a = 0; a < 4; a++)
						{
							int offset = 1;
							if (x >= 1006 + (a * 68) && x <= 1070 + (a * 68) && y >= 186 && y <= 250 && Inventory.getInventorySlotItemID(a + offset) != 0)
							{
								if ((Shop::currentShop->ID == Shop::SHOP_GENERAL && Inventory.getInventorySlotItemID(a + offset) != Items::ITEM_GOLD_COIN) || Shop::currentShop->checkForItem(Inventory.getInventorySlotItem(a + offset)))
								{
									if (Shop::currentShop->ID == Shop::SHOP_GENERAL)
										Chat.sendMessage(Inventory.getInventorySlotItem(a + offset).name + " is worth " + std::to_string(Inventory.getInventorySlotItem(a + offset).price / 4));
									else
										Chat.sendMessage(Inventory.getInventorySlotItem(a + offset).name + " is worth " + std::to_string(Inventory.getInventorySlotItem(a + offset).price / 2));
								}
								else
									Chat.sendMessage("You can't sell " + Inventory.getInventorySlotItem(a + offset).name + "s here");
							}
						}
						for (int a = 0; a < 4; a++)
						{
							int offset = 5;
							if (x >= 1006 + (a * 68) && x <= 1070 + (a * 68) && y >= 254 && y <= 318 && Inventory.getInventorySlotItemID(a + offset) != 0)
							{
								if ((Shop::currentShop->ID == Shop::SHOP_GENERAL && Inventory.getInventorySlotItemID(a + offset) != Items::ITEM_GOLD_COIN) || Shop::currentShop->checkForItem(Inventory.getInventorySlotItem(a + offset)))
								{
									if (Shop::currentShop->ID == Shop::SHOP_GENERAL)
										Chat.sendMessage(Inventory.getInventorySlotItem(a + offset).name + " is worth " + std::to_string(Inventory.getInventorySlotItem(a + offset).price / 4));
									else
										Chat.sendMessage(Inventory.getInventorySlotItem(a + offset).name + " is worth " + std::to_string(Inventory.getInventorySlotItem(a + offset).price / 2));
								}
								else
									Chat.sendMessage("You can't sell " + Inventory.getInventorySlotItem(a + offset).name + "s here");
							}
						}
						for (int a = 0; a < 4; a++)
						{
							int offset = 9;
							if (x >= 1006 + (a * 68) && x <= 1070 + (a * 68) && y >= 322 && y <= 386 && Inventory.getInventorySlotItemID(a + offset) != 0)
							{
								if ((Shop::currentShop->ID == Shop::SHOP_GENERAL && Inventory.getInventorySlotItemID(a + offset) != Items::ITEM_GOLD_COIN) || Shop::currentShop->checkForItem(Inventory.getInventorySlotItem(a + offset)))
								{
									if (Shop::currentShop->ID == Shop::SHOP_GENERAL)
										Chat.sendMessage(Inventory.getInventorySlotItem(a + offset).name + " is worth " + std::to_string(Inventory.getInventorySlotItem(a + offset).price / 4));
									else
										Chat.sendMessage(Inventory.getInventorySlotItem(a + offset).name + " is worth " + std::to_string(Inventory.getInventorySlotItem(a + offset).price / 2));
								}
								else
									Chat.sendMessage("You can't sell " + Inventory.getInventorySlotItem(a + offset).name + "s here");
							}
						}
						for (int a = 0; a < 4; a++)
						{
							int offset = 13;
							if (x >= 1006 + (a * 68) && x <= 1070 + (a * 68) && y >= 390 && y <= 454 && Inventory.getInventorySlotItemID(a + offset) != 0)
							{
								if ((Shop::currentShop->ID == Shop::SHOP_GENERAL && Inventory.getInventorySlotItemID(a + offset) != Items::ITEM_GOLD_COIN) || Shop::currentShop->checkForItem(Inventory.getInventorySlotItem(a + offset)))
								{
									if (Shop::currentShop->ID == Shop::SHOP_GENERAL)
										Chat.sendMessage(Inventory.getInventorySlotItem(a + offset).name + " is worth " + std::to_string(Inventory.getInventorySlotItem(a + offset).price / 4));
									else
										Chat.sendMessage(Inventory.getInventorySlotItem(a + offset).name + " is worth " + std::to_string(Inventory.getInventorySlotItem(a + offset).price / 2));
								}
								else
									Chat.sendMessage("You can't sell " + Inventory.getInventorySlotItem(a + offset).name + "s here");
							}
						}
						for (int a = 0; a < 4; a++)
						{
							int offset = 17;
							if (x >= 1006 + (a * 68) && x <= 1070 + (a * 68) && y >= 458 && y <= 522 && Inventory.getInventorySlotItemID(a + offset) != 0)
							{
								if ((Shop::currentShop->ID == Shop::SHOP_GENERAL && Inventory.getInventorySlotItemID(a + offset) != Items::ITEM_GOLD_COIN) || Shop::currentShop->checkForItem(Inventory.getInventorySlotItem(a + offset)))
								{
									if (Shop::currentShop->ID == Shop::SHOP_GENERAL)
										Chat.sendMessage(Inventory.getInventorySlotItem(a + offset).name + " is worth " + std::to_string(Inventory.getInventorySlotItem(a + offset).price / 4));
									else
										Chat.sendMessage(Inventory.getInventorySlotItem(a + offset).name + " is worth " + std::to_string(Inventory.getInventorySlotItem(a + offset).price / 2));
								}
								else
									Chat.sendMessage("You can't sell " + Inventory.getInventorySlotItem(a + offset).name + "s here");
							}
						}
						for (int a = 0; a < 4; a++)
						{
							int offset = 21;
							if (x >= 1006 + (a * 68) && x <= 1070 + (a * 68) && y >= 526 && y <= 590 && Inventory.getInventorySlotItemID(a + offset) != 0)
							{
								if ((Shop::currentShop->ID == Shop::SHOP_GENERAL && Inventory.getInventorySlotItemID(a + offset) != Items::ITEM_GOLD_COIN) || Shop::currentShop->checkForItem(Inventory.getInventorySlotItem(a + offset)))
								{
									if (Shop::currentShop->ID == Shop::SHOP_GENERAL)
										Chat.sendMessage(Inventory.getInventorySlotItem(a + offset).name + " is worth " + std::to_string(Inventory.getInventorySlotItem(a + offset).price / 4));
									else
										Chat.sendMessage(Inventory.getInventorySlotItem(a + offset).name + " is worth " + std::to_string(Inventory.getInventorySlotItem(a + offset).price / 2));
								}
								else
									Chat.sendMessage("You can't sell " + Inventory.getInventorySlotItem(a + offset).name + "s here");
							}
						}
						for (int a = 0; a < 4; a++)
						{
							int offset = 25;
							if (x >= 1006 + (a * 68) && x <= 1070 + (a * 68) && y >= 594 && y <= 658 && Inventory.getInventorySlotItemID(a + offset) != 0)
							{
								if ((Shop::currentShop->ID == Shop::SHOP_GENERAL && Inventory.getInventorySlotItemID(a + offset) != Items::ITEM_GOLD_COIN) || Shop::currentShop->checkForItem(Inventory.getInventorySlotItem(a + offset)))
								{
									if (Shop::currentShop->ID == Shop::SHOP_GENERAL)
										Chat.sendMessage(Inventory.getInventorySlotItem(a + offset).name + " is worth " + std::to_string(Inventory.getInventorySlotItem(a + offset).price / 4));
									else
										Chat.sendMessage(Inventory.getInventorySlotItem(a + offset).name + " is worth " + std::to_string(Inventory.getInventorySlotItem(a + offset).price / 2));
								}
								else
									Chat.sendMessage("You can't sell " + Inventory.getInventorySlotItem(a + offset).name + "s here");
							}
						}
					}
					//inside box protection
					if (x >= 72 && x <= 648 && y >= 108 && y <= 612)
					{
						canMove = false;
						//printf("clicked in\n");
					}
				}
				//not in a menu
				if (Menus.getActivityType() == Menus::ACTIVITY_NONE)
				{
					//inventory
					if (Menus.getSidebarState() == Menus::SIDEBAR_INVENTORY)
					{
						
					}
				}

				if (x < 720)
				{
					//keep at bottom of menus
					if (canMove)
					{
						Logic.setPlayerDest((Player::playerRenderX + x) / 36 + Maps.getPlayerX() - 10, (Player::playerRenderY + y) / 36 + Maps.getPlayerY() - 10);

					}
				}
				//sidebar
				if (x > 720 && y > 664)
				{

					//combat
					if (x < 776)
						if (Menus.getSidebarState() == 1)
							Menus.setSidebarState(0);
						else
							Menus.setSidebarState(1);
					//Levels
					if (x >= 776 && x < 832)
						if (Menus.getSidebarState() == 2)
							Menus.setSidebarState(0);
						else
							Menus.setSidebarState(2);
					//quests
					if (x >= 832 && x < 888)
						if (Menus.getSidebarState() == 3)
							Menus.setSidebarState(0);
						else
							Menus.setSidebarState(3);
					//inventory
					if (x >= 888 && x < 944)
						if (Menus.getSidebarState() == 4)
							Menus.setSidebarState(0);
						else
							Menus.setSidebarState(4);
					//equipment
					if (x >= 944 && x < 1000)
						if (Menus.getSidebarState() == 5)
							Menus.setSidebarState(0);
						else
							Menus.setSidebarState(5);
					//prayer
					if (x >= 1000 && x < 1056)
						if (Menus.getSidebarState() == 6)
							Menus.setSidebarState(0);
						else
							Menus.setSidebarState(6);
					//spells
					if (x >= 1056 && x < 1112)
						if (Menus.getSidebarState() == 7)
							Menus.setSidebarState(0);
						else
							Menus.setSidebarState(7);
					//emotes
					if (x >= 1112 && x < 1168)
						if (Menus.getSidebarState() == 8)
							Menus.setSidebarState(0);
						else
							Menus.setSidebarState(8);
					//options
					if (x >= 1168 && x < 1224)
						if (Menus.getSidebarState() == 9)
							Menus.setSidebarState(0);
						else
							Menus.setSidebarState(9);
					//exit
					if (x >= 1224 && x < 1280)
						quit = true;
				}
			}

			//RIGHT CLICK
			if (mouseState == 4)
			{
				//No menu
				if (Menus.getActivityType() == Menus::ACTIVITY_NONE && Menus.getSidebarState() == Menus::SIDEBAR_INVENTORY)
				{
					for (int a = 0; a < 4; a++)
					{
						if (x >= 1006 + (a * 68) && x <= 1070 + (a * 68) && y >= 186 && y <= 250 && Inventory.getInventorySlotItemID(a + 1) != 0)
							Chat.sendMessage(std::to_string(Inventory.getInventorySlotItemAmount(a + 1)) + " " + Inventory.getInventorySlotItem(a + 1).name + "s");
					}
					for (int a = 0; a < 4; a++)
					{
						if (x >= 1006 + (a * 68) && x <= 1070 + (a * 68) && y >= 254 && y <= 318 && Inventory.getInventorySlotItemID(a + 5) != 0)
							Chat.sendMessage(std::to_string(Inventory.getInventorySlotItemAmount(a + 5)) + " " + Inventory.getInventorySlotItem(a + 5).name + "s");
					}
					for (int a = 0; a < 4; a++)
					{
						if (x >= 1006 + (a * 68) && x <= 1070 + (a * 68) && y >= 322 && y <= 386 && Inventory.getInventorySlotItemID(a + 9) != 0)
							Chat.sendMessage(std::to_string(Inventory.getInventorySlotItemAmount(a + 9)) + " " + Inventory.getInventorySlotItem(a + 9).name + "s");
					}
					for (int a = 0; a < 4; a++)
					{
						if (x >= 1006 + (a * 68) && x <= 1070 + (a * 68) && y >= 390 && y <= 454 && Inventory.getInventorySlotItemID(a + 13) != 0)
							Chat.sendMessage(std::to_string(Inventory.getInventorySlotItemAmount(a + 13)) + " " + Inventory.getInventorySlotItem(a + 13).name + "s");
					}
					for (int a = 0; a < 4; a++)
					{
						if (x >= 1006 + (a * 68) && x <= 1070 + (a * 68) && y >= 458 && y <= 522 && Inventory.getInventorySlotItemID(a + 17) != 0)
							Chat.sendMessage(std::to_string(Inventory.getInventorySlotItemAmount(a + 17)) + " " + Inventory.getInventorySlotItem(a + 17).name + "s");
					}
					for (int a = 0; a < 4; a++)
					{
						if (x >= 1006 + (a * 68) && x <= 1070 + (a * 68) && y >= 526 && y <= 590 && Inventory.getInventorySlotItemID(a + 21) != 0)
							Chat.sendMessage(std::to_string(Inventory.getInventorySlotItemAmount(a + 21)) + " " + Inventory.getInventorySlotItem(a + 21).name + "s");
					}
					for (int a = 0; a < 4; a++)
					{
						if (x >= 1006 + (a * 68) && x <= 1070 + (a * 68) && y >= 594 && y <= 658 && Inventory.getInventorySlotItemID(a + 25) != 0)
							Chat.sendMessage(std::to_string(Inventory.getInventorySlotItemAmount(a + 25)) + " " + Inventory.getInventorySlotItem(a + 25).name + "s");
					}
				}
				//Shop
				if (Menus.getActivityType() == Menus::ACTIVITY_SHOP)
				{
					//items
					for (int a = 0; a < 8; a++)
					{
						int offset = 1;
						if (x >= 83 + (a * 70) && x <= 147 + (a * 70) && y >= 187 && y <= 251 && Shop::currentShop->getItem(a + offset).id != 0)
						{
							bool canBuy = true;
							if (Shop::currentShop->getStock(a + offset) == 0)
							{
								canBuy = false;
								Chat.sendMessage("We are out of " + Shop::currentShop->getItem(a + offset).name + "s");
							}
							if (canBuy && !Inventory.checkForItem(Items.getItemFromID(Items::ITEM_GOLD_COIN), Shop::currentShop->getItem(a + offset).price))
							{
								canBuy = false;
								Chat.sendMessage("You don't have that much coin fool");
							}
							if (canBuy && Inventory.addItemToInventory(Shop::currentShop->getItem(a + offset), 1))
							{
								Inventory.removeItem(Items.getItemFromID(Items::ITEM_GOLD_COIN), Shop::currentShop->getItem(a + offset).price);
								for (int b = 1; b < 49; b++)
								{
									bool set = false;
									if (!set && Shop::currentShop->checkSlotForItem(b, Shop::currentShop->getItem(a + offset)))
									{
										Shop::currentShop->setStock(b, Shop::currentShop->getStock(b) - 1);
										set = true;
									}
								}
							}
						}
					}
					for (int a = 0; a < 8; a++)
					{
						int offset = 9;
						if (x >= 83 + (a * 70) && x <= 147 + (a * 70) && y >= 257 && y <= 321 && Shop::currentShop->getItem(a + offset).id != 0)
						{
							bool canBuy = true;
							if (Shop::currentShop->getStock(a + offset) == 0)
							{
								canBuy = false;
								Chat.sendMessage("We are out of " + Shop::currentShop->getItem(a + offset).name + "s");
							}
							if (canBuy && !Inventory.checkForItem(Items.getItemFromID(Items::ITEM_GOLD_COIN), Shop::currentShop->getItem(a + offset).price))
							{
								canBuy = false;
								Chat.sendMessage("You don't have that much coin fool");
							}
							if (canBuy && Inventory.addItemToInventory(Shop::currentShop->getItem(a + offset), 1))
							{
								Inventory.removeItem(Items.getItemFromID(Items::ITEM_GOLD_COIN), Shop::currentShop->getItem(a + offset).price);
								for (int b = 1; b < 49; b++)
								{
									bool set = false;
									if (!set && Shop::currentShop->checkSlotForItem(b, Shop::currentShop->getItem(a + offset)))
									{
										Shop::currentShop->setStock(b, Shop::currentShop->getStock(b) - 1);
										set = true;
									}
								}
							}
						}
					}
					for (int a = 0; a < 8; a++)
					{
						int offset = 17;
						if (x >= 83 + (a * 70) && x <= 147 + (a * 70) && y >= 327 && y <= 391 && Shop::currentShop->getItem(a + offset).id != 0)
						{
							bool canBuy = true;
							if (Shop::currentShop->getStock(a + offset) == 0)
							{
								canBuy = false;
								Chat.sendMessage("We are out of " + Shop::currentShop->getItem(a + offset).name + "s");
							}
							if (canBuy && !Inventory.checkForItem(Items.getItemFromID(Items::ITEM_GOLD_COIN), Shop::currentShop->getItem(a + offset).price))
							{
								canBuy = false;
								Chat.sendMessage("You don't have that much coin fool");
							}
							if (canBuy && Inventory.addItemToInventory(Shop::currentShop->getItem(a + offset), 1))
							{
								Inventory.removeItem(Items.getItemFromID(Items::ITEM_GOLD_COIN), Shop::currentShop->getItem(a + offset).price);
								for (int b = 1; b < 49; b++)
								{
									bool set = false;
									if (!set && Shop::currentShop->checkSlotForItem(b, Shop::currentShop->getItem(a + offset)))
									{
										Shop::currentShop->setStock(b, Shop::currentShop->getStock(b) - 1);
										set = true;
									}
								}
							}
						}
					}
					for (int a = 0; a < 8; a++)
					{
						int offset = 25;
						if (x >= 83 + (a * 70) && x <= 147 + (a * 70) && y >= 397 && y <= 461 && Shop::currentShop->getItem(a + offset).id != 0)
						{
							bool canBuy = true;
							if (Shop::currentShop->getStock(a + offset) == 0)
							{
								canBuy = false;
								Chat.sendMessage("We are out of " + Shop::currentShop->getItem(a + offset).name + "s");
							}
							if (canBuy && !Inventory.checkForItem(Items.getItemFromID(Items::ITEM_GOLD_COIN), Shop::currentShop->getItem(a + offset).price))
							{
								canBuy = false;
								Chat.sendMessage("You don't have that much coin fool");
							}
							if (canBuy && Inventory.addItemToInventory(Shop::currentShop->getItem(a + offset), 1))
							{
								Inventory.removeItem(Items.getItemFromID(Items::ITEM_GOLD_COIN), Shop::currentShop->getItem(a + offset).price);
								for (int b = 1; b < 49; b++)
								{
									bool set = false;
									if (!set && Shop::currentShop->checkSlotForItem(b, Shop::currentShop->getItem(a + offset)))
									{
										Shop::currentShop->setStock(b, Shop::currentShop->getStock(b) - 1);
										set = true;
									}
								}
							}
						}
					}
					for (int a = 0; a < 8; a++)
					{
						int offset = 33;
						if (x >= 83 + (a * 70) && x <= 147 + (a * 70) && y >= 467 && y <= 531 && Shop::currentShop->getItem(a + offset).id != 0)
						{
							bool canBuy = true;
							if (Shop::currentShop->getStock(a + offset) == 0)
							{
								canBuy = false;
								Chat.sendMessage("We are out of " + Shop::currentShop->getItem(a + offset).name + "s");
							}
							if (canBuy && !Inventory.checkForItem(Items.getItemFromID(Items::ITEM_GOLD_COIN), Shop::currentShop->getItem(a + offset).price))
							{
								canBuy = false;
								Chat.sendMessage("You don't have that much coin fool");
							}
							if (canBuy && Inventory.addItemToInventory(Shop::currentShop->getItem(a + offset), 1))
							{
								Inventory.removeItem(Items.getItemFromID(Items::ITEM_GOLD_COIN), Shop::currentShop->getItem(a + offset).price);
								for (int b = 1; b < 49; b++)
								{
									bool set = false;
									if (!set && Shop::currentShop->checkSlotForItem(b, Shop::currentShop->getItem(a + offset)))
									{
										Shop::currentShop->setStock(b, Shop::currentShop->getStock(b) - 1);
										set = true;
									}
								}
							}
						}
					}
					for (int a = 0; a < 8; a++)
					{
						int offset = 41;
						if (x >= 83 + (a * 70) && x <= 147 + (a * 70) && y >= 537 && y <= 601 && Shop::currentShop->getItem(a + offset).id != 0)
						{
							bool canBuy = true;
							if (Shop::currentShop->getStock(a + offset) == 0)
							{
								canBuy = false;
								Chat.sendMessage("We are out of " + Shop::currentShop->getItem(a + offset).name + "s");
							}
							if (canBuy && !Inventory.checkForItem(Items.getItemFromID(Items::ITEM_GOLD_COIN), Shop::currentShop->getItem(a + offset).price))
							{
								canBuy = false;
								Chat.sendMessage("You don't have that much coin fool");
							}
							if (canBuy && Inventory.addItemToInventory(Shop::currentShop->getItem(a + offset), 1))
							{
								Inventory.removeItem(Items.getItemFromID(Items::ITEM_GOLD_COIN), Shop::currentShop->getItem(a + offset).price);
								for (int b = 1; b < 49; b++)
								{
									bool set = false;
									if (!set && Shop::currentShop->checkSlotForItem(b, Shop::currentShop->getItem(a + offset)))
									{
										Shop::currentShop->setStock(b, Shop::currentShop->getStock(b) - 1);
										set = true;
									}
								}
							}
						}
					}

					//inventory
					if (Menus.getSidebarState() == Menus::SIDEBAR_INVENTORY)
					{
						for (int a = 0; a < 4; a++)
						{
							int offset = 1;
							if (x >= 1006 + (a * 68) && x <= 1070 + (a * 68) && y >= 186 && y <= 250 && Inventory.getInventorySlotItemID(a + offset) != 0)
							{
								Items::item itemSold = Inventory.getInventorySlotItem(a + offset);
								//check if its a general store and if not make sure its on the list of items ALSO not gold coins
								if ((Shop::currentShop->ID == Shop::SHOP_GENERAL && itemSold.id != Items::ITEM_GOLD_COIN) || Shop::currentShop->checkForItem(itemSold))
								{
									//confirm i have item
									if (Inventory.checkForItem(itemSold, 1))
									{

										//set amount you will recieve if item is removed
										int saleAmount = itemSold.price / 2;
										//remove said item
										if (Inventory.removeItem(itemSold, 1))
										{
											//give me the gold thats half the value or 1/4 if general
											if (Shop::currentShop->ID == Shop::SHOP_GENERAL)
												Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_GOLD_COIN), saleAmount / 2);
											else
												Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_GOLD_COIN), saleAmount);
										}
									}
									//find matching item
									bool placed = false;
									for (int b = 1; b < 49; b++)
									{
										if (Shop::currentShop->checkSlotForItem(b, itemSold))
										{
											//increase that items stock
											Shop::currentShop->setStock(b, Shop::currentShop->getStock(b) + 1);
											placed = true;
										}
									}
									//if general and not already stocked make new spot but not ever the last spot
									if (!placed && Shop::currentShop->ID == Shop::SHOP_GENERAL)
									{
										for (int b = 1; b < 48; b++)
										{
											if (!placed && Shop::currentShop->checkSlotForItem(b, Items.getItemFromID(Items::ITEM_NONE)))
											{
												//increase that items stock
												Shop::currentShop->setItem(b, itemSold);
												Shop::currentShop->setStock(b, 1);
												placed = true;
											}
										}
									}
								}
								else
									Chat.sendMessage("You can't sell " + Inventory.getInventorySlotItem(a + offset).name + "s here");
							}
						}
						for (int a = 0; a < 4; a++)
						{
							int offset = 5;
							if (x >= 1006 + (a * 68) && x <= 1070 + (a * 68) && y >= 254 && y <= 318 && Inventory.getInventorySlotItemID(a + offset) != 0)
							{
								Items::item itemSold = Inventory.getInventorySlotItem(a + offset);
								//check if its a general store and if not make sure its on the list of items ALSO not gold coins
								if ((Shop::currentShop->ID == Shop::SHOP_GENERAL && itemSold.id != Items::ITEM_GOLD_COIN) || Shop::currentShop->checkForItem(itemSold))
								{
									//confirm i have item
									if (Inventory.checkForItem(itemSold, 1))
									{

										//set amount you will recieve if item is removed
										int saleAmount = itemSold.price / 2;
										//remove said item
										if (Inventory.removeItem(itemSold, 1))
										{
											//give me the gold thats half the value or 1/4 if general
											if (Shop::currentShop->ID == Shop::SHOP_GENERAL)
												Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_GOLD_COIN), saleAmount / 2);
											else
												Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_GOLD_COIN), saleAmount);
										}
									}
									//find matching item
									bool placed = false;
									for (int b = 1; b < 49; b++)
									{
										if (Shop::currentShop->checkSlotForItem(b, itemSold))
										{
											//increase that items stock
											Shop::currentShop->setStock(b, Shop::currentShop->getStock(b) + 1);
											placed = true;
										}
									}
									//if general and not already stocked make new spot but not ever the last spot
									if (!placed && Shop::currentShop->ID == Shop::SHOP_GENERAL)
									{
										for (int b = 1; b < 48; b++)
										{
											if (!placed && Shop::currentShop->checkSlotForItem(b, Items.getItemFromID(Items::ITEM_NONE)))
											{
												//increase that items stock
												Shop::currentShop->setItem(b, itemSold);
												Shop::currentShop->setStock(b, 1);
												placed = true;
											}
										}
									}
								}
								else
									Chat.sendMessage("You can't sell " + Inventory.getInventorySlotItem(a + offset).name + "s here");
							}
						}
						for (int a = 0; a < 4; a++)
						{
							int offset = 9;
							if (x >= 1006 + (a * 68) && x <= 1070 + (a * 68) && y >= 322 && y <= 386 && Inventory.getInventorySlotItemID(a + offset) != 0)
							{
								Items::item itemSold = Inventory.getInventorySlotItem(a + offset);
								//check if its a general store and if not make sure its on the list of items ALSO not gold coins
								if ((Shop::currentShop->ID == Shop::SHOP_GENERAL && itemSold.id != Items::ITEM_GOLD_COIN) || Shop::currentShop->checkForItem(itemSold))
								{
									//confirm i have item
									if (Inventory.checkForItem(itemSold, 1))
									{

										//set amount you will recieve if item is removed
										int saleAmount = itemSold.price / 2;
										//remove said item
										if (Inventory.removeItem(itemSold, 1))
										{
											//give me the gold thats half the value or 1/4 if general
											if (Shop::currentShop->ID == Shop::SHOP_GENERAL)
												Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_GOLD_COIN), saleAmount / 2);
											else
												Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_GOLD_COIN), saleAmount);
										}
									}
									//find matching item
									bool placed = false;
									for (int b = 1; b < 49; b++)
									{
										if (Shop::currentShop->checkSlotForItem(b, itemSold))
										{
											//increase that items stock
											Shop::currentShop->setStock(b, Shop::currentShop->getStock(b) + 1);
											placed = true;
										}
									}
									//if general and not already stocked make new spot but not ever the last spot
									if (!placed && Shop::currentShop->ID == Shop::SHOP_GENERAL)
									{
										for (int b = 1; b < 48; b++)
										{
											if (!placed && Shop::currentShop->checkSlotForItem(b, Items.getItemFromID(Items::ITEM_NONE)))
											{
												//increase that items stock
												Shop::currentShop->setItem(b, itemSold);
												Shop::currentShop->setStock(b, 1);
												placed = true;
											}
										}
									}
								}
								else
									Chat.sendMessage("You can't sell " + Inventory.getInventorySlotItem(a + offset).name + "s here");
							}
						}
						for (int a = 0; a < 4; a++)
						{
							int offset = 13;
							if (x >= 1006 + (a * 68) && x <= 1070 + (a * 68) && y >= 390 && y <= 454 && Inventory.getInventorySlotItemID(a + offset) != 0)
							{
								Items::item itemSold = Inventory.getInventorySlotItem(a + offset);
								//check if its a general store and if not make sure its on the list of items ALSO not gold coins
								if ((Shop::currentShop->ID == Shop::SHOP_GENERAL && itemSold.id != Items::ITEM_GOLD_COIN) || Shop::currentShop->checkForItem(itemSold))
								{
									//confirm i have item
									if (Inventory.checkForItem(itemSold, 1))
									{

										//set amount you will recieve if item is removed
										int saleAmount = itemSold.price / 2;
										//remove said item
										if (Inventory.removeItem(itemSold, 1))
										{
											//give me the gold thats half the value or 1/4 if general
											if (Shop::currentShop->ID == Shop::SHOP_GENERAL)
												Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_GOLD_COIN), saleAmount / 2);
											else
												Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_GOLD_COIN), saleAmount);
										}
									}
									//find matching item
									bool placed = false;
									for (int b = 1; b < 49; b++)
									{
										if (Shop::currentShop->checkSlotForItem(b, itemSold))
										{
											//increase that items stock
											Shop::currentShop->setStock(b, Shop::currentShop->getStock(b) + 1);
											placed = true;
										}
									}
									//if general and not already stocked make new spot but not ever the last spot
									if (!placed && Shop::currentShop->ID == Shop::SHOP_GENERAL)
									{
										for (int b = 1; b < 48; b++)
										{
											if (!placed && Shop::currentShop->checkSlotForItem(b, Items.getItemFromID(Items::ITEM_NONE)))
											{
												//increase that items stock
												Shop::currentShop->setItem(b, itemSold);
												Shop::currentShop->setStock(b, 1);
												placed = true;
											}
										}
									}
								}
								else
									Chat.sendMessage("You can't sell " + Inventory.getInventorySlotItem(a + offset).name + "s here");
							}
						}
						for (int a = 0; a < 4; a++)
						{
							int offset = 17;
							if (x >= 1006 + (a * 68) && x <= 1070 + (a * 68) && y >= 458 && y <= 522 && Inventory.getInventorySlotItemID(a + 17) != 0)
							{
								Items::item itemSold = Inventory.getInventorySlotItem(a + offset);
								//check if its a general store and if not make sure its on the list of items ALSO not gold coins
								if ((Shop::currentShop->ID == Shop::SHOP_GENERAL && itemSold.id != Items::ITEM_GOLD_COIN) || Shop::currentShop->checkForItem(itemSold))
								{
									//confirm i have item
									if (Inventory.checkForItem(itemSold, 1))
									{

										//set amount you will recieve if item is removed
										int saleAmount = itemSold.price / 2;
										//remove said item
										if (Inventory.removeItem(itemSold, 1))
										{
											//give me the gold thats half the value or 1/4 if general
											if (Shop::currentShop->ID == Shop::SHOP_GENERAL)
												Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_GOLD_COIN), saleAmount / 2);
											else
												Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_GOLD_COIN), saleAmount);
										}
									}
									//find matching item
									bool placed = false;
									for (int b = 1; b < 49; b++)
									{
										if (Shop::currentShop->checkSlotForItem(b, itemSold))
										{
											//increase that items stock
											Shop::currentShop->setStock(b, Shop::currentShop->getStock(b) + 1);
											placed = true;
										}
									}
									//if general and not already stocked make new spot but not ever the last spot
									if (!placed && Shop::currentShop->ID == Shop::SHOP_GENERAL)
									{
										for (int b = 1; b < 48; b++)
										{
											if (!placed && Shop::currentShop->checkSlotForItem(b, Items.getItemFromID(Items::ITEM_NONE)))
											{
												//increase that items stock
												Shop::currentShop->setItem(b, itemSold);
												Shop::currentShop->setStock(b, 1);
												placed = true;
											}
										}
									}
								}
								else
									Chat.sendMessage("You can't sell " + Inventory.getInventorySlotItem(a + offset).name + "s here");
							}
						}
						for (int a = 0; a < 4; a++)
						{
							int offset = 21;
							if (x >= 1006 + (a * 68) && x <= 1070 + (a * 68) && y >= 526 && y <= 590 && Inventory.getInventorySlotItemID(a + offset) != 0)
							{
								Items::item itemSold = Inventory.getInventorySlotItem(a + offset);
								//check if its a general store and if not make sure its on the list of items ALSO not gold coins
								if ((Shop::currentShop->ID == Shop::SHOP_GENERAL && itemSold.id != Items::ITEM_GOLD_COIN) || Shop::currentShop->checkForItem(itemSold))
								{
									//confirm i have item
									if (Inventory.checkForItem(itemSold, 1))
									{

										//set amount you will recieve if item is removed
										int saleAmount = itemSold.price / 2;
										//remove said item
										if (Inventory.removeItem(itemSold, 1))
										{
											//give me the gold thats half the value or 1/4 if general
											if (Shop::currentShop->ID == Shop::SHOP_GENERAL)
												Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_GOLD_COIN), saleAmount / 2);
											else
												Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_GOLD_COIN), saleAmount);
										}
									}
									//find matching item
									bool placed = false;
									for (int b = 1; b < 49; b++)
									{
										if (Shop::currentShop->checkSlotForItem(b, itemSold))
										{
											//increase that items stock
											Shop::currentShop->setStock(b, Shop::currentShop->getStock(b) + 1);
											placed = true;
										}
									}
									//if general and not already stocked make new spot but not ever the last spot
									if (!placed && Shop::currentShop->ID == Shop::SHOP_GENERAL)
									{
										for (int b = 1; b < 48; b++)
										{
											if (!placed && Shop::currentShop->checkSlotForItem(b, Items.getItemFromID(Items::ITEM_NONE)))
											{
												//increase that items stock
												Shop::currentShop->setItem(b, itemSold);
												Shop::currentShop->setStock(b, 1);
												placed = true;
											}
										}
									}
								}
								else
									Chat.sendMessage("You can't sell " + Inventory.getInventorySlotItem(a + offset).name + "s here");
							}
						}
						for (int a = 0; a < 4; a++)
						{
							int offset = 25;
							if (x >= 1006 + (a * 68) && x <= 1070 + (a * 68) && y >= 594 && y <= 658 && Inventory.getInventorySlotItemID(a + offset) != 0)
							{
								Items::item itemSold = Inventory.getInventorySlotItem(a + offset);
								//check if its a general store and if not make sure its on the list of items ALSO not gold coins
								if ((Shop::currentShop->ID == Shop::SHOP_GENERAL && itemSold.id != Items::ITEM_GOLD_COIN) || Shop::currentShop->checkForItem(itemSold))
								{
									//confirm i have item
									if (Inventory.checkForItem(itemSold, 1))
									{

										//set amount you will recieve if item is removed
										int saleAmount = itemSold.price / 2;
										//remove said item
										if (Inventory.removeItem(itemSold, 1))
										{
											//give me the gold thats half the value or 1/4 if general
											if (Shop::currentShop->ID == Shop::SHOP_GENERAL)
												Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_GOLD_COIN), saleAmount / 2);
											else
												Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_GOLD_COIN), saleAmount);
										}
									}
									//find matching item
									bool placed = false;
									for (int b = 1; b < 49; b++)
									{
										if (Shop::currentShop->checkSlotForItem(b, itemSold))
										{
											//increase that items stock
											Shop::currentShop->setStock(b, Shop::currentShop->getStock(b) + 1);
											placed = true;
										}
									}
									//if general and not already stocked make new spot but not ever the last spot
									if (!placed && Shop::currentShop->ID == Shop::SHOP_GENERAL)
									{
										for (int b = 1; b < 48; b++)
										{
											if (!placed && Shop::currentShop->checkSlotForItem(b, Items.getItemFromID(Items::ITEM_NONE)))
											{
												//increase that items stock
												Shop::currentShop->setItem(b, itemSold);
												Shop::currentShop->setStock(b, 1);
												placed = true;
											}
										}
									}
								}
								else
									Chat.sendMessage("You can't sell " + Inventory.getInventorySlotItem(a + offset).name + "s here");
							}
						}
					}
				}
			}
		}
		//currently only once a click

		//dragging 
		if (e.type == SDL_MOUSEMOTION)
		{
			if (Menus.getSidebarState() == Menus::SIDEBAR_INVENTORY && mouseState == 1)
			{
				for (int a = 0; a < 7; a++)
				{
					for (int b = 0; b < 4; b++)
					{
						if (x >= 1006 + (b * 68) && x <= 1070 + (b * 68) && y >= 186 + (a * 68) && y <= 250 + (a * 68) && Inventory.getInventorySlotItemID((a * 4) + (b + 1)) != 0)
						{
							if (!itemSelected)
							{
								//Chat.sendMessage("mouse dragged over slot " + std::to_string((a * 4) + (b + 1)));

								Inventory.selectedItem = Inventory.getInventorySlotItem((a * 4) + (b + 1));
								selectedItemsSlot = (a * 4) + (b + 1);

								itemSelected = true;
							}
						}
					}
				}
			}
		}

		//released

		if (e.type == SDL_MOUSEBUTTONUP)
		{
			if (Menus.getSidebarState() == Menus::SIDEBAR_INVENTORY)
			{
				for (int a = 0; a < 7; a++)
				{
					for (int b = 0; b < 4; b++)
					{
						if (x >= 1006 + (b * 68) && x <= 1070 + (b * 68) && y >= 186 + (a * 68) && y <= 250 + (a * 68))
						{
							if (itemSelected)
							{
								//Chat.sendMessage("mouse released over slot " + std::to_string((a * 4) + (b + 1)));

								Items::item swappedItem = Inventory.getInventorySlotItem((a * 4) + (b + 1));
								int swappedItemAmount = Inventory.getInventorySlotItemAmount((a * 4) + (b + 1));
								
								Inventory.setInventorySlotItem((a * 4) + (b + 1), Inventory.selectedItem);
								Inventory.setInventorySlotItemAmount((a * 4) + (b + 1), Inventory.getInventorySlotItemAmount(selectedItemsSlot));

								Inventory.setInventorySlotItem(selectedItemsSlot, swappedItem);
								Inventory.setInventorySlotItemAmount(selectedItemsSlot, swappedItemAmount);
							}
						}
					}
				}
			}
			Inventory.selectedItem = Items::empty;
			itemSelected = false;
			//mouseDragged = false;
		}

		//KEYBOARD
		const Uint8 *state = SDL_GetKeyboardState(NULL);

		//chat box
		if (state[SDL_SCANCODE_RETURN] && e.type == 768)
		{
			Chat.sendMessage(Chat.getChatText(0));
			Chat.clearChatMessage();
		}
		if (state[SDL_SCANCODE_BACKSPACE] && e.type == 768)
		{
			Chat.removeLetter();
		}
		if (state[SDL_SCANCODE_1] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("1");
		}
		if (state[SDL_SCANCODE_2] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("2");
		}
		if (state[SDL_SCANCODE_3] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("3");
		}
		if (state[SDL_SCANCODE_4] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("4");
		}
		if (state[SDL_SCANCODE_5] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("5");
		}
		if (state[SDL_SCANCODE_6] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("6");
		}
		if (state[SDL_SCANCODE_7] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("7");
		}
		if (state[SDL_SCANCODE_8] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("8");
		}
		if (state[SDL_SCANCODE_9] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("9");
		}
		if (state[SDL_SCANCODE_0] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("0");
		}
		if (state[SDL_SCANCODE_A] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("a");
		}
		if (state[SDL_SCANCODE_B] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("b");
		}
		if (state[SDL_SCANCODE_C] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("c");
		}
		if (state[SDL_SCANCODE_D] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("d");
		}
		if (state[SDL_SCANCODE_E] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("e");
		}
		if (state[SDL_SCANCODE_F] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("f");
		}
		if (state[SDL_SCANCODE_G] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("g");
		}
		if (state[SDL_SCANCODE_H] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("h");
		}
		if (state[SDL_SCANCODE_I] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("i");
		}
		if (state[SDL_SCANCODE_J] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("j");
		}
		if (state[SDL_SCANCODE_K] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("k");
		}
		if (state[SDL_SCANCODE_L] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("l");
		}
		if (state[SDL_SCANCODE_M] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("m");
		}
		if (state[SDL_SCANCODE_N] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("n");
		}
		if (state[SDL_SCANCODE_O] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("o");
		}
		if (state[SDL_SCANCODE_P] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("p");
		}
		if (state[SDL_SCANCODE_Q] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("q");
		}
		if (state[SDL_SCANCODE_R] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("r");
		}
		if (state[SDL_SCANCODE_S] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("s");
		}
		if (state[SDL_SCANCODE_T] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("t");
		}
		if (state[SDL_SCANCODE_U] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("u");
		}
		if (state[SDL_SCANCODE_V] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("v");
		}
		if (state[SDL_SCANCODE_W] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("w");
		}
		if (state[SDL_SCANCODE_X] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("x");
		}
		if (state[SDL_SCANCODE_Y] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("y");
		}
		if (state[SDL_SCANCODE_Z] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("z");
		}
		if (state[SDL_SCANCODE_A] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("A");
		}
		if (state[SDL_SCANCODE_B] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("B");
		}
		if (state[SDL_SCANCODE_C] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("C");
		}
		if (state[SDL_SCANCODE_D] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("D");
		}
		if (state[SDL_SCANCODE_E] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("E");
		}
		if (state[SDL_SCANCODE_F] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("F");
		}
		if (state[SDL_SCANCODE_G] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("G");
		}
		if (state[SDL_SCANCODE_H] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("H");
		}
		if (state[SDL_SCANCODE_I] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("I");
		}
		if (state[SDL_SCANCODE_J] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("J");
		}
		if (state[SDL_SCANCODE_K] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("K");
		}
		if (state[SDL_SCANCODE_L] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("L");
		}
		if (state[SDL_SCANCODE_M] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("M");
		}
		if (state[SDL_SCANCODE_N] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("N");
		}
		if (state[SDL_SCANCODE_O] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("O");
		}
		if (state[SDL_SCANCODE_P] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("P");
		}
		if (state[SDL_SCANCODE_Q] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("Q");
		}
		if (state[SDL_SCANCODE_R] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("R");
		}
		if (state[SDL_SCANCODE_S] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("S");
		}
		if (state[SDL_SCANCODE_T] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("T");
		}
		if (state[SDL_SCANCODE_U] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("U");
		}
		if (state[SDL_SCANCODE_V] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("V");
		}
		if (state[SDL_SCANCODE_W] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("W");
		}
		if (state[SDL_SCANCODE_X] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("X");
		}
		if (state[SDL_SCANCODE_Y] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("Y");
		}
		if (state[SDL_SCANCODE_Z] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("Z");
		}
		if (state[SDL_SCANCODE_SPACE] && e.type == 768)
		{
			Chat.addLetter(" ");
		}
		if (state[SDL_SCANCODE_PERIOD] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter(".");
		}
		if (state[SDL_SCANCODE_GRAVE] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("`");
		}
		if (state[SDL_SCANCODE_MINUS] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("-");
		}
		if (state[SDL_SCANCODE_EQUALS] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("=");
		}
		if (state[SDL_SCANCODE_LEFTBRACKET] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("[");
		}
		if (state[SDL_SCANCODE_RIGHTBRACKET] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("]");
		}
		if (state[SDL_SCANCODE_BACKSLASH] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("\\");
		}
		if (state[SDL_SCANCODE_SEMICOLON] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter(";");
		}
		if (state[SDL_SCANCODE_APOSTROPHE] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("'");
		}
		if (state[SDL_SCANCODE_COMMA] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter(",");
		}
		if (state[SDL_SCANCODE_SLASH] && (!state[SDL_SCANCODE_LSHIFT] && !state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("/");
		}
		if (state[SDL_SCANCODE_SLASH] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("?");
		}
		if (state[SDL_SCANCODE_GRAVE] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("~");
		}
		if (state[SDL_SCANCODE_1] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("!");
		}
		if (state[SDL_SCANCODE_2] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("@");
		}
		if (state[SDL_SCANCODE_3] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("#");
		}
		if (state[SDL_SCANCODE_4] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("$");
		}
		if (state[SDL_SCANCODE_5] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("%");
		}
		if (state[SDL_SCANCODE_6] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("^");
		}
		if (state[SDL_SCANCODE_7] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("&");
		}
		if (state[SDL_SCANCODE_8] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("*");
		}
		if (state[SDL_SCANCODE_9] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("(");
		}
		if (state[SDL_SCANCODE_0] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter(")");
		}
		if (state[SDL_SCANCODE_MINUS] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("_");
		}
		if (state[SDL_SCANCODE_EQUALS] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("+");
		}
		if (state[SDL_SCANCODE_LEFTBRACKET] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("{");
		}
		if (state[SDL_SCANCODE_RIGHTBRACKET] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("}");
		}
		if (state[SDL_SCANCODE_BACKSLASH] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("|");
		}
		if (state[SDL_SCANCODE_SEMICOLON] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter(":");
		}
		if (state[SDL_SCANCODE_APOSTROPHE] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("\"");
		}
		if (state[SDL_SCANCODE_COMMA] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter("<");
		}
		if (state[SDL_SCANCODE_PERIOD] && (state[SDL_SCANCODE_LSHIFT] || state[SDL_SCANCODE_RSHIFT]) && e.type == 768)
		{
			Chat.addLetter(">");
		}
	}
}