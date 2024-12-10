#include "button.hpp"
#include <SFML/Window/Event.hpp>
#include <iostream>

Button::Button(const std::string &identifier, sf::Font& font, const std::string& buttonText, const sf::Vector2f size, const sf::Color color) :
    GameObject(identifier), font(font), buttonText(buttonText)
{
    this->shape.setSize(size);
    this->shape.setFillColor(color);
    this->shape.setOutlineColor(sf::Color::Black);
    this->shape.setOutlineThickness(1);

    this->text.setFont(font);
    this->text.setString(buttonText);
    this->text.setCharacterSize(26);
    this->text.setFillColor(sf::Color::White);
    // const sf::FloatRect textRect = this->text.getLocalBounds();
    // std::cout << "textRect.width: " << textRect.width << std::endl;
    // std::cout << "textRect.height: " << textRect.height << std::endl;
    // this->text.setOrigin(0, 0);

    this->setPosition(sf::Vector2f(0.0f, 0.0f));
}

void Button::handleEvent(const sf::Event& event, sf::RenderWindow& window) {
    if(event.type == sf::Event::MouseButtonPressed  &&
        event.mouseButton.button == sf::Mouse::Button::Left) {

        const sf::Vector2i mousePosition = sf::Mouse::getPosition(window);
        const sf::Vector2f size = shape.getSize();
        sf::Vector2f position = shape.getPosition();

        if (mousePosition.x >= position.x && mousePosition.x <= position.x + size.x &&
            mousePosition.y >= position.y && mousePosition.y <= position.y + size.y) {
            this->onClick();
            }
        }
}

void Button::render(sf::RenderWindow& window) {
    window.draw(this->shape);
    window.draw(this->text);
}

void Button::setCharacterSize(const int size) {
    this->text.setCharacterSize(size);
}

void Button::setPosition(const sf::Vector2f position) {
    this->shape.setPosition(position);
    const sf::Vector2f size = this->shape.getSize();
    const sf::FloatRect textRect = this->text.getLocalBounds();
    std::cout << "textRect.width: " << textRect.width << std::endl;
    std::cout << "textRect.height: " << textRect.height << std::endl;
    this->text.setPosition(position.x + size.x / 2.0f - textRect.width / 2.0f, position.y + size.y / 2.0f - textRect.height / 2.0f);
}

void Button::onClick() {
    this->action();
}

void Button::setButtonAction(const std::function<void()> &action) {
    this->action = action;
}
