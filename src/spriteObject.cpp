#include "spriteObject.hpp"

#include <utility>

SpriteObject::SpriteObject(const std::string &identifier, std::string spriteFile) :
    GameObject(identifier), spriteFile(std::move(spriteFile))
{
    this->texture.loadFromFile(this->spriteFile);
    this->sprite.setTexture(this->texture);
}

SpriteObject::SpriteObject(const SpriteObject& other) :
    GameObject(other.getIdentifier()), spriteFile(other.getSpriteFile())
{
    this->texture.loadFromFile(this->spriteFile);
    this->sprite.setTexture(this->texture);
}

void SpriteObject::render(sf::RenderWindow& window) {
    window.draw(this->sprite);
}

void SpriteObject::setPosition(const sf::Vector2f position) {
    sprite.setPosition(position);
}

void SpriteObject::setScale(const sf::Vector2f scale) {
    sprite.setScale(scale);
}

std::string SpriteObject::getSpriteFile() const {
    return this->spriteFile;
}
