
#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include <string>
#include "Artist.h"
#include "Maps.h"
#include "Menus.h"
#include "Items.h"
#include "Inventory.h"
#include "Chat.h"
#include "Shop.h"
#include "Player.h"

//Screen dimension constants
const int SCREEN_WIDTH = 1280;
const int SCREEN_HEIGHT = 720;


//Loads individual image as texture
//SDL_Texture* Artist::loadTexture(std::string path);

//The window we'll be rendering to
SDL_Window* gWindow = NULL;

//The window renderer
SDL_Renderer* gRenderer = NULL;

//Initialize textures

//tiles
SDL_Texture* gVoidTile = NULL;
SDL_Texture* gStoneTile = NULL;
SDL_Texture* gStoneWallTile = NULL;
SDL_Texture* gWaterTile = NULL;
SDL_Texture* gDirtTile = NULL;
SDL_Texture* gOutOfMapTile = NULL;
//entities
SDL_Texture* gPlayer = NULL;
SDL_Texture* gFurnace = NULL;
SDL_Texture* gAnvil = NULL;
SDL_Texture* gHumanEnemy = NULL;
SDL_Texture* gBee = NULL;
SDL_Texture* gShopKeeper = NULL;
SDL_Texture* gShopKeeperOre = NULL;
SDL_Texture* gShopKeeperBar = NULL;
SDL_Texture* gShopKeeperIcecream = NULL;
SDL_Texture* gClosedDoor = NULL;
SDL_Texture* gOpenDoor = NULL;
SDL_Texture* gEmptyRock = NULL;
SDL_Texture* gCopperRock = NULL;
SDL_Texture* gTinRock = NULL;
SDL_Texture* gIronRock = NULL;
SDL_Texture* gCoalRock = NULL;
SDL_Texture* gMithrilRock = NULL;
SDL_Texture* gAdamantiteRock = NULL;
SDL_Texture* gRuniteRock = NULL;
SDL_Texture* gSilverRock = NULL;
SDL_Texture* gGoldRock = NULL;
//items
SDL_Texture* gGoldCoin= NULL;
SDL_Texture* gCopperOre = NULL;
SDL_Texture* gTinOre = NULL;
SDL_Texture* gIronOre = NULL;
SDL_Texture* gCoalOre = NULL;
SDL_Texture* gMithrilOre = NULL;
SDL_Texture* gAdamantiteOre = NULL;
SDL_Texture* gRuniteOre = NULL;
SDL_Texture* gSilverOre = NULL;
SDL_Texture* gGoldOre = NULL;
SDL_Texture* gBronzeBar = NULL;
SDL_Texture* gIronBar = NULL;
SDL_Texture* gSteelBar = NULL;
SDL_Texture* gMithrilBar = NULL;
SDL_Texture* gAdamantiumBar = NULL;
SDL_Texture* gRuneBar = NULL;
SDL_Texture* gSilverBar = NULL;
SDL_Texture* gGoldBar = NULL;
SDL_Texture* gGoldRing = NULL;
SDL_Texture* gBronzeDagger = NULL;
SDL_Texture* gIronDagger = NULL;
SDL_Texture* gSteelDagger = NULL;
SDL_Texture* gMithrilDagger = NULL;
SDL_Texture* gAdamantiumDagger = NULL;
SDL_Texture* gRuneDagger = NULL;
SDL_Texture* gBronzeSword = NULL;
SDL_Texture* gIronSword = NULL;
SDL_Texture* gSteelSword = NULL;
SDL_Texture* gMithrilSword = NULL;
SDL_Texture* gAdamantiumSword = NULL;
SDL_Texture* gRuneSword = NULL;
SDL_Texture* gChocolateIcecream = NULL;
SDL_Texture* gStrawberryIcecream = NULL;
SDL_Texture* gPeachIcecream = NULL;
//sidebar
SDL_Texture* gSidebarBackground = NULL;
SDL_Texture* gSidebarIconPlate = NULL;
SDL_Texture* gSidebarSelected = NULL;
SDL_Texture* gSidebarInventoryBackground = NULL;
SDL_Texture* gSidebarChatBox = NULL;
SDL_Texture* gCombatIcon = NULL;
SDL_Texture* gEmotesIcon = NULL;
SDL_Texture* gEquipmentIcon = NULL;
SDL_Texture* gExitIcon = NULL;
SDL_Texture* gInventoryIcon = NULL;
SDL_Texture* gLevelsIcon = NULL;
SDL_Texture* gOptionsIcon = NULL;
SDL_Texture* gPrayerIcon = NULL;
SDL_Texture* gQuestsIcon = NULL;
SDL_Texture* gSpellsIcon = NULL;
//numbers
SDL_Texture* gCountOne = NULL;
SDL_Texture* gCountTwo = NULL;
SDL_Texture* gCountThree = NULL;
SDL_Texture* gCountFour = NULL;
SDL_Texture* gCountFive = NULL;
SDL_Texture* gCountSix = NULL;
SDL_Texture* gCountSeven = NULL;
SDL_Texture* gCountEight = NULL;
SDL_Texture* gCountNine = NULL;
SDL_Texture* gCountZero = NULL;
SDL_Texture* gCountPengu = NULL;
SDL_Texture* gCountThousand = NULL;
SDL_Texture* gCountMillion = NULL;
//letters
SDL_Texture* gChatLetterLowerA = NULL;
SDL_Texture* gChatLetterLowerB = NULL;
SDL_Texture* gChatLetterLowerC = NULL;
SDL_Texture* gChatLetterLowerD = NULL;
SDL_Texture* gChatLetterLowerE = NULL;
SDL_Texture* gChatLetterLowerF = NULL;
SDL_Texture* gChatLetterLowerG = NULL;
SDL_Texture* gChatLetterLowerH = NULL;
SDL_Texture* gChatLetterLowerI = NULL;
SDL_Texture* gChatLetterLowerJ = NULL;
SDL_Texture* gChatLetterLowerK = NULL;
SDL_Texture* gChatLetterLowerL = NULL;
SDL_Texture* gChatLetterLowerM = NULL;
SDL_Texture* gChatLetterLowerN = NULL;
SDL_Texture* gChatLetterLowerO = NULL;
SDL_Texture* gChatLetterLowerP = NULL;
SDL_Texture* gChatLetterLowerQ = NULL;
SDL_Texture* gChatLetterLowerR = NULL;
SDL_Texture* gChatLetterLowerS = NULL;
SDL_Texture* gChatLetterLowerT = NULL;
SDL_Texture* gChatLetterLowerU = NULL;
SDL_Texture* gChatLetterLowerV = NULL;
SDL_Texture* gChatLetterLowerW = NULL;
SDL_Texture* gChatLetterLowerX = NULL;
SDL_Texture* gChatLetterLowerY = NULL;
SDL_Texture* gChatLetterLowerZ = NULL;
SDL_Texture* gChatLetterCapA = NULL;
SDL_Texture* gChatLetterCapB = NULL;
SDL_Texture* gChatLetterCapC = NULL;
SDL_Texture* gChatLetterCapD = NULL;
SDL_Texture* gChatLetterCapE = NULL;
SDL_Texture* gChatLetterCapF = NULL;
SDL_Texture* gChatLetterCapG = NULL;
SDL_Texture* gChatLetterCapH = NULL;
SDL_Texture* gChatLetterCapI = NULL;
SDL_Texture* gChatLetterCapJ = NULL;
SDL_Texture* gChatLetterCapK = NULL;
SDL_Texture* gChatLetterCapL = NULL;
SDL_Texture* gChatLetterCapM = NULL;
SDL_Texture* gChatLetterCapN = NULL;
SDL_Texture* gChatLetterCapO = NULL;
SDL_Texture* gChatLetterCapP = NULL;
SDL_Texture* gChatLetterCapQ = NULL;
SDL_Texture* gChatLetterCapR = NULL;
SDL_Texture* gChatLetterCapS = NULL;
SDL_Texture* gChatLetterCapT = NULL;
SDL_Texture* gChatLetterCapU = NULL;
SDL_Texture* gChatLetterCapV = NULL;
SDL_Texture* gChatLetterCapW = NULL;
SDL_Texture* gChatLetterCapX = NULL;
SDL_Texture* gChatLetterCapY = NULL;
SDL_Texture* gChatLetterCapZ = NULL;
SDL_Texture* gChatLetter1 = NULL;
SDL_Texture* gChatLetter2 = NULL;
SDL_Texture* gChatLetter3 = NULL;
SDL_Texture* gChatLetter4 = NULL;
SDL_Texture* gChatLetter5 = NULL;
SDL_Texture* gChatLetter6 = NULL;
SDL_Texture* gChatLetter7 = NULL;
SDL_Texture* gChatLetter8 = NULL;
SDL_Texture* gChatLetter9 = NULL;
SDL_Texture* gChatLetter0 = NULL;
SDL_Texture* gChatLetterPound = NULL;
SDL_Texture* gChatLetter$ = NULL;
SDL_Texture* gChatLetterPercent = NULL;
SDL_Texture* gChatLetterAmpersand = NULL;
SDL_Texture* gChatLetterLeftParentheses = NULL;
SDL_Texture* gChatLetterRightParentheses = NULL;
SDL_Texture* gChatLetterComma = NULL;
SDL_Texture* gChatLetterApostrophe = NULL;
SDL_Texture* gChatLetterMinus = NULL;
SDL_Texture* gChatLetterSemiColon = NULL;
SDL_Texture* gChatLetterColon = NULL;
SDL_Texture* gChatLetterAt = NULL;
SDL_Texture* gChatLetterLeftBracket = NULL;
SDL_Texture* gChatLetterRightBracket = NULL;
SDL_Texture* gChatLetterCaret = NULL;
SDL_Texture* gChatLetterUnderScore = NULL;
SDL_Texture* gChatLetterTilde = NULL;
SDL_Texture* gChatLetterAcute = NULL;
SDL_Texture* gChatLetterLeftBrace = NULL;
SDL_Texture* gChatLetterRightBrace = NULL;
SDL_Texture* gChatLetterPlus = NULL;
SDL_Texture* gChatLetterEquals = NULL;
SDL_Texture* gChatLetterAsterisk = NULL;
SDL_Texture* gChatLetterBackSlash = NULL;
SDL_Texture* gChatLetterForwardSlash = NULL;
SDL_Texture* gChatLetterExclamationMark = NULL;
SDL_Texture* gChatLetterQuestionMark = NULL;
SDL_Texture* gChatLetterGreaterThan = NULL;
SDL_Texture* gChatLetterLessThan = NULL;
SDL_Texture* gChatLetterPeriod = NULL;
SDL_Texture* gChatLetterQuotationMark = NULL;
SDL_Texture* gChatLetterVerticalBar = NULL;
//menus
SDL_Texture* gExitButton = NULL;
SDL_Texture* gFurnaceBackground = NULL;
SDL_Texture* gAnvilBackground = NULL;
SDL_Texture* gShopBackground = NULL;








//Update screen
void Artist::updateScreen()
{
	SDL_RenderPresent(gRenderer);
}

//Clear screen
void Artist::clearScreen()
{
	SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
	SDL_RenderClear(gRenderer);
}

SDL_Texture* Artist::loadTexture(std::string path)
{
	//The final texture
	SDL_Texture* newTexture = NULL;

	//Load image at specified path
	SDL_Surface* loadedSurface = IMG_Load(path.c_str());
	if (loadedSurface == NULL)
	{
		printf("Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError());
	}
	else
	{
		//Create texture from surface pixels
		newTexture = SDL_CreateTextureFromSurface(gRenderer, loadedSurface);
		if (newTexture == NULL)
		{
			printf("Unable to create texture from %s! SDL Error: %s\n", path.c_str(), SDL_GetError());
		}

		//Get rid of old loaded surface
		SDL_FreeSurface(loadedSurface);
	}

	return newTexture;
}

bool Artist::init()
{

	//Initialization flag
	bool success = true;

	//Initialize SDL
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not initialize! SDL Error: %s\n", SDL_GetError());
		success = false;
	}
	else
	{
		//Set texture filtering to linear
		if (!SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "1"))
		{
			printf("Warning: Linear texture filtering not enabled!");
		}

		//Create window
		gWindow = SDL_CreateWindow("RustScape2D", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		if (gWindow == NULL)
		{
			printf("Window could not be created! SDL Error: %s\n", SDL_GetError());
			success = false;
		}
		else
		{
			//Create renderer for window
			gRenderer = SDL_CreateRenderer(gWindow, -1, SDL_RENDERER_ACCELERATED);
			if (gRenderer == NULL)
			{
				printf("Renderer could not be created! SDL Error: %s\n", SDL_GetError());
				success = false;
			}
			else
			{
				//Initialize renderer color
				SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);

				//Initialize PNG loading
				int imgFlags = IMG_INIT_PNG;
				if (!(IMG_Init(imgFlags) & imgFlags))
				{
					printf("SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError());
					success = false;
				}
			}
		}
	}

	return success;
}

