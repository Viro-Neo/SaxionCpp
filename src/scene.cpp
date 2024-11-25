#include "scene.hpp"

Scene::Scene(std::string identifier) : identifier(std::move(identifier)) {}

void Scene::addGameObject(GameObject& object) {
    this->listOfGameObjects.push_back(&object);
}

void Scene::update() {
    for (const auto& gameObject : this->listOfGameObjects) {
        gameObject->update();
    }
}

void Scene::render(sf::RenderWindow& window) {
    for (const auto& gameObject : this->listOfGameObjects) {
        gameObject->render(window);
    }
}

std::string Scene::getIdentifier() const {
    return this->identifier;
}
