#pragma once
#ifndef Items
#include "Items.h"
#endif // !SDL
class Artist{

		//Draws everything
public:
	SDL_Texture * loadTexture(std::string path);

	void draw();

		//Clears the screen
public: void clearScreen();

		//Updates the screen
public: void updateScreen();

		//Starts up SDL and creates window
public: bool init();

		//Loads media
public: bool loadMedia();

		//Frees media and shuts down SDL
public: void close();


};