#ifndef TEXTOBJECT_HPP
#define TEXTOBJECT_HPP

#include "gameObject.hpp"
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Text.hpp>

class TextObject : public GameObject {
public:
    TextObject(const std::string &identifier, sf::Font& font, std::string textStr);
    ~TextObject() override = default;

    void update() override {}
    void render(sf::RenderWindow& window) override;

    std::string getTextStr() const;
    void setText(const std::string& textStr);
    void setCharacterSize(int size);
    void setFillColor(sf::Color color);
    void setPosition(sf::Vector2f position);

private:
    sf::Font& font;
    sf::Text text;
    std::string textStr;
    sf::Vector2f position;
};

#endif //TEXTOBJECT_HPP
