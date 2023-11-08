#include "Movable.h"
Movable::Movable(sf::Texture& texture, sf::Vector2f position, float _moveSpeed) : sf::Sprite(texture)
{
	Sprite::setPosition(position);
	active = false;
	moveSpeed = _moveSpeed;
}