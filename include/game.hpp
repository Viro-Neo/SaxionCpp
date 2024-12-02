#ifndef GAME_HPP
#define GAME_HPP
#define GAME_NAME "Game"
#define WIN_WIDTH 1280
#define WIN_HEIGHT 720

#include "sceneHandler.hpp"
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

    Scene mainMenu;
    Scene arena;
    SceneHandler sceneManager;
};

#endif //GAME_HPP
