#ifndef TREE_H
#define TREE_H
#include <SFML/Graphics.hpp>
#include "Branch.h"
#include <vector>

class Tree
{
public:
    Tree(sf::Texture texture, sf::Vector2f);
    Tree(sf::Texture texture, float x, float y);
    void addBranch(Branch);
    void draw(sf::RenderWindow& window);
private:
    sf::Sprite sprite;
    std::vector<Branch> branches;

};

#endif

