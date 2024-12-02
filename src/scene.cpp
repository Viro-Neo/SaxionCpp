#include "scene.hpp"
#include <utility>

Scene::Scene(std::string identifier) : identifier(std::move(identifier)) { }

void Scene::addGameObject(GameObject& object) {
    this->listOfGameObjects.push_back(&object);
}

void Scene::handleEvent(const sf::Event& event, sf::RenderWindow& window) {
    for(const auto & listOfGameObject : this->listOfGameObjects) {
        listOfGameObject->handleEvent(event, window);
    }
}

void Scene::update() {
    for(const auto & listOfGameObject : this->listOfGameObjects) {
        listOfGameObject->update();
    }
}

void Scene::render(sf::RenderWindow& window) {
    for(const auto & listOfGameObject : this->listOfGameObjects) {
        listOfGameObject->render(window);
    }
}

std::string Scene::getIdentifier() const {
    return this->identifier;
}
