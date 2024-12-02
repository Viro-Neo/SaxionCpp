#ifndef BUTTON_HPP
#define BUTTON_HPP

#include "gameObject.hpp"
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/RectangleShape.hpp>

class Button : public GameObject {
public:
    Button(const std::string &identifier, sf::Font& font, const std::string& buttonText,
            sf::Vector2f size, sf::Color color);
    ~Button() override = default;

    void handleEvent(const sf::Event& event, sf::RenderWindow& window) override;
    virtual void onClick();

    void update() override {}
    void render(sf::RenderWindow& window) override;

    void setButtonAction(const std::function<void()> &action);
    void setCharacterSize(int size);
    void setPosition(sf::Vector2f position);

private:
    sf::Text text;
    sf::Font& font;
    sf::RectangleShape shape;
    std::string buttonText;
    std::function<void()> action;
};

#endif //BUTTON_HPP
