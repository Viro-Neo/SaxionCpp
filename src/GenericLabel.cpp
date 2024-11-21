#include "GenericLabel.hpp"

GenericLabel::GenericLabel(const std::string &identifier, const std::string& fontPath, const unsigned int characterSize, const sf::Color& fillColor) :
    GameObject(identifier)
{
    m_font.loadFromFile(fontPath);
    m_text.setFont(m_font);
    m_text.setCharacterSize(characterSize);
    m_text.setFillColor(fillColor);
}

GenericLabel::GenericLabel(const GenericLabel& other) :
    GameObject(other.getIdentifier())
{
    m_font = other.m_font;
    m_text = other.m_text;
}

GenericLabel::~GenericLabel() = default;

void GenericLabel::update() {

}

void GenericLabel::render(sf::RenderWindow& window) {
    m_text.setPosition(GameObject::getPosition());
    window.draw(m_text);
}
