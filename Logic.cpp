
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include <time.h>
#include "Controller.h"
#include "Maps.h"
#include "Logic.h"
#include "Inventory.h"
#include "Items.h"
#include "Menus.h"
#include "Shop.h"
#include "Chat.h"
#include "Player.h"

//Keeps track of where the player is trying to go
int playerDestinationX = 10, playerDestinationY = 10;
//FPS counter
int FPSFirst = 0, FPSLast = 0;
//Keeps track of the game ticks
int lastTickUpdate = 0, tickRate = 500;
int lastShopUpdate = 0;
int lastAnimationTick = 0;
int moveCounterX = 1, moveCounterY = 1;
//Used for pathfinding
//int tempDestX, tempDestY;

struct changedObject {
	bool active;
	Maps::entity originalObject;
	int x;
	int y;
	int timeOfChange;
	int timeTillChange;
};

struct changedObject
	changedObject1 { false },
	changedObject2 { false },
	changedObject3 { false },
	changedObject4 { false },
	changedObject5 { false },
	changedObject6 { false },
	changedObject7 { false },
	changedObject8 { false },
	changedObject9 { false },
	changedObject10 { false };

void assignDelayedObjectChange(Maps::entity originalObject, int x, int y, int timeOfChange, int timeTillChange)
{
	if (!changedObject1.active)
	{
		changedObject1 = { true, originalObject, x, y, timeOfChange, timeTillChange };
		return;
	}
	if (!changedObject2.active)
	{
		changedObject2 = { true, originalObject, x, y, timeOfChange, timeTillChange };
		return;
	}
	if (!changedObject3.active)
	{
		changedObject3 = { true, originalObject, x, y, timeOfChange, timeTillChange };
		return;
	}
	if (!changedObject4.active)
	{
		changedObject4 = { true, originalObject, x, y, timeOfChange, timeTillChange };
		return;
	}
	if (!changedObject5.active)
	{
		changedObject5 = { true, originalObject, x, y, timeOfChange, timeTillChange };
		return;
	}
	if (!changedObject6.active)
	{
		changedObject6 = { true, originalObject, x, y, timeOfChange, timeTillChange };
		return;
	}
	if (!changedObject7.active)
	{
		changedObject7 = { true, originalObject, x, y, timeOfChange, timeTillChange };
		return;
	}
	if (!changedObject8.active)
	{
		changedObject8 = { true, originalObject, x, y, timeOfChange, timeTillChange };
		return;
	}
	if (!changedObject9.active)
	{
		changedObject9 = { true, originalObject, x, y, timeOfChange, timeTillChange };
		return;
	}
	if (!changedObject10.active)
	{
		changedObject10 = { true, originalObject, x, y, timeOfChange, timeTillChange };
		return;
	}
}

void updateObjects()
{
	Maps Maps;
	changedObject current = changedObject1;
	if (clock() - current.timeOfChange >= current.timeTillChange && current.active)
	{
		Maps.setMapEntity(current.x, current.y, current.originalObject);
		changedObject1.active = false;
	}
	current = changedObject2;
	if (clock() - current.timeOfChange >= current.timeTillChange && current.active)
	{
		Maps.setMapEntity(current.x, current.y, current.originalObject);
		changedObject2.active = false;
	}
	current = changedObject3;
	if (clock() - current.timeOfChange >= current.timeTillChange && current.active)
	{
		Maps.setMapEntity(current.x, current.y, current.originalObject);
		changedObject3.active = false;
	}
	current = changedObject4;
	if (clock() - current.timeOfChange >= current.timeTillChange && current.active)
	{
		Maps.setMapEntity(current.x, current.y, current.originalObject);
		changedObject4.active = false;
	}
	current = changedObject5;
	if (clock() - current.timeOfChange >= current.timeTillChange && current.active)
	{
		Maps.setMapEntity(current.x, current.y, current.originalObject);
		changedObject5.active = false;
	}
	current = changedObject6;
	if (clock() - current.timeOfChange >= current.timeTillChange && current.active)
	{
		Maps.setMapEntity(current.x, current.y, current.originalObject);
		changedObject6.active = false;
	}
	current = changedObject7;
	if (clock() - current.timeOfChange >= current.timeTillChange && current.active)
	{
		Maps.setMapEntity(current.x, current.y, current.originalObject);
		changedObject7.active = false;
	}
	current = changedObject8;
	if (clock() - current.timeOfChange >= current.timeTillChange && current.active)
	{
		Maps.setMapEntity(current.x, current.y, current.originalObject);
		changedObject8.active = false;
	}
	current = changedObject9;
	if (clock() - current.timeOfChange >= current.timeTillChange && current.active)
	{
		Maps.setMapEntity(current.x, current.y, current.originalObject);
		changedObject9.active = false;
	}
	current = changedObject10;
	if (clock() - current.timeOfChange >= current.timeTillChange && current.active)
	{
		Maps.setMapEntity(current.x, current.y, current.originalObject);
		changedObject10.active = false;
	}
}

