#include "Companion.h"

Companion::Companion()
{
	setPosition(500, 500);
	setSize(sf::Vector2f(10, 10));
	setFillColor(sf::Color::Blue);
	setVelocity(500, 0);
}


Companion::~Companion()
{
}

void Companion::update(float dt)
{
	move(velocity*dt);
}

void Companion::moveToPlayer(Player* p)
{
	setPosition(p->getPosition());
}
