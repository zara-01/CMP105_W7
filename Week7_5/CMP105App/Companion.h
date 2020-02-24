#pragma once

#include "Framework/GameObject.h"
#include "Player.h"

class Companion : public GameObject
{
public:
	Companion();
	~Companion();

	void update(float dt);
	void moveToPlayer(Player* player);

private:
	
};