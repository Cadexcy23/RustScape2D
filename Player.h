#pragma once
class Player {
public:

	static int playerState;
	static float playerRenderX, playerRenderY;

	enum playerStates
	{
		STATE_IDLE,
		STATE_WALKING_UP,
		STATE_WALKING_DOWN,
		STATE_WALKING_LEFT,
		STATE_WALKING_RIGHT,
		STATE_WALKING_UP_RIGHT,
		STATE_WALKING_UP_LEFT,
		STATE_WALKING_DOWN_RIGHT,
		STATE_WALKING_DOWN_LEFT
	};


};