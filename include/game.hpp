#ifndef GAME_HPP
#define GAME_HPP
#define GAME_NAME "Game"

#include "mainMenu.hpp"
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>

class Game {
public:
    Game();
    ~Game() = default;

    void loop();

private:
    sf::RenderWindow window;
    sf::Event event{};

    MainMenu mainMenu;
};

#endif //GAME_HPP