void Logic::FPSCounter()
{
	FPSFirst = clock();
	int FPS = 1000 / (FPSFirst - FPSLast+1);
	printf("FPS: %i\n", FPS);
	FPSLast = clock();
}

void Logic::setPlayerDest(int x, int y)
{
	playerDestinationX = x;
	playerDestinationY = y;
}

bool collisionDetection(int x, int y)
{
	Maps Maps;
	bool walkable = true;
	if (!Maps.getTileIsWalkable(Maps.getMapTileID(x, y)))
		walkable = false;
	if (!Maps.getEntityIsWalkable(Maps.getMapEntityID(x, y)))
		walkable = false;
	return walkable;
}

bool movePlayerUp()
{
	Menus Menus;
	Maps Maps;
	Player Player;
	if (moveCounterY == 1)
	{
		Menus.setActivityType(Menus::ACTIVITY_NONE);
		Menus.setActivityState(0);
	}
	if (moveCounterY <= 25)
	{
		Player::playerRenderY -= 1.44;
		moveCounterY++;
	}
	else
	{
		Maps.setPlayerY(Maps.getPlayerY() - 1);
		Player::playerRenderY = 0;
		Player.playerState = Player::STATE_IDLE;
		moveCounterY = 1;
	}
	return true;
}

bool movePlayerDown()
{
	Menus Menus;
	Maps Maps;
	Player Player;
	if (moveCounterY == 1)
	{
		Menus.setActivityType(Menus::ACTIVITY_NONE);
		Menus.setActivityState(0);
	}
	if (moveCounterY <= 25)
	{
		Player::playerRenderY += 1.44;
		moveCounterY++;
	}
	else
	{
		Maps.setPlayerY(Maps.getPlayerY() + 1);
		Player::playerRenderY = 0;
		Player.playerState = Player::STATE_IDLE;
		moveCounterY = 1;
	}
	return true;
}

bool movePlayerLeft()
{
	Menus Menus;
	Maps Maps;
	Player Player;
	if (moveCounterX == 1)
	{
		Menus.setActivityType(Menus::ACTIVITY_NONE);
		Menus.setActivityState(0);
	}
	if (moveCounterX <= 25)
	{
		Player::playerRenderX -= 1.44;
		moveCounterX++;
	}
	else
	{
		Maps.setPlayerX(Maps.getPlayerX() - 1);
		Player::playerRenderX = 0;
		Player.playerState = Player::STATE_IDLE;
		moveCounterX = 1;
	}
	return true;
}

