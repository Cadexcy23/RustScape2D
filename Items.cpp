#include <SDL.h>
#include <SDL_image.h>
#include <string>
#include "Items.h"
#include "Artist.h"



struct Items::item
	Items::empty =				{ Items::ITEM_NONE, "Empty", 0, false },
	Items::goldCoin =			{ Items::ITEM_GOLD_COIN, "Gold Coin", 1, true },
	Items::copperOre =			{ Items::ITEM_COPPER_ORE, "Copper Ore", 10, false },
	Items::tinOre =				{ Items::ITEM_TIN_ORE, "Tin Ore", 10, false },
	Items::ironOre =			{ Items::ITEM_IRON_ORE, "Iron Ore", 50, false },
	Items::coalOre =			{ Items::ITEM_COAL_ORE, "Coal Ore", 80, false },
	Items::mithrilOre =			{ Items::ITEM_MITHRIL_ORE, "Mithril Ore", 200, false },
	Items::adamantiteOre =		{ Items::ITEM_ADAMANTITE_ORE, "Adamantite Ore", 400, false },
	Items::runiteOre =			{ Items::ITEM_RUNITE_ORE, "Runite Ore", 800, false },
	Items::silverOre =			{ Items::ITEM_SILVER_ORE, "Silver Ore", 100, false },
	Items::goldOre =			{ Items::ITEM_GOLD_ORE, "Gold Ore", 200, false },
	Items::bronzeBar =			{ Items::ITEM_BRONZE_BAR, "Bronze Bar", 100, false },
	Items::ironBar =			{ Items::ITEM_IRON_BAR, "Iron Bar", 250, false },
	Items::steelBar =			{ Items::ITEM_STEEL_BAR, "Steel Bar", 500, false },
	Items::mithrilBar =			{ Items::ITEM_MITHRIL_BAR, "Mithril Bar", 1000, false },
	Items::adamantiumBar =		{ Items::ITEM_ADAMANTIUM_BAR, "Adamantium Bar", 2000, false },
	Items::runeBar =			{ Items::ITEM_RUNE_BAR, "Rune Bar", 5000, false },
	Items::silverBar =			{ Items::ITEM_SILVER_BAR, "Silver Bar", 500, false },
	Items::goldBar =			{ Items::ITEM_GOLD_BAR, "Gold Bar", 1000, false },
	Items::goldRing =			{ Items::ITEM_GOLD_RING, "Gold Ring", 1200, false },
	Items::bronzeDagger =		{ Items::ITEM_BRONZE_DAGGER, "Bronze Dagger", 10, false },
	Items::bronzeSword =		{ Items::ITEM_BRONZE_SWORD, "Bronze Sword", 15, false },
	Items::ironDagger =			{ Items::ITEM_IRON_DAGGER, "Iron Dagger", 25, false },
	Items::ironSword =			{ Items::ITEM_IRON_SWORD, "Iron Sword", 30, false },
	Items::steelDagger =		{ Items::ITEM_STEEL_DAGGER, "Steel Dagger", 40, false },
	Items::steelSword =			{ Items::ITEM_STEEL_SWORD, "Steel Sword", 45, false },
	Items::mithrilDagger =		{ Items::ITEM_MITHRIL_DAGGER, "Mithril Dagger", 55, false },
	Items::mithrilSword =		{ Items::ITEM_MITHRIL_SWORD, "Mithril Sword", 60, false },
	Items::adamantiumDagger =	{ Items::ITEM_ADAMANTIUM_DAGGER, "Adamantium Dagger", 70, false },
	Items::adamantiumSword =	{ Items::ITEM_ADAMANTIUM_SWORD, "Adamantium Sword", 75, false },
	Items::runeDagger =			{ Items::ITEM_RUNE_DAGGER, "Rune Dagger", 85, false },
	Items::runeSword =			{ Items::ITEM_RUNE_SWORD, "Rune Sword", 90, false },
	Items::chocolateIcecream =	{ Items::ITEM_CHOCOLATE_ICECREAM, "Chocolate Icecream", 100, false },
	Items::strawberryIcecream =	{ Items::ITEM_STRAWBERRY_ICECREAM, "Strawberry Icecream", 200, false },
	Items::peachIcecream =		{ Items::ITEM_PEACH_ICECREAM, "Peach Icecream", 300, false };




void loadItemTextures()
{
	Artist Artist;
	Items::goldCoin.texture = Artist.loadTexture("Resource/items/gold.png");
}

int Items::getItemID(Items::item item)
{
	return item.id;
}

Items::item Items::getItemFromID(int id)
{
	switch (id)
	{
	case Items::ITEM_NONE:
		return empty;
		break;
	case Items::ITEM_GOLD_COIN:
		return goldCoin;
		break;
	case Items::ITEM_COPPER_ORE:
		return copperOre;
		break;
	case Items::ITEM_TIN_ORE:
		return tinOre;
		break;
	case Items::ITEM_IRON_ORE:
		return ironOre;
		break;
	case Items::ITEM_COAL_ORE:
		return coalOre;
		break;
	case Items::ITEM_MITHRIL_ORE:
		return mithrilOre;
		break;
	case Items::ITEM_ADAMANTITE_ORE:
		return adamantiteOre;
		break;
	case Items::ITEM_RUNITE_ORE:
		return runiteOre;
		break;
	case Items::ITEM_SILVER_ORE:
		return silverOre;
		break;
	case Items::ITEM_GOLD_ORE:
		return goldOre;
		break;
	case Items::ITEM_BRONZE_BAR:
		return bronzeBar;
		break;
	case Items::ITEM_IRON_BAR:
		return ironBar;
		break;
	case Items::ITEM_STEEL_BAR:
		return steelBar;
		break;
	case Items::ITEM_MITHRIL_BAR:
		return mithrilBar;
		break;
	case Items::ITEM_ADAMANTIUM_BAR:
		return adamantiumBar;
		break;
	case Items::ITEM_RUNE_BAR:
		return runeBar;
		break;
	case Items::ITEM_SILVER_BAR:
		return silverBar;
		break;
	case Items::ITEM_GOLD_BAR:
		return goldBar;
		break;
	case Items::ITEM_GOLD_RING:
		return goldRing;
		break;
	case Items::ITEM_BRONZE_DAGGER:
		return bronzeDagger;
		break;
	case Items::ITEM_BRONZE_SWORD:
		return bronzeSword;
		break;
	case Items::ITEM_IRON_DAGGER:
		return ironDagger;
		break;
	case Items::ITEM_IRON_SWORD:
		return ironSword;
		break;
	case Items::ITEM_STEEL_DAGGER:
		return steelDagger;
		break;
	case Items::ITEM_STEEL_SWORD:
		return steelSword;
		break;
	case Items::ITEM_MITHRIL_DAGGER:
		return mithrilDagger;
		break;
	case Items::ITEM_MITHRIL_SWORD:
		return mithrilSword;
		break;
	case Items::ITEM_ADAMANTIUM_DAGGER:
		return adamantiumDagger;
		break;
	case Items::ITEM_ADAMANTIUM_SWORD:
		return adamantiumSword;
		break;
	case Items::ITEM_RUNE_DAGGER:
		return runeDagger;
		break;
	case Items::ITEM_RUNE_SWORD:
		return runeSword;
		break;
	case Items::ITEM_CHOCOLATE_ICECREAM:
		return chocolateIcecream;
		break;
	case Items::ITEM_STRAWBERRY_ICECREAM:
		return strawberryIcecream;
		break;
	case Items::ITEM_PEACH_ICECREAM:
		return peachIcecream;
		break;
	}

}

