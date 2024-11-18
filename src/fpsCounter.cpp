#include "fpsCounter.hpp"

FPSCounter::FPSCounter() : GenericLabel("fpsCounter", FONT_PATH, 20, sf::Color::White) {
    setText("FPS: 0");
}

void FPSCounter::update(const sf::Time& elapsed) {
    const float seconds = elapsed.asSeconds();
    const float fps = 1.0f / (seconds != 0 ? seconds : 0.01666f);
    setText("FPS: " + std::to_string(fps));
}

void FPSCounter::render(sf::RenderWindow& window) {
    GenericLabel::render(window);
}
