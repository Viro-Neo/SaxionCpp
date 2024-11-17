#ifndef GENERICLABEL_HPP
#define GENERICLABEL_HPP

#include <SFML/Graphics.hpp>

class GenericLabel {
public:
    GenericLabel(const std::string& fontPath, const unsigned int characterSize, const sf::Color& fillColor);
    ~GenericLabel() = default;

    void setText(const std::string& text) { m_text.setString(text); }
    void setPosition(const sf::Vector2f& position) { m_position = position; }
    void render(sf::RenderWindow& window) const;

private:
    sf::Font m_font;
    sf::Text m_text;
    sf::Vector2f m_position;
};

#endif //GENERICLABEL_HPP