bool movePlayerRight()
{
	Menus Menus;
	Maps Maps;
	Player Player;
	if (moveCounterX == 1)
	{
		Menus.setActivityType(Menus::ACTIVITY_NONE);
		Menus.setActivityState(0);
	}
	if (moveCounterX <= 25)
	{
		Player::playerRenderX += 1.44;
		moveCounterX++;
	}
	else
	{
		Maps.setPlayerX(Maps.getPlayerX() + 1);
		Player::playerRenderX = 0;
		Player.playerState = Player::STATE_IDLE;
		moveCounterX = 1;
	}
	return true;
}

void movePlayer()
{
	Menus Menus;
	Player Player;
	
	switch (Player.playerState)
	{
	case Player::STATE_WALKING_UP:
		movePlayerUp();
		break;
	case Player::STATE_WALKING_DOWN:
		movePlayerDown();
		break;
	case Player::STATE_WALKING_LEFT:
		movePlayerLeft();
		break;
	case Player::STATE_WALKING_RIGHT:
		movePlayerRight();
		break;
	case Player::STATE_WALKING_UP_RIGHT:
		movePlayerUp();
		movePlayerRight();
		break;
	case Player::STATE_WALKING_UP_LEFT:
		movePlayerUp();
		movePlayerLeft();
		break;
	case Player::STATE_WALKING_DOWN_RIGHT:
		movePlayerDown();
		movePlayerRight();
		break;
	case Player::STATE_WALKING_DOWN_LEFT:
		movePlayerDown();
		movePlayerLeft();
		break;
	}	
}

void updatePlayerDirection()
{
	Maps Maps;
	Player Player;
	if (Maps.getPlayerX() == playerDestinationX && Maps.getPlayerY() == playerDestinationY)
		return;

	if (Player.playerState == Player::STATE_IDLE)
	{
		bool up = false, down = false, left = false, right = false;
		
		if (Maps.getPlayerY() > playerDestinationY && collisionDetection(Maps.getPlayerX(), Maps.getPlayerY() - 1))
		{
			up = true;
		}
		if (Maps.getPlayerY() < playerDestinationY && collisionDetection(Maps.getPlayerX(), Maps.getPlayerY() + 1))
		{
			down = true;
		}
		if (Maps.getPlayerX() > playerDestinationX && collisionDetection(Maps.getPlayerX() - 1, Maps.getPlayerY()))
		{
			left = true;
		}
		if (Maps.getPlayerX() < playerDestinationX && collisionDetection(Maps.getPlayerX() + 1, Maps.getPlayerY()))
		{
			right = true;
		}

		if (up && left && collisionDetection(Maps.getPlayerX() - 1, Maps.getPlayerY() - 1))
		{
			Player.playerState = Player::STATE_WALKING_UP_LEFT;
		}
		else if (up && right && collisionDetection(Maps.getPlayerX() + 1, Maps.getPlayerY() - 1))
		{
			Player.playerState = Player::STATE_WALKING_UP_RIGHT;
		}
		else if (down && left && collisionDetection(Maps.getPlayerX() - 1, Maps.getPlayerY() + 1))
		{
			Player.playerState = Player::STATE_WALKING_DOWN_LEFT;
		}
		else if (down && right && collisionDetection(Maps.getPlayerX() + 1, Maps.getPlayerY() + 1))
		{
			Player.playerState = Player::STATE_WALKING_DOWN_RIGHT;
		}
		else if (up)
		{
			Player.playerState = Player::STATE_WALKING_UP;
		}
		else if (down)
		{
			Player.playerState = Player::STATE_WALKING_DOWN;
		}
		else if (left)
		{
			Player.playerState = Player::STATE_WALKING_LEFT;
		}
		else if (right)
		{
			Player.playerState = Player::STATE_WALKING_RIGHT;
		}
	}
}

