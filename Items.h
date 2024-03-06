#pragma once
#include <string>
#ifndef SDL
#include <SDL.h>
#endif // !SDL


class Items {

public: 
	struct item {
		int id;
		std::string name;
		int price;
		bool stackable;
		SDL_Texture* texture;
	};

public:
	enum itemID {
		ITEM_NONE,
		ITEM_GOLD_COIN,
		ITEM_COPPER_ORE,
		ITEM_TIN_ORE,
		ITEM_IRON_ORE,
		ITEM_COAL_ORE,
		ITEM_MITHRIL_ORE,
		ITEM_ADAMANTITE_ORE,
		ITEM_RUNITE_ORE,
		ITEM_SILVER_ORE,
		ITEM_GOLD_ORE,
		ITEM_BRONZE_BAR,
		ITEM_IRON_BAR,
		ITEM_STEEL_BAR,
		ITEM_MITHRIL_BAR,
		ITEM_ADAMANTIUM_BAR,
		ITEM_RUNE_BAR,
		ITEM_SILVER_BAR,
		ITEM_GOLD_BAR,
		ITEM_GOLD_RING,
		ITEM_BRONZE_DAGGER,
		ITEM_BRONZE_SWORD,
		ITEM_IRON_DAGGER,
		ITEM_IRON_SWORD,
		ITEM_STEEL_DAGGER,
		ITEM_STEEL_SWORD,
		ITEM_MITHRIL_DAGGER,
		ITEM_MITHRIL_SWORD,
		ITEM_ADAMANTIUM_DAGGER,
		ITEM_ADAMANTIUM_SWORD,
		ITEM_RUNE_DAGGER,
		ITEM_RUNE_SWORD,
		ITEM_CHOCOLATE_ICECREAM,
		ITEM_STRAWBERRY_ICECREAM,
		ITEM_PEACH_ICECREAM,
		ITEM_COUNT
	};

public:
	static item empty;
	static item goldCoin;
	static item copperOre;
	static item tinOre;
	static item ironOre;
	static item coalOre;
	static item mithrilOre;
	static item adamantiteOre;
	static item runiteOre;
	static item silverOre;
	static item goldOre;
	static item bronzeBar;
	static item ironBar;
	static item steelBar;
	static item mithrilBar;
	static item adamantiumBar;
	static item runeBar;
	static item silverBar;
	static item goldBar;
	static item goldRing;
	static item bronzeDagger;
	static item bronzeSword;
	static item ironDagger;
	static item ironSword;
	static item steelDagger;
	static item steelSword;
	static item mithrilDagger;
	static item mithrilSword;
	static item adamantiumDagger;
	static item adamantiumSword;
	static item runeDagger;
	static item runeSword;
	static item chocolateIcecream;
	static item strawberryIcecream;
	static item peachIcecream;


		
	int getItemID(Items::item item);

	Items::item getItemFromID(int id);

};