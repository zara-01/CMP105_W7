#pragma once

#include "Framework/GameObject.h"
#include "Bullet.h"

class Player : public GameObject
{
public:
	Player();
	~Player();

	void handleInput(float dt);
	void update(float dt);
	Bullet* spawn(sf::Vector2f pos);
	bool fired() { return hasFired; };
	Bullet* getBullet() {
		return bullet;
	};

private:
	Bullet* bullet;
	bool hasFired;
};