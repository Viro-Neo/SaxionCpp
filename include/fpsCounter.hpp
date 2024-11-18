#ifndef FPSCOUNTER_HPP
#define FPSCOUNTER_HPP
#define FONT_PATH "assets/Arial.ttf"

#include "GenericLabel.hpp"
#include <SFML/Graphics.hpp>

class FPSCounter final : public GenericLabel {
public:
    FPSCounter();
    ~FPSCounter() override = default;

    void update(const sf::Time& elapsed);
    void render(sf::RenderWindow& window) override;
};

#endif //FPSCOUNTER_HPP
