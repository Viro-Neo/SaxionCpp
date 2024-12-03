#include "game.hpp"

Game::Game() : window(sf::VideoMode(1280, 720), GAME_NAME) {
    window.setFramerateLimit(60);
}

void Game::loop() {
    while (window.isOpen()) {
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            mainMenu.handleEvent(event, window);
        }
        mainMenu.update();
        window.clear();
        mainMenu.render(window);
        window.display();
    }
}
