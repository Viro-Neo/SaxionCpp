#include "game.hpp"

Game::Game() : window(sf::VideoMode(1280, 720), GAME_NAME), mainMenu("mainMenu"), arena("fightClub") {
    window.setFramerateLimit(60);
    font.loadFromFile("assets/Lato-Regular.ttf");
    // initMainMenu();
}

void Game::loop() {
    while (window.isOpen()) {
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        window.clear();
        window.display();
    }
}
