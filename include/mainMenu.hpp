#ifndef MAINMENU_HPP
#define MAINMENU_HPP
#define LATO_REGULAR "assets/Lato-Regular.ttf"
#define WIN_WIDTH 1280
#define WIN_HEIGHT 720

#include "scene.hpp"
#include "button.hpp"
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Text.hpp>
#include <iostream>

class MainMenu : public Scene {
public:
    MainMenu();
    ~MainMenu() override = default;

    void handleEvent(const sf::Event& event, sf::RenderWindow& window) override;
    void update() override;
    void render(sf::RenderWindow& window) override;

private:
    sf::Font font;
    sf::Text title;
    Button playButton;
    Button exitButton;
    Button eraseDataButton;
    Button rankingButton;
};

#endif //MAINMENU_HPP
