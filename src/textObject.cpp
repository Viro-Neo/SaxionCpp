#ifndef TEXTOBJECT_CPP_HPP
#define TEXTOBJECT_CPP_HPP

#include "textObject.hpp"

#include <utility>

TextObject::TextObject(const std::string &identifier, sf::Font& font, std::string textStr) : GameObject(identifier), font(font), textStr(std::move(textStr)) {
    this->text.setString(this->textStr);
    this->text.setPosition(this->position);
    this->text.setFont(this->font);
    this->text.setCharacterSize(12);
    this->text.setFillColor(sf::Color::Black);
}

void TextObject::render(sf::RenderWindow& window) {
    window.draw(this->text);
}

std::string TextObject::getTextStr() const {
    return this->textStr;
}

void TextObject::setText(const std::string& textStr) {
    this->textStr = textStr;
    this->text.setString(this->textStr);
}

void TextObject::setCharacterSize(const int size) {
    this->text.setCharacterSize(size);
}

void TextObject::setFillColor(const sf::Color color) {
    this->text.setFillColor(color);
}

void TextObject::setPosition(const sf::Vector2f position) {
    this->text.setPosition(position);
}

#endif //TEXTOBJECT_CPP_HPP
