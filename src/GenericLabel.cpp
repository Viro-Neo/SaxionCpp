#include "GenericLabel.hpp"

GenericLabel::GenericLabel(const std::string& fontPath, const unsigned int characterSize, const sf::Color& fillColor) {
    m_font.loadFromFile(fontPath);
    m_text.setFont(m_font);
    m_text.setCharacterSize(characterSize);
    m_text.setFillColor(fillColor);
    m_text.setPosition(m_position);
}

void GenericLabel::render(sf::RenderWindow& window) const {
    window.draw(m_text);
}
