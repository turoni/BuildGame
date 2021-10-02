#include "..\include\character.h"

#include "game_state.h"

namespace core 
{
Character::Character()
    : shape(50.f)
{
    position.y = 300;
    shape.setPosition(position.x, position.y);
    shape.setFillColor(sf::Color(100, 250, 50));
}

void Character::draw(sf::RenderTarget& target)
{
    target.draw(shape);
}

void Character::updatePosition()
{
    position.x += 1;
    shape.setPosition(position.x, position.y);
}

}