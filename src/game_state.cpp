
#include "game_state.h"

namespace core 
{

GameState::GameState()
{
}

void GameState::draw(sf::RenderWindow& window)
{
    character.draw(window);
}

void GameState::mainLoop()
{
    character.updatePosition();
}

}