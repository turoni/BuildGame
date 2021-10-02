#ifndef CORE_GAME_STATE_H
#define CORE_GAME_STATE_H


#include "character.h"

#include <SFML/Graphics.hpp>
namespace core 
{

class GameState 
{
public:
    GameState();

    void draw(sf::RenderWindow& window);

    void mainLoop();
private:
    Character character;
};

}

#endif