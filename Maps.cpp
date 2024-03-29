
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include <vector>
#include "Maps.h"

int playerSpawnX = 10, playerSpawnY = 10;
int playerX = 10, playerY = 10;
int mapSize = 20;



struct Maps::tile
	blankTile = { Maps::TILE_VOID, true, },
	stone =		{ Maps::TILE_STONE, true },
	stoneWall = { Maps::TILE_STONEWALL, false },
	water =		{ Maps::TILE_WATER, false },
	dirt =		{ Maps::TILE_DIRT, true };

struct Maps::entity
	blankEntity =		{ Maps::ENTITY_NONE, true },
	furnace =			{ Maps::ENTITY_FURNACE, false },
	anvil =				{ Maps::ENTITY_ANVIL, false },
	bee =				{ Maps::ENTITY_BEE, false },
	shopKeeperOre =		{ Maps::ENTITY_ORE_SHOP_KEEPER, false },
	shopKeeperBar =		{ Maps::ENTITY_BAR_SHOP_KEEPER, false },
	shopKeeperGeneral = { Maps::ENTITY_GENERAL_SHOP_KEEPER, false },
	shopKeeperIcecream ={ Maps::ENTITY_ICECREAM_SHOP_KEEPER, false },
	closedDoor =		{ Maps::ENTITY_CLOSED_DOOR, false },
	openDoor =			{ Maps::ENTITY_OPEN_DOOR, true },
	emptyRock =			{ Maps::ENTITY_EMPTY_ROCK, false },
	copperRock =		{ Maps::ENTITY_COPPER_ROCK, false }, 
	tinRock =			{ Maps::ENTITY_TIN_ROCK, false }, 
	ironRock =			{ Maps::ENTITY_IRON_ROCK, false }, 
	coalRock =			{ Maps::ENTITY_COAL_ROCK, false }, 
	mithrilRock =		{ Maps::ENTITY_MITHRIL_ROCK, false }, 
	adamantiteRock =	{ Maps::ENTITY_ADAMANTITE_ROCK, false }, 
	runiteRock =		{ Maps::ENTITY_RUNITE_ROCK, false },
	silverRock =		{ Maps::ENTITY_SILVER_ROCK, false },
	goldRock =			{ Maps::ENTITY_GOLD_ROCK, false };


std::vector<std::vector<Maps::tile>> currentMapTiles;

std::vector<std::vector<Maps::entity>> currentMapEntities;



int Maps::getMapTileID(int x, int y)
{
	if (x >= mapSize || x < 0 || y >= mapSize || y < 0)
		return 1000;
	return currentMapTiles[y][x].id;
}

int Maps::getMapEntityID(int x, int y)
{
	if (x >= mapSize || x < 0 || y >= mapSize || y < 0)
		return 0;
	return currentMapEntities[y][x].id;
}

void Maps::updateMapSize()
{
	currentMapTiles.resize(mapSize);
	for (int i = 0; i < mapSize; i++)
		currentMapTiles[i].resize(mapSize);

	currentMapEntities.resize(mapSize);
	for (int i = 0; i < mapSize; i++)
		currentMapEntities[i].resize(mapSize);
}

void Maps::resetMap()
{
	//printf("Tile map size: %i\n", activeMapTiles.size());
	for (int y = 0; y <= mapSize - 1; y++)
	{
		for (int x = 0; x <= mapSize - 1; x++)
		{
			currentMapTiles[x][y] = stone;
			currentMapEntities[x][y] = blankEntity;
		}
	}
}

void Maps::setMapTile(int x, int y, Maps::tile tile)
{
	if (x >= mapSize || x < 0 || y >= mapSize || y < 0)
		return;
	currentMapTiles[y][x] = tile;

}

void Maps::setMapEntity(int x, int y, Maps::entity entity)
{
	if (x >= mapSize || x < 0 || y >= mapSize || y < 0)
		return;
	currentMapEntities[y][x] = entity;
}

Maps::tile Maps::getTileFromID(int ID)
{
	switch (ID)
	{
	case TILE_VOID:
		return blankTile;
		break;
	case TILE_STONE:
		return stone;
		break;
	case TILE_STONEWALL:
		return stoneWall;
		break;
	case TILE_WATER:
		return water;
		break;
	case TILE_DIRT:
		return dirt;
		break;
	default:
		return blankTile;
		break;
	}

}

Maps::entity Maps::getEntityFromID(int ID)
{
	switch (ID)
	{
	case ENTITY_NONE:
		return blankEntity;
		break;
	case ENTITY_FURNACE:
		return furnace;
		break;
	case ENTITY_BEE:
		return bee;
		break;
	case ENTITY_CLOSED_DOOR:
		return closedDoor;
		break;
	case ENTITY_OPEN_DOOR:
		return openDoor;
		break;
	case ENTITY_EMPTY_ROCK:
		return emptyRock;
		break;
	case ENTITY_COPPER_ROCK:
		return copperRock;
		break;
	case ENTITY_TIN_ROCK:
		return tinRock;
		break;
	case ENTITY_IRON_ROCK:
		return ironRock;
		break;
	case ENTITY_COAL_ROCK:
		return coalRock;
		break;
	case ENTITY_MITHRIL_ROCK:
		return mithrilRock;
		break;
	case ENTITY_ADAMANTITE_ROCK:
		return adamantiteRock;
		break;
	case ENTITY_RUNITE_ROCK:
		return runiteRock;
		break;
	case ENTITY_SILVER_ROCK:
		return silverRock;
		break;
	case ENTITY_GOLD_ROCK:
		return goldRock;
		break;
	case ENTITY_ANVIL:
		return anvil;
		break;
	case ENTITY_ORE_SHOP_KEEPER:
		return shopKeeperOre;
		break;
	case ENTITY_BAR_SHOP_KEEPER:
		return shopKeeperBar;
		break;
	case ENTITY_GENERAL_SHOP_KEEPER:
		return shopKeeperGeneral;
		break;
	case ENTITY_ICECREAM_SHOP_KEEPER:
		return shopKeeperIcecream;
		break;
	default:
		return blankEntity;
		break;
	}

}

bool Maps::getTileIsWalkable(int ID)
{
	return getTileFromID(ID).walkable;
}

bool Maps::getEntityIsWalkable(int ID)
{
	return getEntityFromID(ID).walkable;
}

int Maps::getMapSize()
{
	return mapSize;
}

void Maps::setMapSize(int size)
{
	mapSize = size;
}

int Maps::getPlayerSpawnX()
{
	return playerSpawnX;
}

int Maps::getPlayerSpawnY()
{
	return playerSpawnY;
}

void Maps::setPlayerSpawnX(int x)
{
	playerSpawnX = x;
}

void Maps::setPlayerSpawnY(int y)
{
	playerSpawnY = y;
}

int Maps::getPlayerX()
{
	return playerX;
}

int Maps::getPlayerY()
{
	return playerY;
}

void Maps::setPlayerX(int x)
{
	playerX = x;
}

void Maps::setPlayerY(int y)
{
	playerY = y;
}
