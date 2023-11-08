#ifndef BRANCH_H
#define BRANCH_H
#include <SFML/Graphics.hpp>

class Branch
{
public:
    Branch(sf::Texture&, sf::Vector2f);
    Branch(sf::Texture&, float x, float y);
    void flip();
    sf::Sprite getSprite()
    {
        return sprite;
    }
private:
    sf::Sprite sprite;
};

#endif
