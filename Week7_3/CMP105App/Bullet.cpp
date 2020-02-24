#include "Bullet.h"

Bullet::Bullet()
{
	setPosition(500, 500);
	setSize(sf::Vector2f(10, 10));
	setFillColor(sf::Color::Red);
	setVelocity(500, 0);
}


Bullet::~Bullet()
{
}

void Bullet::update(float dt)
{
	move(velocity*dt);
}
