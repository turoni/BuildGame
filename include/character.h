#ifndef CORE_CHARACTER_H
#define CORE_CHARACTER_H

#include <SFML/Graphics.hpp>

namespace core 
{

struct Position
{
    int x = 0;
    int y = 0;
};

class Character {
public:
    Character();
    void draw(sf::RenderTarget& target);
    void updatePosition();
private:
    sf::CircleShape shape;
    Position position;
};

}

#endif