#ifndef SCENE_HPP
#define SCENE_HPP

#include "gameObject.hpp"

class Scene {
public:
    explicit Scene(std::string identifier);
    ~Scene() = default;

    void update();
    void render(sf::RenderWindow& window);

    void addGameObject(GameObject& object);
    [[nodiscard]] std::string getIdentifier() const;

private:
    const std::string identifier;
    std::vector<GameObject*> listOfGameObjects;

};

#endif //SCENE_HPP
