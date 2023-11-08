#include "Tree.h"
Tree::Tree(sf::Texture& texture, sf::Vector2f position)
{
	sprite.setTexture(texture);
	sprite.setPosition(position);
}
Tree::Tree(sf::Texture& texture, float x, float y)
{
	sprite.setTexture(texture);
	sprite.setPosition(x, y);
}
void Tree::addBranch(Branch branch)
{
	branches.push_back(branch);
}
void Tree::draw(sf::RenderWindow& window)
{
	window.draw(sprite);
	for (Branch branch : branches)
	{
		window.draw(branch.getSprite());
	}
}