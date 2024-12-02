#ifndef SPRITEOBJECT_HPP
#define SPRITEOBJECT_HPP

#include "gameObject.hpp"
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>

class SpriteObject : public GameObject {
public:
    SpriteObject(const std::string &identifier, std::string spriteFile);
    SpriteObject(const SpriteObject& other);
    ~SpriteObject() override = default;

    void update() override {}
    void render(sf::RenderWindow& window) override;

    void setPosition(sf::Vector2f position);
    void setScale(sf::Vector2f scale);
    std::string getSpriteFile() const;

private:
    std::string spriteFile;
    sf::Sprite sprite;
    sf::Texture texture;
};

#endif //SPRITEOBJECT_HPP
