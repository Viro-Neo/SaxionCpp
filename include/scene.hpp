#ifndef SCENE_HPP
#define SCENE_HPP

#include "gameObject.hpp"

class Scene {
public:
    explicit Scene(std::string identifier);
    virtual ~Scene() = default;

    void addGameObject(GameObject& object);
    virtual void handleEvent(const sf::Event& event, sf::RenderWindow& window);
    virtual void update();
    virtual void render(sf::RenderWindow& window);

    [[nodiscard]] std::string getIdentifier() const;

private:
    const std::string identifier;
    std::vector<GameObject*> listOfGameObjects;
};

#endif //SCENE_HPP
