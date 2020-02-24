#include "Player.h"

Player::Player()
{
	setPosition(200, 200);
	setSize(sf::Vector2f(100, 100));
}


Player::~Player()
{
}

void Player::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Space))
	{
		input->setKeyUp(sf::Keyboard::Space);
		int x = rand() % 600;
		int y = rand() % 400;
		setPosition((float)x, (float)y);
	}

	if (input->isKeyDown(sf::Keyboard::Enter))
	{
		input->setKeyUp(sf::Keyboard::Enter);
		companion.moveToPlayer(this);
	}

}

void Player::update(float dt) 
{

}

