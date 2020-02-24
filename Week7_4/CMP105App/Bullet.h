#pragma once

#include "Framework/GameObject.h"

class Bullet : public GameObject
{
public:
	Bullet();
	~Bullet();

	void update(float dt);

};