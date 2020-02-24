#pragma once

#include "Framework/GameObject.h"
#include "Enemy.h"

class Player : public GameObject
{
public:
	Player();
	~Player();

	void handleInput(float dt);

};