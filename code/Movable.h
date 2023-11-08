#ifndef MOVABLE_H
#define MOVABLE_H
#include <SFML/Graphics.hpp>
class Movable :
    public sf::Sprite
{
public:
    Movable(sf::Texture& texture, sf::Vector2f position, float _moveSpeed = 0.0f);
    void setActive(bool state)
    {
        active = state;
    }
    bool isActive() { return active; }
    void setSpeed(float _moveSpeed) { moveSpeed = _moveSpeed; }
private:
    bool active;
    float moveSpeed;
};

#endif
