#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP

#include <SFML/Graphics/RenderWindow.hpp>
#include <memory>

class GameObject {
public:
    explicit GameObject(std::string identifier);
    GameObject(const GameObject& other);
    virtual ~GameObject();

    virtual void update() = 0;
    virtual void render(sf::RenderWindow& window) = 0;

    [[nodiscard]] std::string getIdentifier() const { return this->identifier; }
    [[nodiscard]] const sf::Vector2f& getPosition() const { return m_position; }

    void setPosition(const sf::Vector2f& position);

    void addChild(const std::shared_ptr<GameObject>& child);
    void removeChild(std::string identifier);

private:
    const std::string identifier;
    sf::Vector2f m_position;
    std::vector <std::shared_ptr<GameObject>> children;
};

#endif //GAMEOBJECT_HPP
