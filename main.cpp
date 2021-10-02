//Main start point of the game

#include <SFML/Graphics.hpp>
//#include <Clock.hpp>

#include "game_state.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "BoilerPlate");

    core::GameState state;
    while (window.isOpen())
    {

        sf::Event event;
        state.mainLoop();

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
                window.close();
                break;
            case sf::Event::KeyPressed:

                break;
            }
            
            //if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            //{
            //    //x += 1;
            //}
        }

        window.clear();
        state.draw(window);
        window.display();
    }
    return 0;
}