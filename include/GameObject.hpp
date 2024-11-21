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

    [[nodiscard]] std::string getIdentifier() const;
    void addChild(const std::shared_ptr<GameObject>& child);
    void removeChild(std::string identifier);

private:
    const std::string identifier;
    std::vector <std::shared_ptr<GameObject>> children;
};

#endif //GAMEOBJECT_HPP
