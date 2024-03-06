
#include <SDL.h>
#undef main
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "Artist.h"
#include "Controller.h"
#include "Logic.h"
#include "Items.h"
#include "Inventory.h"
#include "Saving.h"

static int start(int argc, char* args[])
{

	//Declare Artist and controller
	Artist Artist;
	Controller Controller;
	Logic Logic;
	Saving Saving;
	//Start up SDL and create window
	if (!Artist.init())
	{
		printf("Failed to initialize!\n");
	}
	else
	{
		//Load media
		if (!Artist.loadMedia())
		{
			printf("Failed to load media!\n");
		}
		else
		{

			Saving.loadMap();
			
			
			//While application is running
			while (Controller.isRunning())
			{
				
				
				//Logic.FPSCounter();

				

				//Updates game world
				Logic.update();

				//Clear screen
				Artist.clearScreen();

				//Draw everything
				Artist.draw();

				//Checks for user input
				Controller.controller();
				
				//Update screen
				Artist.updateScreen();
			}
		}
	}

	//Free resources and close SDL
	Artist.close();

	return 0;
}

int WinMain(int argc, char* args[])
{
	start(argc, args);
}

int main(int argc, char* args[])
{
	start(argc, args);
}