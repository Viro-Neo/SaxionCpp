#ifndef SCENEHANDLER_HPP
#define SCENEHANDLER_HPP

#include "scene.hpp"
#include <map>
#include <stack>

class SceneHandler {
public:
    SceneHandler() = default;
    ~SceneHandler() = default;

    void render(sf::RenderWindow& window) const;
    void update();

    void addScene(Scene& scene);
    void stackScene(const std::string& sceneName);
    void popScene();

private:
    std::map<std::string, Scene*> scenes;
    std::stack<Scene*> scenesStack;
};

#endif //SCENEHANDLER_HPP
