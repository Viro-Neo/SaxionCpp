#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP

#include <SFML/Graphics/RenderWindow.hpp>

class GameObject {
public:
    explicit GameObject(std::string identifier);
    GameObject(const GameObject& other);

    virtual ~GameObject() = default;

    virtual void handleEvent(const sf::Event& event, sf::RenderWindow& window) { };
    virtual void update() = 0;
    virtual void render(sf::RenderWindow& window) = 0;
    [[nodiscard]] std::string getIdentifier() const;

private:
    const std::string identifier;
};

#endif //GAMEOBJECT_HPP
