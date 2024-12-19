#include "mainMenu.hpp"
#include <iostream>

MainMenu::MainMenu() :  Scene("mainMenu"),
                        playButton("playButton", font, "Play", sf::Vector2f(200, 50), sf::Color::Green),
                        exitButton("exitButton", font, "Exit", sf::Vector2f(200, 50), sf::Color::Red),
                        eraseDataButton("eraseDataButton", font, "Erase Data", sf::Vector2f(200, 50), sf::Color::Blue),
                        rankingButton("rankingButton", font, "Ranking", sf::Vector2f(200, 50), sf::Color::Yellow)
{
    if (!font.loadFromFile(LATO_REGULAR)) {
        std::cerr << "Failed to load font: " << LATO_REGULAR << std::endl;
    }

    title.setFont(font);
    title.setString("Main Menu");
    title.setCharacterSize(50);
    title.setFillColor(sf::Color::White);
    title.setPosition(WIN_WIDTH / 2.0f - title.getGlobalBounds().width / 2.0f, 50);

    playButton.setPosition(sf::Vector2f(WIN_WIDTH / 2.0f - 100, 200));
    playButton.setButtonAction([this] {
        std::cout << "Play button clicked" << std::endl;
    });

    exitButton.setPosition(sf::Vector2f(WIN_WIDTH / 2.0f - 100, 300));
    exitButton.setButtonAction([this] {
        std::cout << "Exit button clicked" << std::endl;
    });

    eraseDataButton.setPosition(sf::Vector2f(WIN_WIDTH / 2.0f - 100, 400));
    eraseDataButton.setButtonAction([this] {
        std::cout << "Erase Data button clicked" << std::endl;
    });

    rankingButton.setPosition(sf::Vector2f(WIN_WIDTH / 2.0f - 100, 500));
    rankingButton.setButtonAction([this] {
        std::cout << "Ranking button clicked" << std::endl;
    });
}

void MainMenu::handleEvent(const sf::Event& event, sf::RenderWindow& window) {
    playButton.handleEvent(event, window);
    exitButton.handleEvent(event, window);
    eraseDataButton.handleEvent(event, window);
    rankingButton.handleEvent(event, window);
}

void MainMenu::update() {
    playButton.update();
    exitButton.update();
    eraseDataButton.update();
    rankingButton.update();
}

void MainMenu::render(sf::RenderWindow& window) {
    window.draw(title);
    playButton.render(window);
    exitButton.render(window);
    eraseDataButton.render(window);
    rankingButton.render(window);
}
