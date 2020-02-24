#pragma once

#include "Framework/GameObject.h"
#include "Companion.h"

class Player : public GameObject
{
public:
	Player();
	~Player();

	void handleInput(float dt);
	void update(float dt);
	Companion* getCompanion()
	{
		return &companion;
	};

private:
	Companion companion;
};