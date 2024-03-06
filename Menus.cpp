#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include "Menus.h"



int sidebarState = Menus::SIDEBAR_NONE, activityType = Menus::ACTIVITY_NONE, activityState = 0;

int Menus::getSidebarState()
{
	return sidebarState;
}

void Menus::setSidebarState(int state)
{
	sidebarState = state;
}

int Menus::getActivityType()
{
	return activityType;
}

void Menus::setActivityType(int type)
{
	activityType = type;
}

int Menus::getActivityState()
{
	return activityState;
}

void Menus::setActivityState(int state)
{
	activityState = state;
}