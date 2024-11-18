#ifndef GENERICLABEL_HPP
#define GENERICLABEL_HPP

#include "GameObject.hpp"
#include <SFML/Graphics.hpp>

class GenericLabel : public GameObject {
public:
    GenericLabel(const std::string &identifier, const std::string& fontPath, unsigned int characterSize, const sf::Color& fillColor);
    GenericLabel(const GenericLabel& other);
    ~GenericLabel() override;

    void update() override;
    void render(sf::RenderWindow& window) override;

    void setText(const std::string& text) { m_text.setString(text); }
    void setPosition(const sf::Vector2f& position) { m_position = position; }

private:
    sf::Font m_font;
    sf::Text m_text;
    sf::Vector2f m_position;
};

#endif //GENERICLABEL_HPP