bool isNearEntity(int entityID)
{
	Maps Maps;
	bool arrived = false;
	if (Maps.getPlayerX() == playerDestinationX && Maps.getPlayerY() + 1 == playerDestinationY)
		arrived = true;
	if (Maps.getPlayerX() == playerDestinationX && Maps.getPlayerY() - 1 == playerDestinationY)
		arrived = true;
	if (Maps.getPlayerX() + 1 == playerDestinationX && Maps.getPlayerY() == playerDestinationY)
		arrived = true;
	if (Maps.getPlayerX() - 1 == playerDestinationX && Maps.getPlayerY() == playerDestinationY)
		arrived = true;
	if (Maps.getMapEntityID(playerDestinationX, playerDestinationY) == entityID && arrived)
		return true;
	return false;
}

void interact()
{
	Maps Maps;
	Inventory Inventory;
	Items Items;
	Menus Menus;
	Shop Shop;
	Chat Chat;
	if (Maps.getMapEntityID(playerDestinationX, playerDestinationY) != Maps::ENTITY_NONE)
	{
		//Furnace
		if (isNearEntity(Maps::ENTITY_FURNACE))
		{
			//printf("Furnace\n");
			// open furnace
			Menus.setActivityType(Menus::ACTIVITY_FURNACE);
			
			
			playerDestinationX = Maps.getPlayerX();
			playerDestinationY = Maps.getPlayerY();
		}

		//Anvil
		if (isNearEntity(Maps::ENTITY_ANVIL))
		{
			printf("Anvil\n");
			// open Anvil
			Menus.setActivityType(Menus::ACTIVITY_ANVIL);


			playerDestinationX = Maps.getPlayerX();
			playerDestinationY = Maps.getPlayerY();
		}

		//General ShopKeeper
		if (isNearEntity(Maps::ENTITY_GENERAL_SHOP_KEEPER))
		{
			printf("Shop Keeper\n");
			// open shop
			Shop::generalShopCurrent.setAsCurrent();
			
			Menus.setActivityType(Menus::ACTIVITY_SHOP);


			playerDestinationX = Maps.getPlayerX();
			playerDestinationY = Maps.getPlayerY();
		}

		//Icecream ShopKeeper
		if (isNearEntity(Maps::ENTITY_ICECREAM_SHOP_KEEPER))
		{
			printf("Shop Keeper\n");
			// open shop
			Shop::icecreamShop.setAsCurrent();
			
			Menus.setActivityType(Menus::ACTIVITY_SHOP);


			playerDestinationX = Maps.getPlayerX();
			playerDestinationY = Maps.getPlayerY();
		}

		//Ore ShopKeeper
		if (isNearEntity(Maps::ENTITY_ORE_SHOP_KEEPER))
		{
			printf("Shop Keeper\n");
			// open shop
			Shop::oreShop.setAsCurrent();
			
			Menus.setActivityType(Menus::ACTIVITY_SHOP);


			playerDestinationX = Maps.getPlayerX();
			playerDestinationY = Maps.getPlayerY();
		}

		//Bar ShopKeeper
		if (isNearEntity(Maps::ENTITY_BAR_SHOP_KEEPER))
		{
			printf("Shop Keeper\n");
			// open shop
			Shop::barShop.setAsCurrent();
			
			Menus.setActivityType(Menus::ACTIVITY_SHOP);


			playerDestinationX = Maps.getPlayerX();
			playerDestinationY = Maps.getPlayerY();
		}

		//Bee
		if (isNearEntity(Maps::ENTITY_BEE))
		{
			printf("Bee\n");

			Chat.sendMessage("Bee: Take my stuff");
			Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_GOLD_COIN), 7287280);
			
			//Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_GOLD_RING), 20);
			//Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_BRONZE_BAR), 5);


			playerDestinationX = Maps.getPlayerX();
			playerDestinationY = Maps.getPlayerY();
		}

		//Closed Door
		if (isNearEntity(Maps::ENTITY_CLOSED_DOOR))
		{
			printf("Closed Door\n");

			Maps.setMapEntity(playerDestinationX, playerDestinationY, Maps.getEntityFromID(Maps::ENTITY_OPEN_DOOR));
			assignDelayedObjectChange(Maps.getEntityFromID(Maps::ENTITY_CLOSED_DOOR), playerDestinationX, playerDestinationY, clock(), 5000);

			playerDestinationX = Maps.getPlayerX();
			playerDestinationY = Maps.getPlayerY();
		}

		//Open Door
		/*if (isNearEntity(ENTITY_OPEN_DOOR))
		{
			printf("Open Door\n");

			Maps.setMapEntity(playerDestinationX, playerDestinationY, Maps.getEntityFromID(ENTITY_CLOSED_DOOR));

			playerDestinationX = Maps.getPlayerX();
			playerDestinationY = Maps.getPlayerY();
		}*/

		//Empty Rock
		if (isNearEntity(Maps::ENTITY_EMPTY_ROCK))
		{
			printf("Empty Rock\n");

			

			playerDestinationX = Maps.getPlayerX();
			playerDestinationY = Maps.getPlayerY();
		}

		//Copper Rock
		if (isNearEntity(Maps::ENTITY_COPPER_ROCK))
		{
			printf("Copper Rock\n");
			//if added set rock to empty
			if (Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_COPPER_ORE), 1))
			{
				Maps.setMapEntity(playerDestinationX, playerDestinationY, Maps.getEntityFromID(Maps::ENTITY_EMPTY_ROCK));
				assignDelayedObjectChange(Maps.getEntityFromID(Maps::ENTITY_COPPER_ROCK), playerDestinationX, playerDestinationY, clock(), 5000);
			}
			
			playerDestinationX = Maps.getPlayerX();
			playerDestinationY = Maps.getPlayerY();
		}

		//Tin Rock
		if (isNearEntity(Maps::ENTITY_TIN_ROCK))
		{
			printf("Tin Rock\n");
			//if added set rock to empty
			if (Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_TIN_ORE), 1))
			{
				Maps.setMapEntity(playerDestinationX, playerDestinationY, Maps.getEntityFromID(Maps::ENTITY_EMPTY_ROCK));
				assignDelayedObjectChange(Maps.getEntityFromID(Maps::ENTITY_TIN_ROCK), playerDestinationX, playerDestinationY, clock(), 5000);
			}
			
			playerDestinationX = Maps.getPlayerX();
			playerDestinationY = Maps.getPlayerY();
		}

		//Iron Rock
		if (isNearEntity(Maps::ENTITY_IRON_ROCK))
		{
			printf("Iron Rock\n");
			//if added set rock to empty
			if (Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_IRON_ORE), 1))
			{
				Maps.setMapEntity(playerDestinationX, playerDestinationY, Maps.getEntityFromID(Maps::ENTITY_EMPTY_ROCK));
				assignDelayedObjectChange(Maps.getEntityFromID(Maps::ENTITY_IRON_ROCK), playerDestinationX, playerDestinationY, clock(), 10000);
			}

			playerDestinationX = Maps.getPlayerX();
			playerDestinationY = Maps.getPlayerY();
		}

		//Coal Rock
		if (isNearEntity(Maps::ENTITY_COAL_ROCK))
		{
			printf("Coal Rock\n");
			//if added set rock to empty
			if (Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_COAL_ORE), 1))
			{
				Maps.setMapEntity(playerDestinationX, playerDestinationY, Maps.getEntityFromID(Maps::ENTITY_EMPTY_ROCK));
				assignDelayedObjectChange(Maps.getEntityFromID(Maps::ENTITY_COAL_ROCK), playerDestinationX, playerDestinationY, clock(), 15000);
			}

			playerDestinationX = Maps.getPlayerX();
			playerDestinationY = Maps.getPlayerY();
		}

		//Mithril Rock
		if (isNearEntity(Maps::ENTITY_MITHRIL_ROCK))
		{
			printf("Mithril Rock\n");
			//if added set rock to empty
			if (Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_MITHRIL_ORE), 1))
			{
				Maps.setMapEntity(playerDestinationX, playerDestinationY, Maps.getEntityFromID(Maps::ENTITY_EMPTY_ROCK));
				assignDelayedObjectChange(Maps.getEntityFromID(Maps::ENTITY_MITHRIL_ROCK), playerDestinationX, playerDestinationY, clock(), 20000);
			}

			playerDestinationX = Maps.getPlayerX();
			playerDestinationY = Maps.getPlayerY();
		}

		//Addy Rock
		if (isNearEntity(Maps::ENTITY_ADAMANTITE_ROCK))
		{
			printf("Addy Rock\n");
			//if added set rock to empty
			if (Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_ADAMANTITE_ORE), 1))
			{
				Maps.setMapEntity(playerDestinationX, playerDestinationY, Maps.getEntityFromID(Maps::ENTITY_EMPTY_ROCK));
				assignDelayedObjectChange(Maps.getEntityFromID(Maps::ENTITY_ADAMANTITE_ROCK), playerDestinationX, playerDestinationY, clock(), 25000);
			}

			playerDestinationX = Maps.getPlayerX();
			playerDestinationY = Maps.getPlayerY();
		}

		//Rune Rock
		if (isNearEntity(Maps::ENTITY_RUNITE_ROCK))
		{
			printf("Rune Rock\n");
			//if added set rock to empty
			if (Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_RUNITE_ORE), 1))
			{
				Maps.setMapEntity(playerDestinationX, playerDestinationY, Maps.getEntityFromID(Maps::ENTITY_EMPTY_ROCK));
				assignDelayedObjectChange(Maps.getEntityFromID(Maps::ENTITY_RUNITE_ROCK), playerDestinationX, playerDestinationY, clock(), 30000);
			}

			playerDestinationX = Maps.getPlayerX();
			playerDestinationY = Maps.getPlayerY();
		}

		//Silver Rock
		if (isNearEntity(Maps::ENTITY_SILVER_ROCK))
		{
			printf("Iron Rock\n");
			//if added set rock to empty
			if (Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_SILVER_ORE), 1))
			{
				Maps.setMapEntity(playerDestinationX, playerDestinationY, Maps.getEntityFromID(Maps::ENTITY_EMPTY_ROCK));
				assignDelayedObjectChange(Maps.getEntityFromID(Maps::ENTITY_SILVER_ROCK), playerDestinationX, playerDestinationY, clock(), 10000);
			}

			playerDestinationX = Maps.getPlayerX();
			playerDestinationY = Maps.getPlayerY();
		}

		//Gold Rock
		if (isNearEntity(Maps::ENTITY_GOLD_ROCK))
		{
			printf("Iron Rock\n");
			//if added set rock to empty
			if (Inventory.addItemToInventory(Items.getItemFromID(Items::ITEM_GOLD_ORE), 1))
			{
				Maps.setMapEntity(playerDestinationX, playerDestinationY, Maps.getEntityFromID(Maps::ENTITY_EMPTY_ROCK));
				assignDelayedObjectChange(Maps.getEntityFromID(Maps::ENTITY_GOLD_ROCK), playerDestinationX, playerDestinationY, clock(), 20000);
			}

			playerDestinationX = Maps.getPlayerX();
			playerDestinationY = Maps.getPlayerY();
		}
	}
}

void Logic::update()
{
	Shop Shop;
	Chat Chat;
	Maps Maps;
	//16
	if (clock() - lastAnimationTick >= 16)
	{
		movePlayer();
		
		lastAnimationTick = clock();
	}
	if (clock() - lastShopUpdate >= 60000)
	{
		Shop::generalShopCurrent.update();
		Shop::barShop.update();
		Shop::oreShop.update();
		Shop::icecreamShop.update();
		
		lastShopUpdate = clock();
	}
	if (clock() - lastTickUpdate >= tickRate)
	{
		
		interact();
		updateObjects();
		updatePlayerDirection();
		
		

		//FPSCounter();

		lastTickUpdate = clock();
	}
}