#include "Bit.h"

#define MIN 0
#define MAX 550

Bit::Bit()
{
	setPosition(rand() % 600, rand() % 400);
	setSize(sf::Vector2f(25, 25));
	setVelocity(0, rand() % 500);
	setFillColor(sf::Color::Green);
}


Bit::~Bit()
{
}


void Bit::update(float dt)
{
	move(velocity*dt);
	if (getPosition().y > MAX)
	{
		velocity = -velocity;
		setPosition(getPosition().x, MAX);
	}
	else if (getPosition().y < MIN)
	{
		velocity = -velocity;
		setPosition(getPosition().x, MIN);
	}
}

