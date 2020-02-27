#pragma once

#include "Framework/GameObject.h"
#include "Player.h"

class Enemy : public GameObject
{
public:
	Enemy();
	~Enemy();

	void update(float dt);

	float elapsedTime;
};