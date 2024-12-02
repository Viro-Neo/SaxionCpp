#include "sceneHandler.hpp"

void SceneHandler::render(sf::RenderWindow& window) const {
    if(!this->scenesStack.empty()) {
        this->scenesStack.top()->render(window);
    }
}

void SceneHandler::update() {
    if(!this->scenesStack.empty()) {
        this->scenesStack.top()->update();
    }
}

void SceneHandler::addScene(Scene& scene) {
    this->scenes.emplace(scene.getIdentifier(), &scene);
    if(this->scenes.size() == 1) {
        this->stackScene(scene.getIdentifier());
    }
}

void SceneHandler::stackScene(const std::string& sceneName) {
    this->scenesStack.push(scenes[sceneName]);
}

void SceneHandler::popScene() {
    this->scenesStack.pop();
}
