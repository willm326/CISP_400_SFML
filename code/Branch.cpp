#include "Branch.h"
Branch::Branch(sf::Texture& texture, sf::Vector2f position)
{
	sprite.setTexture(texture);
	sprite.setPosition(position);
}
Branch::Branch(sf::Texture& texture, float x, float y)
{
	sprite.setTexture(texture);
	sprite.setPosition(x, y);
}
void Branch::flip()
{

}
