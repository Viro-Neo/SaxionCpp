#include "fpsCounter.hpp"

FPSCounter::FPSCounter() {
    m_font.loadFromFile(FONT_PATH);
    m_text.setFont(m_font);
    m_text.setCharacterSize(24);
    m_text.setFillColor(sf::Color::White);
    m_text.setPosition(10, 10);
}

void FPSCounter::update(const sf::Time& elapsed) {
    const float seconds = elapsed.asSeconds();
    const float fps = 1.0f / (seconds != 0 ? seconds : 0.01666f);
    m_text.setString("FPS: " + std::to_string(fps));
}

void FPSCounter::render(sf::RenderWindow& window) const {
    window.draw(m_text);
}
