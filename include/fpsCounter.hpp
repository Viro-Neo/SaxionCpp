#ifndef FPSCOUNTER_HPP
#define FPSCOUNTER_HPP
#define FONT_PATH "assets/Arial.ttf"

#include <SFML/Graphics.hpp>

class FPSCounter {
public:
    FPSCounter();
    ~FPSCounter() = default;

    void update(const sf::Time& elapsed);
    void render(sf::RenderWindow& window) const;

private:
    sf::Font m_font;
    sf::Text m_text;
};

#endif //FPSCOUNTER_HPP