bool Artist::loadMedia()
{
	//Loading success flag
	bool success = true;

	//Load texture
	//tiles
	gVoidTile = loadTexture("Resource/tiles/voidTile.png");
	if (gVoidTile == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gStoneTile = loadTexture("Resource/tiles/stoneTile.png");
	if (gStoneTile == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gStoneWallTile = loadTexture("Resource/tiles/stoneWallTile.png");
	if (gStoneWallTile == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gWaterTile = loadTexture("Resource/tiles/waterTile.png");
	if (gWaterTile == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gDirtTile = loadTexture("Resource/tiles/dirtTile.png");
	if (gDirtTile == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gOutOfMapTile = loadTexture("Resource/tiles/OutOfMapTile.png");
	if (gOutOfMapTile == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	//entities
	gHumanEnemy = loadTexture("Resource/entities/humanEnemy.png");
	if (gHumanEnemy == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gPlayer = loadTexture("Resource/entities/player.png");
	if (gPlayer == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gFurnace = loadTexture("Resource/entities/furnace.png");
	if (gFurnace == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gAnvil = loadTexture("Resource/entities/anvil.png");
	if (gAnvil == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gBee = loadTexture("Resource/entities/bee.png");
	if (gBee == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gShopKeeper = loadTexture("Resource/entities/shopKeeper.png");
	if (gShopKeeper == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gShopKeeperOre = loadTexture("Resource/entities/shopKeeperOre.png");
	if (gShopKeeperOre == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gShopKeeperBar = loadTexture("Resource/entities/shopKeeperBar.png");
	if (gShopKeeperBar == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gShopKeeperIcecream = loadTexture("Resource/entities/shopKeeperIcecream.png");
	if (gShopKeeperIcecream == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gClosedDoor = loadTexture("Resource/entities/closedDoor.png");
	if (gClosedDoor == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gOpenDoor = loadTexture("Resource/entities/openDoor.png");
	if (gOpenDoor == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gEmptyRock = loadTexture("Resource/entities/emptyRock.png");
	if (gEmptyRock == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gCopperRock = loadTexture("Resource/entities/copperRock.png");
	if (gCopperRock == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gTinRock = loadTexture("Resource/entities/tinRock.png");
	if (gTinRock == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gIronRock = loadTexture("Resource/entities/ironRock.png");
	if (gIronRock == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gCoalRock = loadTexture("Resource/entities/coalRock.png");
	if (gCoalRock == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gMithrilRock = loadTexture("Resource/entities/mithrilRock.png");
	if (gMithrilRock == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gAdamantiteRock = loadTexture("Resource/entities/adamantiteRock.png");
	if (gAdamantiteRock == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gRuniteRock = loadTexture("Resource/entities/runiteRock.png");
	if (gRuniteRock == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gSilverRock = loadTexture("Resource/entities/silverRock.png");
	if (gSilverRock == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gGoldRock = loadTexture("Resource/entities/goldRock.png");
	if (gGoldRock == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	//sidebar
	gSidebarBackground = loadTexture("Resource/sidebar/sidebarBackground.png");
	if (gSidebarBackground == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gSidebarIconPlate = loadTexture("Resource/sidebar/sidebarIconPlate.png");
	if (gSidebarIconPlate == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gSidebarSelected = loadTexture("Resource/sidebar/sidebarSelected.png");
	if (gSidebarSelected == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gSidebarInventoryBackground = loadTexture("Resource/sidebar/sidebarInventoryBackground.png");
	if (gSidebarInventoryBackground == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gSidebarChatBox = loadTexture("Resource/sidebar/sidebarChatBox.png");
	if (gSidebarChatBox == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gCombatIcon = loadTexture("Resource/sidebar/sidebarCombatIcon.png");
	if (gCombatIcon == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gEmotesIcon = loadTexture("Resource/sidebar/sidebarEmotesIcon.png");
	if (gEmotesIcon == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gEquipmentIcon = loadTexture("Resource/sidebar/sidebarEquipmentIcon.png");
	if (gEquipmentIcon == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gExitIcon = loadTexture("Resource/sidebar/sidebarExitIcon.png");
	if (gExitIcon == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gInventoryIcon = loadTexture("Resource/sidebar/sidebarInventoryIcon.png");
	if (gInventoryIcon == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gLevelsIcon = loadTexture("Resource/sidebar/sidebarLevelsIcon.png");
	if (gLevelsIcon == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gOptionsIcon = loadTexture("Resource/sidebar/sidebarOptionsIcon.png");
	if (gOptionsIcon == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gPrayerIcon = loadTexture("Resource/sidebar/sidebarPrayerIcon.png");
	if (gPrayerIcon == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gQuestsIcon = loadTexture("Resource/sidebar/sidebarQuestsIcon.png");
	if (gQuestsIcon == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}
	gSpellsIcon = loadTexture("Resource/sidebar/sidebarSpellsIcon.png");
	if (gSpellsIcon == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}

	//items
	gGoldCoin = loadTexture("Resource/items/gold.png");
	gCopperOre = loadTexture("Resource/items/copperOre.png");
	gTinOre = loadTexture("Resource/items/tinOre.png");
	gIronOre = loadTexture("Resource/items/ironOre.png");
	gCoalOre = loadTexture("Resource/items/coalOre.png");
	gMithrilOre = loadTexture("Resource/items/mithrilOre.png");
	gAdamantiteOre = loadTexture("Resource/items/adamantiteOre.png");
	gRuniteOre = loadTexture("Resource/items/runiteOre.png");
	gSilverOre = loadTexture("Resource/items/silverOre.png");
	gGoldOre = loadTexture("Resource/items/goldOre.png");
	gBronzeBar = loadTexture("Resource/items/bronzeBar.png");
	gIronBar = loadTexture("Resource/items/ironBar.png");
	gSteelBar = loadTexture("Resource/items/steelBar.png");
	gMithrilBar = loadTexture("Resource/items/mithrilBar.png");
	gAdamantiumBar = loadTexture("Resource/items/adamantiumBar.png");
	gRuneBar = loadTexture("Resource/items/runeBar.png");
	gSilverBar = loadTexture("Resource/items/silverBar.png");
	gGoldBar = loadTexture("Resource/items/goldBar.png");
	gGoldRing = loadTexture("Resource/items/goldRing.png");
	gBronzeDagger = loadTexture("Resource/items/bronzeDagger.png");
	gIronDagger = loadTexture("Resource/items/ironDagger.png");
	gSteelDagger = loadTexture("Resource/items/steelDagger.png");
	gMithrilDagger = loadTexture("Resource/items/mithrilDagger.png");
	gAdamantiumDagger = loadTexture("Resource/items/adamantiumDagger.png");
	gRuneDagger = loadTexture("Resource/items/runeDagger.png");
	gBronzeSword = loadTexture("Resource/items/bronzeSword.png");
	gIronSword = loadTexture("Resource/items/ironSword.png");
	gSteelSword = loadTexture("Resource/items/steelSword.png");
	gMithrilSword = loadTexture("Resource/items/mithrilSword.png");
	gAdamantiumSword = loadTexture("Resource/items/adamantiumSword.png");
	gRuneSword = loadTexture("Resource/items/runeSword.png");
	gChocolateIcecream = loadTexture("Resource/items/icecreamChocolate.png");
	gStrawberryIcecream = loadTexture("Resource/items/icecreamStrawberry.png");
	gPeachIcecream = loadTexture("Resource/items/icecreamPeach.png");
	//numbers
	gCountOne = loadTexture("Resource/items/count/countOne.png");
	gCountTwo = loadTexture("Resource/items/count/countTwo.png");
	gCountThree = loadTexture("Resource/items/count/countThree.png");
	gCountFour = loadTexture("Resource/items/count/countFour.png");
	gCountFive = loadTexture("Resource/items/count/countFive.png");
	gCountSix = loadTexture("Resource/items/count/countSix.png");
	gCountSeven = loadTexture("Resource/items/count/countSeven.png");
	gCountEight = loadTexture("Resource/items/count/countEight.png");
	gCountNine = loadTexture("Resource/items/count/countNine.png");
	gCountZero = loadTexture("Resource/items/count/countZero.png");
	gCountPengu = loadTexture("Resource/items/count/countPengu.png");
	gCountThousand = loadTexture("Resource/items/count/countThousand.png");
	gCountMillion = loadTexture("Resource/items/count/countMillion.png");
	//letters
	gChatLetterLowerA = loadTexture("Resource/letters/chat/lowerA.png");
	gChatLetterLowerB = loadTexture("Resource/letters/chat/lowerB.png");
	gChatLetterLowerC = loadTexture("Resource/letters/chat/lowerC.png");
	gChatLetterLowerD = loadTexture("Resource/letters/chat/lowerD.png");
	gChatLetterLowerE = loadTexture("Resource/letters/chat/lowerE.png");
	gChatLetterLowerF = loadTexture("Resource/letters/chat/lowerF.png");
	gChatLetterLowerG = loadTexture("Resource/letters/chat/lowerG.png");
	gChatLetterLowerH = loadTexture("Resource/letters/chat/lowerH.png");
	gChatLetterLowerI = loadTexture("Resource/letters/chat/lowerI.png");
	gChatLetterLowerJ = loadTexture("Resource/letters/chat/lowerJ.png");
	gChatLetterLowerK = loadTexture("Resource/letters/chat/lowerK.png");
	gChatLetterLowerL = loadTexture("Resource/letters/chat/lowerL.png");
	gChatLetterLowerM = loadTexture("Resource/letters/chat/lowerM.png");
	gChatLetterLowerN = loadTexture("Resource/letters/chat/lowerN.png");
	gChatLetterLowerO = loadTexture("Resource/letters/chat/lowerO.png");
	gChatLetterLowerP = loadTexture("Resource/letters/chat/lowerP.png");
	gChatLetterLowerQ = loadTexture("Resource/letters/chat/lowerQ.png");
	gChatLetterLowerR = loadTexture("Resource/letters/chat/lowerR.png");
	gChatLetterLowerS = loadTexture("Resource/letters/chat/lowerS.png");
	gChatLetterLowerT = loadTexture("Resource/letters/chat/lowerT.png");
	gChatLetterLowerU = loadTexture("Resource/letters/chat/lowerU.png");
	gChatLetterLowerV = loadTexture("Resource/letters/chat/lowerV.png");
	gChatLetterLowerW = loadTexture("Resource/letters/chat/lowerW.png");
	gChatLetterLowerX = loadTexture("Resource/letters/chat/lowerX.png");
	gChatLetterLowerY = loadTexture("Resource/letters/chat/lowerY.png");
	gChatLetterLowerZ = loadTexture("Resource/letters/chat/lowerZ.png");
	gChatLetterCapA = loadTexture("Resource/letters/chat/capA.png");
	gChatLetterCapB = loadTexture("Resource/letters/chat/capB.png");
	gChatLetterCapC = loadTexture("Resource/letters/chat/capC.png");
	gChatLetterCapD = loadTexture("Resource/letters/chat/capD.png");
	gChatLetterCapE = loadTexture("Resource/letters/chat/capE.png");
	gChatLetterCapF = loadTexture("Resource/letters/chat/capF.png");
	gChatLetterCapG = loadTexture("Resource/letters/chat/capG.png");
	gChatLetterCapH = loadTexture("Resource/letters/chat/capH.png");
	gChatLetterCapI = loadTexture("Resource/letters/chat/capI.png");
	gChatLetterCapJ = loadTexture("Resource/letters/chat/capJ.png");
	gChatLetterCapK = loadTexture("Resource/letters/chat/capK.png");
	gChatLetterCapL = loadTexture("Resource/letters/chat/capL.png");
	gChatLetterCapM = loadTexture("Resource/letters/chat/capM.png");
	gChatLetterCapN = loadTexture("Resource/letters/chat/capN.png");
	gChatLetterCapO = loadTexture("Resource/letters/chat/capO.png");
	gChatLetterCapP = loadTexture("Resource/letters/chat/capP.png");
	gChatLetterCapQ = loadTexture("Resource/letters/chat/capQ.png");
	gChatLetterCapR = loadTexture("Resource/letters/chat/capR.png");
	gChatLetterCapS = loadTexture("Resource/letters/chat/capS.png");
	gChatLetterCapT = loadTexture("Resource/letters/chat/capT.png");
	gChatLetterCapU = loadTexture("Resource/letters/chat/capU.png");
	gChatLetterCapV = loadTexture("Resource/letters/chat/capV.png");
	gChatLetterCapW = loadTexture("Resource/letters/chat/capW.png");
	gChatLetterCapX = loadTexture("Resource/letters/chat/capX.png");
	gChatLetterCapY = loadTexture("Resource/letters/chat/capY.png");
	gChatLetterCapZ = loadTexture("Resource/letters/chat/capZ.png");
	gChatLetter1 = loadTexture("Resource/letters/chat/1.png");
	gChatLetter2 = loadTexture("Resource/letters/chat/2.png");
	gChatLetter3 = loadTexture("Resource/letters/chat/3.png");
	gChatLetter4 = loadTexture("Resource/letters/chat/4.png");
	gChatLetter5 = loadTexture("Resource/letters/chat/5.png");
	gChatLetter6 = loadTexture("Resource/letters/chat/6.png");
	gChatLetter7 = loadTexture("Resource/letters/chat/7.png");
	gChatLetter8 = loadTexture("Resource/letters/chat/8.png");
	gChatLetter9 = loadTexture("Resource/letters/chat/9.png");
	gChatLetter0 = loadTexture("Resource/letters/chat/0.png");
	gChatLetterPound = loadTexture("Resource/letters/chat/#.png");
	gChatLetter$ = loadTexture("Resource/letters/chat/$.png");
	gChatLetterPercent = loadTexture("Resource/letters/chat/%.png");
	gChatLetterAmpersand = loadTexture("Resource/letters/chat/&.png");
	gChatLetterLeftParentheses = loadTexture("Resource/letters/chat/(.png");
	gChatLetterRightParentheses = loadTexture("Resource/letters/chat/).png");
	gChatLetterComma = loadTexture("Resource/letters/chat/,.png");
	gChatLetterApostrophe = loadTexture("Resource/letters/chat/'.png");
	gChatLetterMinus = loadTexture("Resource/letters/chat/-.png");
	gChatLetterSemiColon = loadTexture("Resource/letters/chat/;.png");
	gChatLetterColon = loadTexture("Resource/letters/chat/colon.png");
	gChatLetterAt = loadTexture("Resource/letters/chat/@.png");
	gChatLetterLeftBracket = loadTexture("Resource/letters/chat/[.png");
	gChatLetterRightBracket = loadTexture("Resource/letters/chat/].png");
	gChatLetterCaret = loadTexture("Resource/letters/chat/^.png");
	gChatLetterUnderScore = loadTexture("Resource/letters/chat/_.png");
	gChatLetterTilde = loadTexture("Resource/letters/chat/~.png");
	gChatLetterAcute = loadTexture("Resource/letters/chat/`.png");
	gChatLetterLeftBrace = loadTexture("Resource/letters/chat/{.png");
	gChatLetterRightBrace = loadTexture("Resource/letters/chat/}.png");
	gChatLetterPlus = loadTexture("Resource/letters/chat/+.png");
	gChatLetterEquals = loadTexture("Resource/letters/chat/=.png");
	gChatLetterAsterisk = loadTexture("Resource/letters/chat/asterisk.png");
	gChatLetterBackSlash = loadTexture("Resource/letters/chat/backSlash.png");
	gChatLetterForwardSlash = loadTexture("Resource/letters/chat/forwardSlash.png");
	gChatLetterExclamationMark = loadTexture("Resource/letters/chat/exclamationMark.png");
	gChatLetterQuestionMark = loadTexture("Resource/letters/chat/questionMark.png");
	gChatLetterGreaterThan = loadTexture("Resource/letters/chat/greaterThan.png");
	gChatLetterLessThan = loadTexture("Resource/letters/chat/lessThan.png");
	gChatLetterPeriod = loadTexture("Resource/letters/chat/period.png");
	gChatLetterQuotationMark = loadTexture("Resource/letters/chat/quotationMark.png");
	gChatLetterVerticalBar = loadTexture("Resource/letters/chat/verticalBar.png");
	//menus
	gExitButton = loadTexture("Resource/menus/exitButton.png");
	gFurnaceBackground = loadTexture("Resource/menus/furnace/furnaceBackground.png");
	gAnvilBackground = loadTexture("Resource/menus/anvil/anvilBackground.png");
	gShopBackground = loadTexture("Resource/menus/shop/shopBackground.png");
	return success;
}

void Artist::close()
{
	//Free loaded image
	//tiles
	SDL_DestroyTexture(gVoidTile);
	gVoidTile = NULL;
	SDL_DestroyTexture(gStoneTile);
	gStoneTile = NULL;
	SDL_DestroyTexture(gStoneWallTile);
	gStoneWallTile = NULL;
	SDL_DestroyTexture(gWaterTile);
	gWaterTile = NULL;
	SDL_DestroyTexture(gDirtTile);
	gDirtTile = NULL;
	SDL_DestroyTexture(gOutOfMapTile);
	gOutOfMapTile = NULL;
	//entities
	SDL_DestroyTexture(gHumanEnemy);
	gHumanEnemy = NULL;
	SDL_DestroyTexture(gPlayer);
	gPlayer = NULL;
	SDL_DestroyTexture(gFurnace);
	gFurnace = NULL;
	SDL_DestroyTexture(gAnvil);
	gAnvil = NULL;
	SDL_DestroyTexture(gBee);
	gBee = NULL;
	SDL_DestroyTexture(gShopKeeper);
	gShopKeeper = NULL;
	SDL_DestroyTexture(gShopKeeperOre);
	gShopKeeperOre = NULL;
	SDL_DestroyTexture(gShopKeeperBar);
	gShopKeeperBar = NULL;
	SDL_DestroyTexture(gShopKeeperIcecream);
	gShopKeeperIcecream = NULL;
	SDL_DestroyTexture(gClosedDoor);
	gClosedDoor = NULL;
	SDL_DestroyTexture(gOpenDoor);
	gOpenDoor = NULL;
	SDL_DestroyTexture(gEmptyRock);
	gEmptyRock = NULL;
	SDL_DestroyTexture(gCopperRock);
	gCopperRock = NULL;
	SDL_DestroyTexture(gTinRock);
	gTinRock = NULL;
	SDL_DestroyTexture(gIronRock);
	gIronRock = NULL;
	SDL_DestroyTexture(gCoalRock);
	gCoalRock = NULL;
	SDL_DestroyTexture(gMithrilRock);
	gMithrilRock = NULL;
	SDL_DestroyTexture(gAdamantiteRock);
	gAdamantiteRock = NULL;
	SDL_DestroyTexture(gRuniteRock);
	gRuniteRock = NULL;
	SDL_DestroyTexture(gSilverRock);
	gSilverRock = NULL;
	SDL_DestroyTexture(gGoldRock);
	gGoldRock = NULL;
	//items
	SDL_DestroyTexture(gGoldCoin);
	gGoldCoin = NULL;
	SDL_DestroyTexture(gCopperOre);
	gCopperOre = NULL;
	SDL_DestroyTexture(gTinOre);
	gTinOre = NULL;
	SDL_DestroyTexture(gIronOre);
	gIronOre = NULL;
	SDL_DestroyTexture(gCoalOre);
	gCoalOre = NULL;
	SDL_DestroyTexture(gMithrilOre);
	gMithrilOre = NULL;
	SDL_DestroyTexture(gAdamantiteOre);
	gAdamantiteOre = NULL;
	SDL_DestroyTexture(gRuniteOre);
	gRuniteOre = NULL;
	SDL_DestroyTexture(gSilverOre);
	gSilverOre = NULL;
	SDL_DestroyTexture(gGoldOre);
	gGoldOre = NULL;
	SDL_DestroyTexture(gBronzeBar);
	gBronzeBar = NULL;
	SDL_DestroyTexture(gIronBar);
	gIronBar = NULL;
	SDL_DestroyTexture(gSteelBar);
	gSteelBar = NULL;
	SDL_DestroyTexture(gMithrilBar);
	gMithrilBar = NULL;
	SDL_DestroyTexture(gAdamantiumBar);
	gAdamantiumBar = NULL;
	SDL_DestroyTexture(gRuneBar);
	gRuneBar = NULL;
	SDL_DestroyTexture(gSilverBar);
	gSilverBar = NULL;
	SDL_DestroyTexture(gGoldBar);
	gGoldBar = NULL;
	SDL_DestroyTexture(gGoldRing);
	gGoldRing = NULL;
	SDL_DestroyTexture(gBronzeDagger);
	gBronzeDagger = NULL;
	SDL_DestroyTexture(gIronDagger);
	gIronDagger = NULL;
	SDL_DestroyTexture(gSteelDagger);
	gSteelDagger = NULL;
	SDL_DestroyTexture(gMithrilDagger);
	gMithrilDagger = NULL;
	SDL_DestroyTexture(gAdamantiumDagger);
	gAdamantiumDagger = NULL;
	SDL_DestroyTexture(gRuneDagger);
	gRuneDagger = NULL;
	SDL_DestroyTexture(gBronzeSword);
	gBronzeSword = NULL;
	SDL_DestroyTexture(gIronSword);
	gIronSword = NULL;
	SDL_DestroyTexture(gSteelSword);
	gSteelSword = NULL;
	SDL_DestroyTexture(gMithrilSword);
	gMithrilSword = NULL;
	SDL_DestroyTexture(gAdamantiumSword);
	gAdamantiumSword = NULL;
	SDL_DestroyTexture(gRuneSword);
	gRuneSword = NULL;
	SDL_DestroyTexture(gChocolateIcecream);
	gChocolateIcecream = NULL;
	SDL_DestroyTexture(gStrawberryIcecream);
	gStrawberryIcecream = NULL;
	SDL_DestroyTexture(gPeachIcecream);
	gPeachIcecream = NULL;
	//sidebar
	SDL_DestroyTexture(gSidebarBackground);
	gSidebarBackground = NULL;
	SDL_DestroyTexture(gSidebarIconPlate);
	gSidebarIconPlate = NULL;
	SDL_DestroyTexture(gSidebarSelected);
	gSidebarSelected = NULL;
	SDL_DestroyTexture(gSidebarInventoryBackground);
	gSidebarInventoryBackground = NULL;
	SDL_DestroyTexture(gSidebarChatBox);
	gSidebarChatBox = NULL;
	SDL_DestroyTexture(gCombatIcon);
	gCombatIcon = NULL;
	SDL_DestroyTexture(gEmotesIcon);
	gEmotesIcon = NULL;
	SDL_DestroyTexture(gEquipmentIcon);
	gEquipmentIcon = NULL;
	SDL_DestroyTexture(gExitIcon);
	gExitIcon = NULL;
	SDL_DestroyTexture(gInventoryIcon);
	gInventoryIcon = NULL;
	SDL_DestroyTexture(gLevelsIcon);
	gLevelsIcon = NULL;
	SDL_DestroyTexture(gOptionsIcon);
	gOptionsIcon = NULL;
	SDL_DestroyTexture(gPrayerIcon);
	gPrayerIcon = NULL;
	SDL_DestroyTexture(gQuestsIcon);
	gQuestsIcon = NULL;
	SDL_DestroyTexture(gSpellsIcon);
	gSpellsIcon = NULL;
	//numbers
	SDL_DestroyTexture(gCountOne);
	gCountOne = NULL;
	SDL_DestroyTexture(gCountTwo);
	gCountTwo = NULL;
	SDL_DestroyTexture(gCountThree);
	gCountThree = NULL;
	SDL_DestroyTexture(gCountFour);
	gCountFour = NULL;
	SDL_DestroyTexture(gCountFive);
	gCountFive = NULL;
	SDL_DestroyTexture(gCountSix);
	gCountSix = NULL;
	SDL_DestroyTexture(gCountSeven);
	gCountSeven = NULL;
	SDL_DestroyTexture(gCountEight);
	gCountEight = NULL;
	SDL_DestroyTexture(gCountNine);
	gCountNine = NULL;
	SDL_DestroyTexture(gCountZero);
	gCountZero = NULL;
	SDL_DestroyTexture(gCountPengu);
	gCountPengu = NULL;
	SDL_DestroyTexture(gCountThousand);
	gCountThousand = NULL;
	SDL_DestroyTexture(gCountMillion);
	gCountMillion = NULL;
	//letters
	SDL_DestroyTexture(gChatLetterLowerA);
	gChatLetterLowerA = NULL;
	SDL_DestroyTexture(gChatLetterLowerB);
	gChatLetterLowerB = NULL;
	SDL_DestroyTexture(gChatLetterLowerC);
	gChatLetterLowerC = NULL;
	SDL_DestroyTexture(gChatLetterLowerD);
	gChatLetterLowerD = NULL;
	SDL_DestroyTexture(gChatLetterLowerE);
	gChatLetterLowerE = NULL;
	SDL_DestroyTexture(gChatLetterLowerF);
	gChatLetterLowerF = NULL;
	SDL_DestroyTexture(gChatLetterLowerG);
	gChatLetterLowerG = NULL;
	SDL_DestroyTexture(gChatLetterLowerH);
	gChatLetterLowerH = NULL;
	SDL_DestroyTexture(gChatLetterLowerI);
	gChatLetterLowerI = NULL;
	SDL_DestroyTexture(gChatLetterLowerJ);
	gChatLetterLowerJ = NULL;
	SDL_DestroyTexture(gChatLetterLowerK);
	gChatLetterLowerK = NULL;
	SDL_DestroyTexture(gChatLetterLowerL);
	gChatLetterLowerL = NULL;
	SDL_DestroyTexture(gChatLetterLowerM);
	gChatLetterLowerM = NULL;
	SDL_DestroyTexture(gChatLetterLowerN);
	gChatLetterLowerN = NULL;
	SDL_DestroyTexture(gChatLetterLowerO);
	gChatLetterLowerO = NULL;
	SDL_DestroyTexture(gChatLetterLowerP);
	gChatLetterLowerP = NULL;
	SDL_DestroyTexture(gChatLetterLowerQ);
	gChatLetterLowerQ = NULL;
	SDL_DestroyTexture(gChatLetterLowerR);
	gChatLetterLowerR = NULL;
	SDL_DestroyTexture(gChatLetterLowerS);
	gChatLetterLowerS = NULL;
	SDL_DestroyTexture(gChatLetterLowerT);
	gChatLetterLowerT = NULL;
	SDL_DestroyTexture(gChatLetterLowerU);
	gChatLetterLowerU = NULL;
	SDL_DestroyTexture(gChatLetterLowerV);
	gChatLetterLowerV = NULL;
	SDL_DestroyTexture(gChatLetterLowerW);
	gChatLetterLowerW = NULL;
	SDL_DestroyTexture(gChatLetterLowerX);
	gChatLetterLowerX = NULL;
	SDL_DestroyTexture(gChatLetterLowerY);
	gChatLetterLowerY = NULL;
	SDL_DestroyTexture(gChatLetterLowerZ);
	gChatLetterLowerZ = NULL;
	SDL_DestroyTexture(gChatLetterCapA);
	gChatLetterCapA = NULL;
	SDL_DestroyTexture(gChatLetterCapB);
	gChatLetterCapB = NULL;
	SDL_DestroyTexture(gChatLetterCapC);
	gChatLetterCapC = NULL;
	SDL_DestroyTexture(gChatLetterCapD);
	gChatLetterCapD = NULL;
	SDL_DestroyTexture(gChatLetterCapE);
	gChatLetterCapE = NULL;
	SDL_DestroyTexture(gChatLetterCapF);
	gChatLetterCapF = NULL;
	SDL_DestroyTexture(gChatLetterCapG);
	gChatLetterCapG = NULL;
	SDL_DestroyTexture(gChatLetterCapH);
	gChatLetterCapH = NULL;
	SDL_DestroyTexture(gChatLetterCapI);
	gChatLetterCapI = NULL;
	SDL_DestroyTexture(gChatLetterCapJ);
	gChatLetterCapJ = NULL;
	SDL_DestroyTexture(gChatLetterCapK);
	gChatLetterCapK = NULL;
	SDL_DestroyTexture(gChatLetterCapL);
	gChatLetterCapL = NULL;
	SDL_DestroyTexture(gChatLetterCapM);
	gChatLetterCapM = NULL;
	SDL_DestroyTexture(gChatLetterCapN);
	gChatLetterCapN = NULL;
	SDL_DestroyTexture(gChatLetterCapO);
	gChatLetterCapO = NULL;
	SDL_DestroyTexture(gChatLetterCapP);
	gChatLetterCapP = NULL;
	SDL_DestroyTexture(gChatLetterCapQ);
	gChatLetterCapQ = NULL;
	SDL_DestroyTexture(gChatLetterCapR);
	gChatLetterCapR = NULL;
	SDL_DestroyTexture(gChatLetterCapS);
	gChatLetterCapS = NULL;
	SDL_DestroyTexture(gChatLetterCapT);
	gChatLetterCapT = NULL;
	SDL_DestroyTexture(gChatLetterCapU);
	gChatLetterCapU = NULL;
	SDL_DestroyTexture(gChatLetterCapV);
	gChatLetterCapV = NULL;
	SDL_DestroyTexture(gChatLetterCapW);
	gChatLetterCapW = NULL;
	SDL_DestroyTexture(gChatLetterCapX);
	gChatLetterCapX = NULL;
	SDL_DestroyTexture(gChatLetterCapY);
	gChatLetterCapY = NULL;
	SDL_DestroyTexture(gChatLetterCapZ);
	gChatLetterCapZ = NULL;
	SDL_DestroyTexture(gChatLetter1);
	gChatLetter1 = NULL;
	SDL_DestroyTexture(gChatLetter2);
	gChatLetter2 = NULL;
	SDL_DestroyTexture(gChatLetter3);
	gChatLetter3 = NULL;
	SDL_DestroyTexture(gChatLetter4);
	gChatLetter4 = NULL;
	SDL_DestroyTexture(gChatLetter5);
	gChatLetter5 = NULL;
	SDL_DestroyTexture(gChatLetter6);
	gChatLetter6 = NULL;
	SDL_DestroyTexture(gChatLetter7);
	gChatLetter7 = NULL;
	SDL_DestroyTexture(gChatLetter8);
	gChatLetter8 = NULL;
	SDL_DestroyTexture(gChatLetter9);
	gChatLetter9 = NULL;
	SDL_DestroyTexture(gChatLetter0);
	gChatLetter0 = NULL;
	SDL_DestroyTexture(gChatLetterPound);
	gChatLetterPound = NULL;
	SDL_DestroyTexture(gChatLetter$);
	gChatLetter$ = NULL;
	SDL_DestroyTexture(gChatLetterPercent);
	gChatLetterPercent = NULL;
	SDL_DestroyTexture(gChatLetterAmpersand);
	gChatLetterAmpersand = NULL;
	SDL_DestroyTexture(gChatLetterLeftParentheses);
	gChatLetterLeftParentheses = NULL;
	SDL_DestroyTexture(gChatLetterRightParentheses);
	gChatLetterRightParentheses = NULL;
	SDL_DestroyTexture(gChatLetterComma);
	gChatLetterComma = NULL;
	SDL_DestroyTexture(gChatLetterApostrophe);
	gChatLetterApostrophe = NULL;
	SDL_DestroyTexture(gChatLetterMinus);
	gChatLetterMinus = NULL;
	SDL_DestroyTexture(gChatLetterSemiColon);
	gChatLetterSemiColon = NULL;
	SDL_DestroyTexture(gChatLetterColon);
	gChatLetterColon = NULL;
	SDL_DestroyTexture(gChatLetterAt);
	gChatLetterAt = NULL;
	SDL_DestroyTexture(gChatLetterLeftBracket);
	gChatLetterLeftBracket = NULL;
	SDL_DestroyTexture(gChatLetterRightBracket);
	gChatLetterRightBracket = NULL;
	SDL_DestroyTexture(gChatLetterCaret);
	gChatLetterCaret = NULL;
	SDL_DestroyTexture(gChatLetterUnderScore);
	gChatLetterUnderScore = NULL;
	SDL_DestroyTexture(gChatLetterTilde);
	gChatLetterTilde = NULL;
	SDL_DestroyTexture(gChatLetterAcute);
	gChatLetterAcute = NULL;
	SDL_DestroyTexture(gChatLetterLeftBrace);
	gChatLetterLeftBrace = NULL;
	SDL_DestroyTexture(gChatLetterRightBrace);
	gChatLetterRightBrace = NULL;
	SDL_DestroyTexture(gChatLetterPlus);
	gChatLetterPlus = NULL;
	SDL_DestroyTexture(gChatLetterEquals);
	gChatLetterEquals = NULL;
	SDL_DestroyTexture(gChatLetterAsterisk);
	gChatLetterAsterisk = NULL;
	SDL_DestroyTexture(gChatLetterBackSlash);
	gChatLetterBackSlash = NULL;
	SDL_DestroyTexture(gChatLetterForwardSlash);
	gChatLetterForwardSlash = NULL;
	SDL_DestroyTexture(gChatLetterExclamationMark);
	gChatLetterExclamationMark = NULL;
	SDL_DestroyTexture(gChatLetterQuestionMark);
	gChatLetterQuestionMark = NULL;
	SDL_DestroyTexture(gChatLetterGreaterThan);
	gChatLetterGreaterThan = NULL;
	SDL_DestroyTexture(gChatLetterLessThan);
	gChatLetterLessThan = NULL;
	SDL_DestroyTexture(gChatLetterPeriod);
	gChatLetterPeriod = NULL;
	SDL_DestroyTexture(gChatLetterQuotationMark);
	gChatLetterQuotationMark = NULL;
	SDL_DestroyTexture(gChatLetterVerticalBar);
	gChatLetterVerticalBar = NULL;
	//menus
	SDL_DestroyTexture(gExitButton);
	gExitButton = NULL;
	SDL_DestroyTexture(gFurnaceBackground);
	gFurnaceBackground = NULL;
	SDL_DestroyTexture(gAnvilBackground);
	gAnvilBackground = NULL;
	SDL_DestroyTexture(gShopBackground);
	gShopBackground = NULL;
	
	
	


	//Destroy window	
	SDL_DestroyRenderer(gRenderer);
	SDL_DestroyWindow(gWindow);
	gWindow = NULL;
	gRenderer = NULL;

	//Quit SDL subsystems
	IMG_Quit();
	SDL_Quit();
}

SDL_Texture* getTileTexture(int tile)
{

	switch (tile)
	{
	case Maps::TILE_VOID:
		return gVoidTile;
		break;
	case Maps::TILE_STONE:
		return gStoneTile;
		break;
	case Maps::TILE_STONEWALL:
		return gStoneWallTile;
		break;
	case Maps::TILE_WATER:
		return gWaterTile;
		break;
	case Maps::TILE_DIRT:
		return gDirtTile;
		break;
	case 1000:
		return gOutOfMapTile;
		break;
	}

}

SDL_Texture* getEntityTexture(int entity)
{

	switch (entity)
	{
	case Maps::ENTITY_NONE:
		return NULL;
		break;
	case Maps::ENTITY_FURNACE:
		return gFurnace;
		break;
	case Maps::ENTITY_BEE:
		return gBee;
		break;
	case Maps::ENTITY_CLOSED_DOOR:
		return gClosedDoor;
		break;
	case Maps::ENTITY_OPEN_DOOR:
		return gOpenDoor;
		break;
	case Maps::ENTITY_EMPTY_ROCK:
		return gEmptyRock;
		break;
	case Maps::ENTITY_COPPER_ROCK:
		return gCopperRock;
		break;
	case Maps::ENTITY_TIN_ROCK:
		return gTinRock;
		break;
	case Maps::ENTITY_IRON_ROCK:
		return gIronRock;
		break;
	case Maps::ENTITY_COAL_ROCK:
		return gCoalRock;
		break;
	case Maps::ENTITY_MITHRIL_ROCK:
		return gMithrilRock;
		break;
	case Maps::ENTITY_ADAMANTITE_ROCK:
		return gAdamantiteRock;
		break;
	case Maps::ENTITY_RUNITE_ROCK:
		return gRuniteRock;
		break;
	case Maps::ENTITY_SILVER_ROCK:
		return gSilverRock;
		break;
	case Maps::ENTITY_GOLD_ROCK:
		return gGoldRock;
		break;
	case Maps::ENTITY_ANVIL:
		return gAnvil;
		break;
	case Maps::ENTITY_ORE_SHOP_KEEPER:
		return gShopKeeperOre;
		break;
	case Maps::ENTITY_BAR_SHOP_KEEPER:
		return gShopKeeperBar;
		break;
	case Maps::ENTITY_GENERAL_SHOP_KEEPER:
		return gShopKeeper;
		break;
	case Maps::ENTITY_ICECREAM_SHOP_KEEPER:
		return gShopKeeperIcecream;
		break;
	}

}

SDL_Texture* getItemTexture(int id)
{
	switch (id)
	{
	case Items::ITEM_NONE:
		return NULL;
		break;
	case Items::ITEM_GOLD_COIN:
		return gGoldCoin;
		break;
	case Items::ITEM_COPPER_ORE:
		return gCopperOre;
		break;
	case Items::ITEM_TIN_ORE:
		return gTinOre;
		break;
	case Items::ITEM_IRON_ORE:
		return gIronOre;
		break;
	case Items::ITEM_COAL_ORE:
		return gCoalOre;
		break;
	case Items::ITEM_MITHRIL_ORE:
		return gMithrilOre;
		break;
	case Items::ITEM_ADAMANTITE_ORE:
		return gAdamantiteOre;
		break;
	case Items::ITEM_RUNITE_ORE:
		return gRuniteOre;
		break;
	case Items::ITEM_SILVER_ORE:
		return gSilverOre;
		break;
	case Items::ITEM_GOLD_ORE:
		return gGoldOre;
		break;
	case Items::ITEM_BRONZE_BAR:
		return gBronzeBar;
		break;
	case Items::ITEM_IRON_BAR:
		return gIronBar;
		break;
	case Items::ITEM_STEEL_BAR:
		return gSteelBar;
		break;
	case Items::ITEM_MITHRIL_BAR:
		return gMithrilBar;
		break;
	case Items::ITEM_ADAMANTIUM_BAR:
		return gAdamantiumBar;
		break;
	case Items::ITEM_RUNE_BAR:
		return gRuneBar;
		break;
	case Items::ITEM_SILVER_BAR:
		return gSilverBar;
		break;
	case Items::ITEM_GOLD_BAR:
		return gGoldBar;
		break;
	case Items::ITEM_GOLD_RING:
		return gGoldRing;
		break;
	case Items::ITEM_BRONZE_DAGGER:
		return gBronzeDagger;
		break;
	case Items::ITEM_BRONZE_SWORD:
		return gBronzeSword;
		break;
	case Items::ITEM_IRON_DAGGER:
		return gIronDagger;
		break;
	case Items::ITEM_IRON_SWORD:
		return gIronSword;
		break;
	case Items::ITEM_STEEL_DAGGER:
		return gSteelDagger;
		break;
	case Items::ITEM_STEEL_SWORD:
		return gSteelSword;
		break;
	case Items::ITEM_MITHRIL_DAGGER:
		return gMithrilDagger;
		break;
	case Items::ITEM_MITHRIL_SWORD:
		return gMithrilSword;
		break;
	case Items::ITEM_ADAMANTIUM_DAGGER:
		return gAdamantiumDagger;
		break;
	case Items::ITEM_ADAMANTIUM_SWORD:
		return gAdamantiumSword;
		break;
	case Items::ITEM_RUNE_DAGGER:
		return gRuneDagger;
		break;
	case Items::ITEM_RUNE_SWORD:
		return gRuneSword;
		break;
	case Items::ITEM_CHOCOLATE_ICECREAM:
		return gChocolateIcecream;
		break;
	case Items::ITEM_STRAWBERRY_ICECREAM:
		return gStrawberryIcecream;
		break;
	case Items::ITEM_PEACH_ICECREAM:
		return gPeachIcecream;
		break;
	}
}

void drawImage(int x, int y, int w, int h, SDL_Texture* tex)
{
	SDL_Rect img;
	img.x = x;
	img.y = y;
	img.w = w;
	img.h = h;
	SDL_RenderCopy(gRenderer, tex, NULL, &img);
}

void drawSidebarButtons()
{
	Menus Menus;
	//draw icon plates
	for (int a = 0; a < 10; a++)
		drawImage((56 * a) + 720, 664, 56, 56, gSidebarIconPlate);
	//draw if they are hovered over
	int x, y;
	SDL_GetMouseState(&x, &y);
	if (x > 720 && y > 664)
	{
		if (x < 776)
			drawImage(722, 666, 52, 52, gSidebarSelected);
		if (x >= 776 && x < 832)
			drawImage(778, 666, 52, 52, gSidebarSelected);
		if (x >= 832 && x < 888)
			drawImage(834, 666, 52, 52, gSidebarSelected);
		if (x >= 888 && x < 944)
			drawImage(890, 666, 52, 52, gSidebarSelected);
		if (x >= 944 && x < 1000)
			drawImage(946, 666, 52, 52, gSidebarSelected);
		if (x >= 1000 && x < 1056)
			drawImage(1002, 666, 52, 52, gSidebarSelected);
		if (x >= 1056 && x < 1112)
			drawImage(1058, 666, 52, 52, gSidebarSelected);
		if (x >= 1112 && x < 1168)
			drawImage(1114, 666, 52, 52, gSidebarSelected);
		if (x >= 1168 && x < 1224)
			drawImage(1170, 666, 52, 52, gSidebarSelected);
		if (x >= 1224 && x < 1280)
			drawImage(1226, 666, 52, 52, gSidebarSelected);
	}
	//draw if one is selected
	switch (Menus.getSidebarState())
	{
	case 0:
		//nothing
		break;
	case 1:
		drawImage(722, 666, 52, 52, gSidebarSelected);
		break;
	case 2:
		drawImage(778, 666, 52, 52, gSidebarSelected);
		break;
	case 3:
		drawImage(834, 666, 52, 52, gSidebarSelected);
		break;
	case 4:
		drawImage(890, 666, 52, 52, gSidebarSelected);
		break;
	case 5:
		drawImage(946, 666, 52, 52, gSidebarSelected);
		break;
	case 6:
		drawImage(1002, 666, 52, 52, gSidebarSelected);
		break;
	case 7:
		drawImage(1058, 666, 52, 52, gSidebarSelected);
		break;
	case 8:
		drawImage(1114, 666, 52, 52, gSidebarSelected);
		break;
	case 9:
		drawImage(1170, 666, 52, 52, gSidebarSelected);
		break;
	}
	//draw the icons
	drawImage(723, 667, 50, 50, gCombatIcon);
	drawImage(779, 667, 50, 50, gLevelsIcon);
	drawImage(835, 667, 50, 50, gQuestsIcon);
	drawImage(891, 667, 50, 50, gInventoryIcon);
	drawImage(947, 667, 50, 50, gEquipmentIcon);
	drawImage(1003, 667, 50, 50, gPrayerIcon);
	drawImage(1059, 667, 50, 50, gSpellsIcon);
	drawImage(1115, 667, 50, 50, gEmotesIcon);
	drawImage(1171, 667, 50, 50, gOptionsIcon);
	drawImage(1227, 667, 50, 50, gExitIcon);
}

void drawNumber(int number, int x, int y)
{
	int ones = number % 10;
	int tens = number % 100 / 10;
	int hundreds = number % 1000 / 100;
	int thousands = number % 10000 / 1000;
	int tenThousands = number % 100000 / 10000;
	int hundredThousands = number % 1000000 / 100000;
	int millions = number % 10000000 / 1000000;
	int tenMillions = number % 100000000 / 10000000;
	int hundredMillions = number % 1000000000 / 100000000;

	if (number == 728)
	{
		drawImage(x - 10, y, 5, 10, gCountSeven);
		drawImage(x - 5, y, 5, 10, gCountTwo);
		drawImage(x, y, 5, 10, gCountPengu);
		return;
	}
	if (number < 1000)
	{
		switch (ones)
		{
		case 0:
			drawImage(x, y, 5, 10, gCountZero);
			break;
		case 1:
			drawImage(x, y, 5, 10, gCountOne);
			break;
		case 2:
			drawImage(x, y, 5, 10, gCountTwo);
			break;
		case 3:
			drawImage(x, y, 5, 10, gCountThree);
			break;
		case 4:
			drawImage(x, y, 5, 10, gCountFour);
			break;
		case 5:
			drawImage(x, y, 5, 10, gCountFive);
			break;
		case 6:
			drawImage(x, y, 5, 10, gCountSix);
			break;
		case 7:
			drawImage(x, y, 5, 10, gCountSeven);
			break;
		case 8:
			drawImage(x, y, 5, 10, gCountEight);
			break;
		case 9:
			drawImage(x, y, 5, 10, gCountNine);
			break;
		}
		if (number >= 10)
		{
			switch (tens)
			{
			case 0:
				drawImage(x - 5, y, 5, 10, gCountZero);
				break;
			case 1:
				drawImage(x - 5, y, 5, 10, gCountOne);
				break;
			case 2:
				drawImage(x - 5, y, 5, 10, gCountTwo);
				break;
			case 3:
				drawImage(x - 5, y, 5, 10, gCountThree);
				break;
			case 4:
				drawImage(x - 5, y, 5, 10, gCountFour);
				break;
			case 5:
				drawImage(x - 5, y, 5, 10, gCountFive);
				break;
			case 6:
				drawImage(x - 5, y, 5, 10, gCountSix);
				break;
			case 7:
				drawImage(x - 5, y, 5, 10, gCountSeven);
				break;
			case 8:
				drawImage(x - 5, y, 5, 10, gCountEight);
				break;
			case 9:
				drawImage(x - 5, y, 5, 10, gCountNine);
				break;
			}
		}
		if (number >= 100)
		{
			switch (hundreds)
			{
			case 0:
				drawImage(x - 10, y, 5, 10, gCountZero);
				break;
			case 1:
				drawImage(x - 10, y, 5, 10, gCountOne);
				break;
			case 2:
				drawImage(x - 10, y, 5, 10, gCountTwo);
				break;
			case 3:
				drawImage(x - 10, y, 5, 10, gCountThree);
				break;
			case 4:
				drawImage(x - 10, y, 5, 10, gCountFour);
				break;
			case 5:
				drawImage(x - 10, y, 5, 10, gCountFive);
				break;
			case 6:
				drawImage(x - 10, y, 5, 10, gCountSix);
				break;
			case 7:
				drawImage(x - 10, y, 5, 10, gCountSeven);
				break;
			case 8:
				drawImage(x - 10, y, 5, 10, gCountEight);
				break;
			case 9:
				drawImage(x - 10, y, 5, 10, gCountNine);
				break;
			}
			return;
		}
	}
	if (number >= 1000 && number < 1000000)
	{

		drawImage(x - 5, y, 10, 10, gCountThousand);

		switch (thousands)
		{
		case 0:
			drawImage(x - 10, y, 5, 10, gCountZero);
			break;
		case 1:
			drawImage(x - 10, y, 5, 10, gCountOne);
			break;
		case 2:
			drawImage(x - 10, y, 5, 10, gCountTwo);
			break;
		case 3:
			drawImage(x - 10, y, 5, 10, gCountThree);
			break;
		case 4:
			drawImage(x - 10, y, 5, 10, gCountFour);
			break;
		case 5:
			drawImage(x - 10, y, 5, 10, gCountFive);
			break;
		case 6:
			drawImage(x - 10, y, 5, 10, gCountSix);
			break;
		case 7:
			drawImage(x - 10, y, 5, 10, gCountSeven);
			break;
		case 8:
			drawImage(x - 10, y, 5, 10, gCountEight);
			break;
		case 9:
			drawImage(x - 10, y, 5, 10, gCountNine);
			break;
		}

		if (number >= 10000)
		{
			switch (tenThousands)
			{
			case 0:
				drawImage(x - 15, y, 5, 10, gCountZero);
				break;
			case 1:
				drawImage(x - 15, y, 5, 10, gCountOne);
				break;
			case 2:
				drawImage(x - 15, y, 5, 10, gCountTwo);
				break;
			case 3:
				drawImage(x - 15, y, 5, 10, gCountThree);
				break;
			case 4:
				drawImage(x - 15, y, 5, 10, gCountFour);
				break;
			case 5:
				drawImage(x - 15, y, 5, 10, gCountFive);
				break;
			case 6:
				drawImage(x - 15, y, 5, 10, gCountSix);
				break;
			case 7:
				drawImage(x - 15, y, 5, 10, gCountSeven);
				break;
			case 8:
				drawImage(x - 15, y, 5, 10, gCountEight);
				break;
			case 9:
				drawImage(x - 15, y, 5, 10, gCountNine);
				break;
			}
		}

		if (number >= 100000)
		{
			switch (hundredThousands)
			{
			case 0:
				drawImage(x - 20, y, 5, 10, gCountZero);
				break;
			case 1:
				drawImage(x - 20, y, 5, 10, gCountOne);
				break;
			case 2:
				drawImage(x - 20, y, 5, 10, gCountTwo);
				break;
			case 3:
				drawImage(x - 20, y, 5, 10, gCountThree);
				break;
			case 4:
				drawImage(x - 20, y, 5, 10, gCountFour);
				break;
			case 5:
				drawImage(x - 20, y, 5, 10, gCountFive);
				break;
			case 6:
				drawImage(x - 20, y, 5, 10, gCountSix);
				break;
			case 7:
				drawImage(x - 20, y, 5, 10, gCountSeven);
				break;
			case 8:
				drawImage(x - 20, y, 5, 10, gCountEight);
				break;
			case 9:
				drawImage(x - 20, y, 5, 10, gCountNine);
				break;
			}
		}
	}
	if (number >= 1000000)
	{

		drawImage(x - 5, y, 10, 10, gCountMillion);

		switch (millions)
		{
		case 0:
			drawImage(x - 10, y, 5, 10, gCountZero);
			break;
		case 1:
			drawImage(x - 10, y, 5, 10, gCountOne);
			break;
		case 2:
			drawImage(x - 10, y, 5, 10, gCountTwo);
			break;
		case 3:
			drawImage(x - 10, y, 5, 10, gCountThree);
			break;
		case 4:
			drawImage(x - 10, y, 5, 10, gCountFour);
			break;
		case 5:
			drawImage(x - 10, y, 5, 10, gCountFive);
			break;
		case 6:
			drawImage(x - 10, y, 5, 10, gCountSix);
			break;
		case 7:
			drawImage(x - 10, y, 5, 10, gCountSeven);
			break;
		case 8:
			drawImage(x - 10, y, 5, 10, gCountEight);
			break;
		case 9:
			drawImage(x - 10, y, 5, 10, gCountNine);
			break;
		}
		if (number >= 10000000)
		{
			switch (tenMillions)
			{
			case 0:
				drawImage(x - 15, y, 5, 10, gCountZero);
				break;
			case 1:
				drawImage(x - 15, y, 5, 10, gCountOne);
				break;
			case 2:
				drawImage(x - 15, y, 5, 10, gCountTwo);
				break;
			case 3:
				drawImage(x - 15, y, 5, 10, gCountThree);
				break;
			case 4:
				drawImage(x - 15, y, 5, 10, gCountFour);
				break;
			case 5:
				drawImage(x - 15, y, 5, 10, gCountFive);
				break;
			case 6:
				drawImage(x - 15, y, 5, 10, gCountSix);
				break;
			case 7:
				drawImage(x - 15, y, 5, 10, gCountSeven);
				break;
			case 8:
				drawImage(x - 15, y, 5, 10, gCountEight);
				break;
			case 9:
				drawImage(x - 15, y, 5, 10, gCountNine);
				break;
			}
		}

		if (number >= 100000000)
		{
			switch (hundredMillions)
			{
			case 0:
				drawImage(x - 20, y, 5, 10, gCountZero);
				break;
			case 1:
				drawImage(x - 20, y, 5, 10, gCountOne);
				break;
			case 2:
				drawImage(x - 20, y, 5, 10, gCountTwo);
				break;
			case 3:
				drawImage(x - 20, y, 5, 10, gCountThree);
				break;
			case 4:
				drawImage(x - 20, y, 5, 10, gCountFour);
				break;
			case 5:
				drawImage(x - 20, y, 5, 10, gCountFive);
				break;
			case 6:
				drawImage(x - 20, y, 5, 10, gCountSix);
				break;
			case 7:
				drawImage(x - 20, y, 5, 10, gCountSeven);
				break;
			case 8:
				drawImage(x - 20, y, 5, 10, gCountEight);
				break;
			case 9:
				drawImage(x - 20, y, 5, 10, gCountNine);
				break;
			}
		}
	}
	
}

void drawInventoryItemCount(int slot)
{
	Inventory Inventory;
	int amount = Inventory.getInventorySlotItemAmount(slot);
	int ones = amount % 10;
	int tens = amount % 100 / 10;
	int hundreds = amount % 1000 / 100;
	int thousands = amount % 10000 / 1000;
	int tenThousands = amount % 100000 / 10000;
	int hundredThousands = amount % 1000000 / 100000;
	int millions = amount % 10000000 / 1000000;
	int tenMillions = amount % 100000000 / 10000000;
	int hundredMillions = amount % 1000000000 / 100000000;
	int numberX, numberY;

	
	//printf("Total amount is: %i \nOnes slot is: %i \nTens slot is: %i \nHundreds slot is: %i \nThousands slot is: %i \nTen Thousands slot is: %i \nHundred Thousands slot is: %i\nMillions slot is: %i\n"
	//	,amount, ones, tens, hundreds, thousands, tenThousands, hundredThousands, millions);

	switch (slot)
	{
	case 1:
		numberX = 1065;
		numberY = 240;
		break;
	case 2:
		numberX = 1133;
		numberY = 240;
		break;
	case 3:
		numberX = 1201;
		numberY = 240;
		break;
	case 4:
		numberX = 1269;
		numberY = 240;
		break;
	case 5:
		numberX = 1065;
		numberY = 308;
		break;
	case 6:
		numberX = 1133;
		numberY = 308;
		break;
	case 7:
		numberX = 1201;
		numberY = 308;
		break;
	case 8:
		numberX = 1269;
		numberY = 308;
		break;
	case 9:
		numberX = 1065;
		numberY = 376;
		break;
	case 10:
		numberX = 1133;
		numberY = 376;
		break;
	case 11:
		numberX = 1201;
		numberY = 376;
		break;
	case 12:
		numberX = 1269;
		numberY = 376;
		break;
	case 13:
		numberX = 1065;
		numberY = 444;
		break;
	case 14:
		numberX = 1133;
		numberY = 444;
		break;
	case 15:
		numberX = 1201;
		numberY = 444;
		break;
	case 16:
		numberX = 1269;
		numberY = 444;
		break;
	case 17:
		numberX = 1065;
		numberY = 512;
		break;
	case 18:
		numberX = 1133;
		numberY = 512;
		break;
	case 19:
		numberX = 1201;
		numberY = 512;
		break;
	case 20:
		numberX = 1269;
		numberY = 512;
		break;
	case 21:
		numberX = 1065;
		numberY = 580;
		break;
	case 22:
		numberX = 1133;
		numberY = 580;
		break;
	case 23:
		numberX = 1201;
		numberY = 580;
		break;
	case 24:
		numberX = 1269;
		numberY = 580;
		break;
	case 25:
		numberX = 1065;
		numberY = 648;
		break;
	case 26:
		numberX = 1133;
		numberY = 648;
		break;
	case 27:
		numberX = 1201;
		numberY = 648;
		break;
	case 28:
		numberX = 1269;
		numberY = 648;
		break;
	}
	

	if (amount > 1 && amount < 1000)
	{
		switch (ones)
		{
		case 0:
			drawImage(numberX, numberY, 5, 10, gCountZero);
			break;
		case 1:
			drawImage(numberX, numberY, 5, 10, gCountOne);
			break;
		case 2:
			drawImage(numberX, numberY, 5, 10, gCountTwo);
			break;
		case 3:
			drawImage(numberX, numberY, 5, 10, gCountThree);
			break;
		case 4:
			drawImage(numberX, numberY, 5, 10, gCountFour);
			break;
		case 5:
			drawImage(numberX, numberY, 5, 10, gCountFive);
			break;
		case 6:
			drawImage(numberX, numberY, 5, 10, gCountSix);
			break;
		case 7:
			drawImage(numberX, numberY, 5, 10, gCountSeven);
			break;
		case 8:
			drawImage(numberX, numberY, 5, 10, gCountEight);
			break;	  
		case 9:		  
			drawImage(numberX, numberY, 5, 10, gCountNine);
			break;
		}
	}
	
	if (amount >= 10 && amount < 1000)
	{
		switch (tens)
		{
		case 0:
			drawImage(numberX-5, numberY, 5, 10, gCountZero);
			break;
		case 1:
			drawImage(numberX-5, numberY, 5, 10, gCountOne);
			break;	  
		case 2:		  
			drawImage(numberX-5, numberY, 5, 10, gCountTwo);
			break;	  
		case 3:		  
			drawImage(numberX-5, numberY, 5, 10, gCountThree);
			break;	  
		case 4:		  
			drawImage(numberX-5, numberY, 5, 10, gCountFour);
			break;	  
		case 5:		  
			drawImage(numberX-5, numberY, 5, 10, gCountFive);
			break;	  
		case 6:		  
			drawImage(numberX-5, numberY, 5, 10, gCountSix);
			break;	  
		case 7:		  
			drawImage(numberX-5, numberY, 5, 10, gCountSeven);
			break;	  
		case 8:		  
			drawImage(numberX-5, numberY, 5, 10, gCountEight);
			break;	  
		case 9:		  
			drawImage(numberX-5, numberY, 5, 10, gCountNine);
			break;
		}
	}

	if (amount >= 100 && amount < 1000)
	{
		switch (hundreds)
		{
		case 0:
			drawImage(numberX - 10, numberY, 5, 10, gCountZero);
			break;
		case 1:
			drawImage(numberX - 10, numberY, 5, 10, gCountOne);
			break;
		case 2:
			drawImage(numberX - 10, numberY, 5, 10, gCountTwo);
			break;
		case 3:
			drawImage(numberX - 10, numberY, 5, 10, gCountThree);
			break;
		case 4:
			drawImage(numberX - 10, numberY, 5, 10, gCountFour);
			break;
		case 5:
			drawImage(numberX - 10, numberY, 5, 10, gCountFive);
			break;
		case 6:
			drawImage(numberX - 10, numberY, 5, 10, gCountSix);
			break;
		case 7:
			drawImage(numberX - 10, numberY, 5, 10, gCountSeven);
			break;
		case 8:
			drawImage(numberX - 10, numberY, 5, 10, gCountEight);
			break;
		case 9:
			drawImage(numberX - 10, numberY, 5, 10, gCountNine);
			break;
		}
		return;
	}

	if (amount >= 1000 && amount < 1000000)
	{

		drawImage(numberX-5, numberY, 10, 10, gCountThousand);

		switch (thousands)
		{
		case 0:
			drawImage(numberX - 10, numberY, 5, 10, gCountZero);
			break;				 
		case 1:					 
			drawImage(numberX - 10, numberY, 5, 10, gCountOne);
			break;
		case 2:
			drawImage(numberX - 10, numberY, 5, 10, gCountTwo);
			break;
		case 3:
			drawImage(numberX - 10, numberY, 5, 10, gCountThree);
			break;
		case 4:
			drawImage(numberX - 10, numberY, 5, 10, gCountFour);
			break;
		case 5:
			drawImage(numberX - 10, numberY, 5, 10, gCountFive);
			break;
		case 6:
			drawImage(numberX - 10, numberY, 5, 10, gCountSix);
			break;
		case 7:
			drawImage(numberX - 10, numberY, 5, 10, gCountSeven);
			break;
		case 8:
			drawImage(numberX - 10, numberY, 5, 10, gCountEight);
			break;
		case 9:
			drawImage(numberX - 10, numberY, 5, 10, gCountNine);
			break;
		}

		if (amount >= 10000)
		{
			switch (tenThousands)
			{
			case 0:
				drawImage(numberX - 15, numberY, 5, 10, gCountZero);
				break;
			case 1:
				drawImage(numberX - 15, numberY, 5, 10, gCountOne);
				break;
			case 2:
				drawImage(numberX - 15, numberY, 5, 10, gCountTwo);
				break;
			case 3:
				drawImage(numberX - 15, numberY, 5, 10, gCountThree);
				break;
			case 4:
				drawImage(numberX - 15, numberY, 5, 10, gCountFour);
				break;
			case 5:
				drawImage(numberX - 15, numberY, 5, 10, gCountFive);
				break;
			case 6:
				drawImage(numberX - 15, numberY, 5, 10, gCountSix);
				break;
			case 7:
				drawImage(numberX - 15, numberY, 5, 10, gCountSeven);
				break;
			case 8:
				drawImage(numberX - 15, numberY, 5, 10, gCountEight);
				break;
			case 9:
				drawImage(numberX - 15, numberY, 5, 10, gCountNine);
				break;
			}
		}

		if (amount >= 100000)
		{
			switch (hundredThousands)
			{
			case 0:
				drawImage(numberX - 20, numberY, 5, 10, gCountZero);
				break;
			case 1:
				drawImage(numberX - 20, numberY, 5, 10, gCountOne);
				break;
			case 2:
				drawImage(numberX - 20, numberY, 5, 10, gCountTwo);
				break;
			case 3:
				drawImage(numberX - 20, numberY, 5, 10, gCountThree);
				break;
			case 4:
				drawImage(numberX - 20, numberY, 5, 10, gCountFour);
				break;
			case 5:
				drawImage(numberX - 20, numberY, 5, 10, gCountFive);
				break;
			case 6:
				drawImage(numberX - 20, numberY, 5, 10, gCountSix);
				break;
			case 7:
				drawImage(numberX - 20, numberY, 5, 10, gCountSeven);
				break;
			case 8:
				drawImage(numberX - 20, numberY, 5, 10, gCountEight);
				break;
			case 9:
				drawImage(numberX - 20, numberY, 5, 10, gCountNine);
				break;
			}
		}
	}
	
	if (amount >= 1000000)
	{

		drawImage(numberX - 5, numberY, 10, 10, gCountMillion);

		switch (millions)
		{
		case 0:
			drawImage(numberX - 10, numberY, 5, 10, gCountZero);
			break;
		case 1:
			drawImage(numberX - 10, numberY, 5, 10, gCountOne);
			break;
		case 2:
			drawImage(numberX - 10, numberY, 5, 10, gCountTwo);
			break;
		case 3:
			drawImage(numberX - 10, numberY, 5, 10, gCountThree);
			break;
		case 4:
			drawImage(numberX - 10, numberY, 5, 10, gCountFour);
			break;
		case 5:
			drawImage(numberX - 10, numberY, 5, 10, gCountFive);
			break;
		case 6:
			drawImage(numberX - 10, numberY, 5, 10, gCountSix);
			break;
		case 7:
			drawImage(numberX - 10, numberY, 5, 10, gCountSeven);
			break;
		case 8:
			drawImage(numberX - 10, numberY, 5, 10, gCountEight);
			break;
		case 9:
			drawImage(numberX - 10, numberY, 5, 10, gCountNine);
			break;
		}
		if (amount >= 10000000)
		{
			switch (tenMillions)
			{
			case 0:
				drawImage(numberX - 15, numberY, 5, 10, gCountZero);
				break;
			case 1:
				drawImage(numberX - 15, numberY, 5, 10, gCountOne);
				break;
			case 2:
				drawImage(numberX - 15, numberY, 5, 10, gCountTwo);
				break;
			case 3:
				drawImage(numberX - 15, numberY, 5, 10, gCountThree);
				break;
			case 4:
				drawImage(numberX - 15, numberY, 5, 10, gCountFour);
				break;
			case 5:
				drawImage(numberX - 15, numberY, 5, 10, gCountFive);
				break;
			case 6:
				drawImage(numberX - 15, numberY, 5, 10, gCountSix);
				break;
			case 7:
				drawImage(numberX - 15, numberY, 5, 10, gCountSeven);
				break;
			case 8:
				drawImage(numberX - 15, numberY, 5, 10, gCountEight);
				break;
			case 9:
				drawImage(numberX - 15, numberY, 5, 10, gCountNine);
				break;
			}
		}

		if (amount >= 100000000)
		{
			switch (hundredMillions)
			{
			case 0:
				drawImage(numberX - 20, numberY, 5, 10, gCountZero);
				break;
			case 1:
				drawImage(numberX - 20, numberY, 5, 10, gCountOne);
				break;
			case 2:
				drawImage(numberX - 20, numberY, 5, 10, gCountTwo);
				break;
			case 3:
				drawImage(numberX - 20, numberY, 5, 10, gCountThree);
				break;
			case 4:
				drawImage(numberX - 20, numberY, 5, 10, gCountFour);
				break;
			case 5:
				drawImage(numberX - 20, numberY, 5, 10, gCountFive);
				break;
			case 6:
				drawImage(numberX - 20, numberY, 5, 10, gCountSix);
				break;
			case 7:
				drawImage(numberX - 20, numberY, 5, 10, gCountSeven);
				break;
			case 8:
				drawImage(numberX - 20, numberY, 5, 10, gCountEight);
				break;
			case 9:
				drawImage(numberX - 20, numberY, 5, 10, gCountNine);
				break;
			}
		}
	}
}

void drawInventoryItems()
{
	Inventory Inventory;

	for (int a = 0; a < 4; a++)
	{
		drawImage(1006 + (a * 68), 186, 64, 64, getItemTexture(Inventory.getInventorySlotItemID(a + 1)));	
	}
	for (int a = 0; a < 4; a++)
	{
		drawImage(1006 + (a * 68), 254, 64, 64, getItemTexture(Inventory.getInventorySlotItemID(a + 5)));
	}
	for (int a = 0; a < 4; a++)
	{
		drawImage(1006 + (a * 68), 322, 64, 64, getItemTexture(Inventory.getInventorySlotItemID(a + 9)));
	}
	for (int a = 0; a < 4; a++)
	{
		drawImage(1006 + (a * 68), 390, 64, 64, getItemTexture(Inventory.getInventorySlotItemID(a + 13)));
	}
	for (int a = 0; a < 4; a++)
	{
		drawImage(1006 + (a * 68), 458, 64, 64, getItemTexture(Inventory.getInventorySlotItemID(a + 17)));
	}
	for (int a = 0; a < 4; a++)
	{
		drawImage(1006 + (a * 68), 526, 64, 64, getItemTexture(Inventory.getInventorySlotItemID(a + 21)));
	}
	for (int a = 0; a < 4; a++)
	{
		drawImage(1006 + (a * 68), 594, 64, 64, getItemTexture(Inventory.getInventorySlotItemID(a + 25)));
	}
	for (int a = 1; a < 29; a++)
	{
		int numberX, numberY;
		switch (a)
		{
		case 1:
			numberX = 1065;
			numberY = 240;
			break;
		case 2:
			numberX = 1133;
			numberY = 240;
			break;
		case 3:
			numberX = 1201;
			numberY = 240;
			break;
		case 4:
			numberX = 1269;
			numberY = 240;
			break;
		case 5:
			numberX = 1065;
			numberY = 308;
			break;
		case 6:
			numberX = 1133;
			numberY = 308;
			break;
		case 7:
			numberX = 1201;
			numberY = 308;
			break;
		case 8:
			numberX = 1269;
			numberY = 308;
			break;
		case 9:
			numberX = 1065;
			numberY = 376;
			break;
		case 10:
			numberX = 1133;
			numberY = 376;
			break;
		case 11:
			numberX = 1201;
			numberY = 376;
			break;
		case 12:
			numberX = 1269;
			numberY = 376;
			break;
		case 13:
			numberX = 1065;
			numberY = 444;
			break;
		case 14:
			numberX = 1133;
			numberY = 444;
			break;
		case 15:
			numberX = 1201;
			numberY = 444;
			break;
		case 16:
			numberX = 1269;
			numberY = 444;
			break;
		case 17:
			numberX = 1065;
			numberY = 512;
			break;
		case 18:
			numberX = 1133;
			numberY = 512;
			break;
		case 19:
			numberX = 1201;
			numberY = 512;
			break;
		case 20:
			numberX = 1269;
			numberY = 512;
			break;
		case 21:
			numberX = 1065;
			numberY = 580;
			break;
		case 22:
			numberX = 1133;
			numberY = 580;
			break;
		case 23:
			numberX = 1201;
			numberY = 580;
			break;
		case 24:
			numberX = 1269;
			numberY = 580;
			break;
		case 25:
			numberX = 1065;
			numberY = 648;
			break;
		case 26:
			numberX = 1133;
			numberY = 648;
			break;
		case 27:
			numberX = 1201;
			numberY = 648;
			break;
		case 28:
			numberX = 1269;
			numberY = 648;
			break;
		}
		if (Inventory.getInventorySlotItemAmount(a) > 1)
		drawNumber(Inventory.getInventorySlotItemAmount(a), numberX, numberY);
	}
	
}

void drawItemOnCursor()
{
	Inventory Inventory;
	int x, y;
	SDL_GetMouseState(&x, &y);
	drawImage(x - 32, y - 32, 64, 64, getItemTexture(Inventory.selectedItem.id));
}

void drawMapFloor()
{
	Maps Maps;
	Player Player;
	for (int x = 0; x <= 21; x++)
	{
		for (int y = 0; y <= 21; y++)
		{
			int tileOffSetX = Maps.getPlayerX() - 11, tileOffSetY = Maps.getPlayerY() - 11;
			int cameraOffSetX = Player::playerRenderX, cameraOffSetY = Player::playerRenderY;
			drawImage((x * 36) - 36 - cameraOffSetX, (y * 36) - 36 - cameraOffSetY, 36, 36, getTileTexture(Maps.getMapTileID(x + tileOffSetX, y + tileOffSetY)));
		}
	}
}

void drawPlayer(int x, int y)
{
	drawImage(360, 360, 36, 36, gPlayer);
}

void drawMapEntities()
{
	Maps Maps;
	for (int x = 0; x <= 21; x++)
	{
		for (int y = 0; y <= 21; y++)
		{
			int tileOffSetX = Maps.getPlayerX() - 11, tileOffSetY = Maps.getPlayerY() - 11;
			int cameraOffSetX = Player::playerRenderX, cameraOffSetY = Player::playerRenderY;
			drawImage((x * 36) - 36 - cameraOffSetX, (y * 36) - 36 - cameraOffSetY, 36, 36, getEntityTexture(Maps.getMapEntityID(x + tileOffSetX, y + tileOffSetY)));
		}
	}
	drawPlayer(Maps.getPlayerX(), Maps.getPlayerY());
}

void drawSidebar()
{
	Menus Menus;
	Inventory Inventory;
	int x, y;
	SDL_GetMouseState(&x, &y);
	// draw background and bar
	drawImage(720, 0, 560, 720, gSidebarBackground);
	
	drawSidebarButtons();
	
	switch (Menus.getSidebarState())
	{
		//combat
		//levels
		//quests
		//inventory
	case 4:
		drawImage(1000, 180, 280, 484, gSidebarInventoryBackground);
		for (int a = 0; a < 4; a++)
		{
			if (x >= 1006 + (a * 68) && x <= 1070 + (a * 68) && y >= 186 && y <= 250 && Inventory.getInventorySlotItemID(a + 1) != 0)
			drawImage(1006 + (a * 68), 186, 64, 64, gSidebarSelected);
		}
		for (int a = 0; a < 4; a++)
		{
			if (x >= 1006 + (a * 68) && x <= 1070 + (a * 68) && y >= 254 && y <= 318 && Inventory.getInventorySlotItemID(a + 5) != 0)
			drawImage(1006 + (a * 68), 254, 64, 64, gSidebarSelected);
		}
		for (int a = 0; a < 4; a++)
		{
			if (x >= 1006 + (a * 68) && x <= 1070 + (a * 68) && y >= 322 && y <= 386 && Inventory.getInventorySlotItemID(a + 9) != 0)
			drawImage(1006 + (a * 68), 322, 64, 64, gSidebarSelected);
		}
		for (int a = 0; a < 4; a++)
		{
			if (x >= 1006 + (a * 68) && x <= 1070 + (a * 68) && y >= 390 && y <= 454 && Inventory.getInventorySlotItemID(a + 13) != 0)
			drawImage(1006 + (a * 68), 390, 64, 64, gSidebarSelected);
		}
		for (int a = 0; a < 4; a++)
		{
			if (x >= 1006 + (a * 68) && x <= 1070 + (a * 68) && y >= 458 && y <= 522 && Inventory.getInventorySlotItemID(a + 17) != 0)
			drawImage(1006 + (a * 68), 458, 64, 64, gSidebarSelected);
		}
		for (int a = 0; a < 4; a++)
		{
			if (x >= 1006 + (a * 68) && x <= 1070 + (a * 68) && y >= 526 && y <= 590 && Inventory.getInventorySlotItemID(a + 21) != 0)
			drawImage(1006 + (a * 68), 526, 64, 64, gSidebarSelected);
		}
		for (int a = 0; a < 4; a++)
		{
			if (x >= 1006 + (a * 68) && x <= 1070 + (a * 68) && y >= 594 && y <= 658 && Inventory.getInventorySlotItemID(a + 25) != 0)
			drawImage(1006 + (a * 68), 594, 64, 64, gSidebarSelected);
		}
		drawInventoryItems();
		break;
		//equipment
		//prayer
		//spells
		//emotes
		//options
		//exit
	}
	
}

void drawChatBoxLetters(std::string string, int x, int y)
{
	std::string letterS;
	SDL_Texture* letterT = NULL;
	int count = 0;
	//std::cout << string << std::endl;
	while (count < string.length())
	{
		letterS = string[count];
		if (letterS == "a")
		{
			letterT = gChatLetterLowerA;
		}
		else if (letterS == "b")
		{
			letterT = gChatLetterLowerB;
		}
		else if (letterS == "c")
		{
			letterT = gChatLetterLowerC;
		}
		else if (letterS == "d")
		{
			letterT = gChatLetterLowerD;
		}
		else if (letterS == "e")
		{
			letterT = gChatLetterLowerE;
		}
		else if (letterS == "f")
		{
			letterT = gChatLetterLowerF;
		}
		else if (letterS == "g")
		{
			letterT = gChatLetterLowerG;
		}
		else if (letterS == "h")
		{
			letterT = gChatLetterLowerH;
		}
		else if (letterS == "i")
		{
			letterT = gChatLetterLowerI;
		}
		else if (letterS == "j")
		{
			letterT = gChatLetterLowerJ;
		}
		else if (letterS == "k")
		{
			letterT = gChatLetterLowerK;
		}
		else if (letterS == "l")
		{
			letterT = gChatLetterLowerL;
		}
		else if (letterS == "m")
		{
			letterT = gChatLetterLowerM;
		}
		else if (letterS == "n")
		{
			letterT = gChatLetterLowerN;
		}
		else if (letterS == "o")
		{
			letterT = gChatLetterLowerO;
		}
		else if (letterS == "p")
		{
			letterT = gChatLetterLowerP;
		}
		else if (letterS == "q")
		{
			letterT = gChatLetterLowerQ;
		}
		else if (letterS == "r")
		{
			letterT = gChatLetterLowerR;
		}
		else if (letterS == "s")
		{
			letterT = gChatLetterLowerS;
		}
		else if (letterS == "t")
		{
			letterT = gChatLetterLowerT;
		}
		else if (letterS == "u")
		{
			letterT = gChatLetterLowerU;
		}
		else if (letterS == "v")
		{
			letterT = gChatLetterLowerV;
		}
		else if (letterS == "w")
		{
			letterT = gChatLetterLowerW;
		}
		else if (letterS == "x")
		{
			letterT = gChatLetterLowerX;
		}
		else if (letterS == "y")
		{
			letterT = gChatLetterLowerY;
		}
		else if (letterS == "z")
		{
			letterT = gChatLetterLowerZ;
		}
		else if (letterS == "A")
		{
			letterT = gChatLetterCapA;
		}
		else if (letterS == "B")
		{
			letterT = gChatLetterCapB;
		}
		else if (letterS == "C")
		{
			letterT = gChatLetterCapC;
		}
		else if (letterS == "D")
		{
			letterT = gChatLetterCapD;
		}
		else if (letterS == "E")
		{
			letterT = gChatLetterCapE;
		}
		else if (letterS == "F")
		{
			letterT = gChatLetterCapF;
		}
		else if (letterS == "G")
		{
			letterT = gChatLetterCapG;
		}
		else if (letterS == "H")
		{
			letterT = gChatLetterCapH;
		}
		else if (letterS == "I")
		{
			letterT = gChatLetterCapI;
		}
		else if (letterS == "J")
		{
			letterT = gChatLetterCapJ;
		}
		else if (letterS == "K")
		{
			letterT = gChatLetterCapK;
		}
		else if (letterS == "L")
		{
			letterT = gChatLetterCapL;
		}
		else if (letterS == "M")
		{
			letterT = gChatLetterCapM;
		}
		else if (letterS == "N")
		{
			letterT = gChatLetterCapN;
		}
		else if (letterS == "O")
		{
			letterT = gChatLetterCapO;
		}
		else if (letterS == "P")
		{
			letterT = gChatLetterCapP;
		}
		else if (letterS == "Q")
		{
			letterT = gChatLetterCapQ;
		}
		else if (letterS == "R")
		{
			letterT = gChatLetterCapR;
		}
		else if (letterS == "S")
		{
			letterT = gChatLetterCapS;
		}
		else if (letterS == "T")
		{
			letterT = gChatLetterCapT;
		}
		else if (letterS == "U")
		{
			letterT = gChatLetterCapU;
		}
		else if (letterS == "V")
		{
			letterT = gChatLetterCapV;
		}
		else if (letterS == "W")
		{
			letterT = gChatLetterCapW;
		}
		else if (letterS == "X")
		{
			letterT = gChatLetterCapX;
		}
		else if (letterS == "Y")
		{
			letterT = gChatLetterCapY;
		}
		else if (letterS == "Z")
		{
			letterT = gChatLetterCapZ;
		}
		else if (letterS == " ")
		{
			letterT = NULL;
		}
		else if (letterS == "1")
		{
			letterT = gChatLetter1;
		}
		else if (letterS == "2")
		{
			letterT = gChatLetter2;
		}
		else if (letterS == "3")
		{
			letterT = gChatLetter3;
		}
		else if (letterS == "4")
		{
			letterT = gChatLetter4;
		}
		else if (letterS == "5")
		{
			letterT = gChatLetter5;
		}
		else if (letterS == "6")
		{
			letterT = gChatLetter6;
		}
		else if (letterS == "7")
		{
			letterT = gChatLetter7;
		}
		else if (letterS == "8")
		{
			letterT = gChatLetter8;
		}
		else if (letterS == "9")
		{
			letterT = gChatLetter9;
		}
		else if (letterS == "0")
		{
			letterT = gChatLetter0;
		}
		else if (letterS == "`")
		{
			letterT = gChatLetterAcute;
		}
		else if (letterS == "~")
		{
			letterT = gChatLetterTilde;
		}
		else if (letterS == "!")
		{
			letterT = gChatLetterExclamationMark;
		}
		else if (letterS == "?")
		{
			letterT = gChatLetterQuestionMark;
		}
		else if (letterS == "#")
		{
			letterT = gChatLetterPound;
		}
		else if (letterS == "$")
		{
			letterT = gChatLetter$;
		}
		else if (letterS == "%")
		{
			letterT = gChatLetterPercent;
		}
		else if (letterS == "^")
		{
			letterT = gChatLetterCaret;
		}
		else if (letterS == "&")
		{
			letterT = gChatLetterAmpersand;
		}
		else if (letterS == "*")
		{
			letterT = gChatLetterAsterisk;
		}
		else if (letterS == "(")
		{
			letterT = gChatLetterLeftParentheses;
		}
		else if (letterS == ")")
		{
			letterT = gChatLetterRightParentheses;
		}
		else if (letterS == "-")
		{
			letterT = gChatLetterMinus;
		}
		else if (letterS == "_")
		{
			letterT = gChatLetterUnderScore;
		}
		else if (letterS == "=")
		{
			letterT = gChatLetterEquals;
		}
		else if (letterS == "+")
		{
			letterT = gChatLetterPlus;
		}
		else if (letterS == "[")
		{
			letterT = gChatLetterLeftBracket;
		}
		else if (letterS == "]")
		{
			letterT = gChatLetterRightBracket;
		}
		else if (letterS == "{")
		{
			letterT = gChatLetterLeftBrace;
		}
		else if (letterS == "}")
		{
			letterT = gChatLetterRightBrace;
		}
		else if (letterS == "\\")
		{
			letterT = gChatLetterBackSlash;
		}
		else if (letterS == "|")
		{
			letterT = gChatLetterVerticalBar;
		}
		else if (letterS == ";")
		{
			letterT = gChatLetterSemiColon;
		}
		else if (letterS == ":")
		{
			letterT = gChatLetterColon;
		}
		else if (letterS == "'")
		{
			letterT = gChatLetterApostrophe;
		}
		else if (letterS == "\"")
		{
			letterT = gChatLetterQuotationMark;
		}
		else if (letterS == ",")
		{
			letterT = gChatLetterComma;
		}
		else if (letterS == "<")
		{
			letterT = gChatLetterLessThan;
		}
		else if (letterS == ".")
		{
			letterT = gChatLetterPeriod;
		}
		else if (letterS == ">")
		{
			letterT = gChatLetterGreaterThan;
		}
		else if (letterS == "/")
		{
			letterT = gChatLetterForwardSlash;
		}
		else if (letterS == "@")
		{
			letterT = gChatLetterAt;
		}
		else
		{
			letterT = gBee;
		}
		drawImage(count * 11 + x, y, 10, 10, letterT);
		
		//std::cout << count << std::endl;
		//std::cout << letterS << std::endl;
		count++;
	}
	

}

void drawChatBox()
{
	Chat Chat;
	drawImage(725, 5, 550, 165, gSidebarChatBox);
	drawChatBoxLetters(Chat.getChatText(0), 731, 154);
	drawChatBoxLetters(Chat.getChatText(1), 731, 137);
	drawChatBoxLetters(Chat.getChatText(2), 731, 126);
	drawChatBoxLetters(Chat.getChatText(3), 731, 115);
	drawChatBoxLetters(Chat.getChatText(4), 731, 104);
	drawChatBoxLetters(Chat.getChatText(5), 731, 93);
	drawChatBoxLetters(Chat.getChatText(6), 731, 82);
	drawChatBoxLetters(Chat.getChatText(7), 731, 71);
	drawChatBoxLetters(Chat.getChatText(8), 731, 60);
	drawChatBoxLetters(Chat.getChatText(9), 731, 49);
	drawChatBoxLetters(Chat.getChatText(10), 731, 38);
	drawChatBoxLetters(Chat.getChatText(11), 731, 27);
	drawChatBoxLetters(Chat.getChatText(12), 731, 16);
}

void drawMenus()
{
	Menus Menus;
	Shop Shop;
	//furnace
	if (Menus.getActivityType() == Menus::ACTIVITY_FURNACE)
	{
		int x, y;
		SDL_GetMouseState(&x, &y);
		drawImage(72, 108, 576, 504, gFurnaceBackground);
		if (x >= 611 && x <= 643 && y >= 113 && y <= 145)
			drawImage(611, 113, 32, 32, gSidebarSelected);
		drawImage(611, 113, 32, 32, gExitButton);

		if (Menus.getActivityState() == 0)
		{
			if (x >= 83 && x <= 147 && y >= 511 && y <= 575)
				drawImage(83, 511, 64, 64, gSidebarSelected);
			drawImage(83, 511, 64, 64, gIronBar);
			if (x >= 153 && x <= 217 && y >= 511 && y <= 575)
				drawImage(153, 511, 64, 64, gSidebarSelected);
			drawImage(153, 511, 64, 64, gGoldRing);
		}
		if (Menus.getActivityState() == 1)
		{
			if (x >= 83 && x <= 147 && y >= 511 && y <= 575)
				drawImage(83, 511, 64, 64, gSidebarSelected);
			drawImage(83, 511, 64, 64, gBronzeBar);
			if (x >= 153 && x <= 217 && y >= 511 && y <= 575)
				drawImage(153, 511, 64, 64, gSidebarSelected);
			drawImage(153, 511, 64, 64, gIronBar);
			if (x >= 223 && x <= 287 && y >= 511 && y <= 575)
				drawImage(223, 511, 64, 64, gSidebarSelected);
			drawImage(223, 511, 64, 64, gSteelBar);
			if (x >= 293 && x <= 357 && y >= 511 && y <= 575)
				drawImage(293, 511, 64, 64, gSidebarSelected);
			drawImage(293, 511, 64, 64, gMithrilBar);
			if (x >= 363 && x <= 427 && y >= 511 && y <= 575)
				drawImage(363, 511, 64, 64, gSidebarSelected);
			drawImage(363, 511, 64, 64, gAdamantiumBar);
			if (x >= 433 && x <= 497 && y >= 511 && y <= 575)
				drawImage(433, 511, 64, 64, gSidebarSelected);
			drawImage(433, 511, 64, 64, gRuneBar);
			if (x >= 503 && x <= 567 && y >= 511 && y <= 575)
				drawImage(503, 511, 64, 64, gSidebarSelected);
			drawImage(503, 511, 64, 64, gSilverBar);
			if (x >= 573 && x <= 637 && y >= 511 && y <= 575)
				drawImage(573, 511, 64, 64, gSidebarSelected);
			drawImage(573, 511, 64, 64, gGoldBar);
		}
	}
	//anvil
	if (Menus.getActivityType() == Menus::ACTIVITY_ANVIL)
	{
		int x, y;
		SDL_GetMouseState(&x, &y);
		drawImage(72, 108, 576, 504, gAnvilBackground);
		if (x >= 611 && x <= 643 && y >= 113 && y <= 145)
			drawImage(611, 113, 32, 32, gSidebarSelected);
		drawImage(611, 113, 32, 32, gExitButton);

		if (Menus.getActivityState() == 0)
		{
			if (x >= 83 && x <= 147 && y >= 187 && y <= 251)
				drawImage(83, 187, 64, 64, gSidebarSelected);
			drawImage(83, 187, 64, 64, gBronzeBar);
			if (x >= 153 && x <= 217 && y >= 187 && y <= 251)
				drawImage(153, 187, 64, 64, gSidebarSelected);
			drawImage(153, 187, 64, 64, gIronBar);
			if (x >= 223 && x <= 287 && y >= 187 && y <= 251)
				drawImage(223, 187, 64, 64, gSidebarSelected);
			drawImage(223, 187, 64, 64, gSteelBar);
			if (x >= 293 && x <= 357 && y >= 187 && y <= 251)
				drawImage(293, 187, 64, 64, gSidebarSelected);
			drawImage(293, 187, 64, 64, gMithrilBar);
			if (x >= 363 && x <= 427 && y >= 187 && y <= 251)
				drawImage(363, 187, 64, 64, gSidebarSelected);
			drawImage(363, 187, 64, 64, gAdamantiumBar);
			if (x >= 433 && x <= 497 && y >= 187 && y <= 251)
				drawImage(433, 187, 64, 64, gSidebarSelected);
			drawImage(433, 187, 64, 64, gRuneBar);
			if (x >= 503 && x <= 567 && y >= 187 && y <= 251)
				drawImage(503, 187, 64, 64, gSidebarSelected);
			drawImage(503, 187, 64, 64, gSilverBar);
			if (x >= 573 && x <= 637 && y >= 187 && y <= 251)
				drawImage(573, 187, 64, 64, gSidebarSelected);
			drawImage(573, 187, 64, 64, gGoldBar);
		}
		//bronze
		if (Menus.getActivityState() == 1)
		{
			if (x >= 83 && x <= 147 && y >= 187 && y <= 251)
				drawImage(83, 187, 64, 64, gSidebarSelected);
			drawImage(83, 187, 64, 64, gBronzeDagger);
			if (x >= 153 && x <= 217 && y >= 187 && y <= 251)
				drawImage(153, 187, 64, 64, gSidebarSelected);
			drawImage(153, 187, 64, 64, gBronzeSword);
		}
		//iron
		if (Menus.getActivityState() == 2)
		{
			if (x >= 83 && x <= 147 && y >= 187 && y <= 251)
				drawImage(83, 187, 64, 64, gSidebarSelected);
			drawImage(83, 187, 64, 64, gIronDagger);
			if (x >= 153 && x <= 217 && y >= 187 && y <= 251)
				drawImage(153, 187, 64, 64, gSidebarSelected);
			drawImage(153, 187, 64, 64, gIronSword);
		}
		//steel
		if (Menus.getActivityState() == 3)
		{
			if (x >= 83 && x <= 147 && y >= 187 && y <= 251)
				drawImage(83, 187, 64, 64, gSidebarSelected);
			drawImage(83, 187, 64, 64, gSteelDagger);
			if (x >= 153 && x <= 217 && y >= 187 && y <= 251)
				drawImage(153, 187, 64, 64, gSidebarSelected);
			drawImage(153, 187, 64, 64, gSteelSword);
		}
		//mithril
		if (Menus.getActivityState() == 4)
		{
			if (x >= 83 && x <= 147 && y >= 187 && y <= 251)
				drawImage(83, 187, 64, 64, gSidebarSelected);
			drawImage(83, 187, 64, 64, gMithrilDagger);
			if (x >= 153 && x <= 217 && y >= 187 && y <= 251)
				drawImage(153, 187, 64, 64, gSidebarSelected);
			drawImage(153, 187, 64, 64, gMithrilSword);
		}
		//addy
		if (Menus.getActivityState() == 5)
		{
			if (x >= 83 && x <= 147 && y >= 187 && y <= 251)
				drawImage(83, 187, 64, 64, gSidebarSelected);
			drawImage(83, 187, 64, 64, gAdamantiumDagger);
			if (x >= 153 && x <= 217 && y >= 187 && y <= 251)
				drawImage(153, 187, 64, 64, gSidebarSelected);
			drawImage(153, 187, 64, 64, gAdamantiumSword);
		}
		//rune
		if (Menus.getActivityState() == 6)
		{
			if (x >= 83 && x <= 147 && y >= 187 && y <= 251)
				drawImage(83, 187, 64, 64, gSidebarSelected);
			drawImage(83, 187, 64, 64, gRuneDagger);
			if (x >= 153 && x <= 217 && y >= 187 && y <= 251)
				drawImage(153, 187, 64, 64, gSidebarSelected);
			drawImage(153, 187, 64, 64, gRuneSword);
		}
		//silver
		if (Menus.getActivityState() == 7)
		{
			if (x >= 83 && x <= 147 && y >= 187 && y <= 251)
				drawImage(83, 187, 64, 64, gSidebarSelected);
			drawImage(83, 187, 64, 64, gBronzeDagger);
			if (x >= 153 && x <= 217 && y >= 187 && y <= 251)
				drawImage(153, 187, 64, 64, gSidebarSelected);
			drawImage(153, 187, 64, 64, gBronzeSword);
		}
		//gold
		if (Menus.getActivityState() == 8)
		{
			if (x >= 83 && x <= 147 && y >= 187 && y <= 251)
				drawImage(83, 187, 64, 64, gSidebarSelected);
			drawImage(83, 187, 64, 64, gBronzeDagger);
			if (x >= 153 && x <= 217 && y >= 187 && y <= 251)
				drawImage(153, 187, 64, 64, gSidebarSelected);
			drawImage(153, 187, 64, 64, gBronzeSword);
		}

	}
	//shop
	if (Menus.getActivityType() == Menus::ACTIVITY_SHOP)
	{
		int x, y;
		SDL_GetMouseState(&x, &y);
		drawImage(72, 108, 576, 504, gShopBackground);
		if (x >= 611 && x <= 643 && y >= 113 && y <= 145)
			drawImage(611, 113, 32, 32, gSidebarSelected);
		drawImage(611, 113, 32, 32, gExitButton);

		//Items
		for (int a = 0; a < 8; a++)
		{
			if(Shop::currentShop->getItem(a + 1).id != 0)
			{
				if (x >= 83 + (a * 70) && x <= 147 + (a * 70) && y >= 187 && y <= 251)
					drawImage(83 + (a * 70), 187, 64, 64, gSidebarSelected);
				drawImage(83 + (a * 70), 187, 64, 64, getItemTexture(Shop::currentShop->getItem(a + 1).id));
				drawNumber(Shop::currentShop->getStock(a + 1), 142 + (a * 70), 241);
			}
		}
		for (int a = 0; a < 8; a++)
		{
			if (Shop::currentShop->getItem(a + 9).id != 0)
			{
				if (x >= 83 + (a * 70) && x <= 147 + (a * 70) && y >= 257 && y <= 321)
					drawImage(83 + (a * 70), 257, 64, 64, gSidebarSelected);
				drawImage(83 + (a * 70), 257, 64, 64, getItemTexture(Shop::currentShop->getItem(a + 9).id));
				drawNumber(Shop::currentShop->getStock(a + 9), 142 + (a * 70), 311);
			}
		}
		for (int a = 0; a < 8; a++)
		{
			if (Shop::currentShop->getItem(a + 17).id != 0)
			{
				if (x >= 83 + (a * 70) && x <= 147 + (a * 70) && y >= 327 && y <= 391)
					drawImage(83 + (a * 70), 327, 64, 64, gSidebarSelected);
				drawImage(83 + (a * 70), 327, 64, 64, getItemTexture(Shop::currentShop->getItem(a + 17).id));
				drawNumber(Shop::currentShop->getStock(a + 17), 142 + (a * 70), 381);
			}
		}
		for (int a = 0; a < 8; a++)
		{
			if (Shop::currentShop->getItem(a + 25).id != 0)
			{
				if (x >= 83 + (a * 70) && x <= 147 + (a * 70) && y >= 397 && y <= 461)
					drawImage(83 + (a * 70), 397, 64, 64, gSidebarSelected);
				drawImage(83 + (a * 70), 397, 64, 64, getItemTexture(Shop::currentShop->getItem(a + 25).id));
				drawNumber(Shop::currentShop->getStock(a + 25), 142 + (a * 70), 451);
			}
		}
		for (int a = 0; a < 8; a++)
		{
			if (Shop::currentShop->getItem(a + 33).id != 0)
			{
				if (x >= 83 + (a * 70) && x <= 147 + (a * 70) && y >= 467 && y <= 531)
					drawImage(83 + (a * 70), 467, 64, 64, gSidebarSelected);
				drawImage(83 + (a * 70), 467, 64, 64, getItemTexture(Shop::currentShop->getItem(a + 33).id));
				drawNumber(Shop::currentShop->getStock(a + 33), 142 + (a * 70), 521);
			}
		}
		for (int a = 0; a < 8; a++)
		{
			if (Shop::currentShop->getItem(a + 41).id != 0)
			{
				if (x >= 83 + (a * 70) && x <= 147 + (a * 70) && y >= 537 && y <= 601)
					drawImage(83 + (a * 70), 537, 64, 64, gSidebarSelected);
				drawImage(83 + (a * 70), 537, 64, 64, getItemTexture(Shop::currentShop->getItem(a + 41).id));
				drawNumber(Shop::currentShop->getStock(a + 41), 142 + (a * 70), 591);
			}
		}
	}
}

void Artist::draw()
{
	drawMapFloor();
	drawMapEntities();
	drawMenus();
	
	//drawMapItems();

	//try randomized numbers to test getting item form number
	//drawImage(100, 100, 64, 64, Items::goldCoin.texture);


	drawSidebar();
	drawChatBox();
	drawItemOnCursor();
}
