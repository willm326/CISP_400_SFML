#ifndef BRANCH_H
#define BRANCH_H
#include <SFML/Graphics.hpp>

class Branch
{
public:
    Branch(sf::Sprite, sf::Vector2f);
    Branch(sf::Sprite, float x, float y);
    void flip();
    sf::Sprite getSprite();
private:
    sf::Sprite sprite;
};

#endif
