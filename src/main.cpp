#include "main.hpp"

int main() {
    sf::RenderWindow window(sf::VideoMode(1980, 1080), "ThirdWave");
    FPSCounter fpsCounter;
    sf::Clock clock;
    sf::Time elapsed = clock.getElapsedTime();

    window.setFramerateLimit(60);

    while (window.isOpen()) {
        sf::Event event{};
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear();

        fpsCounter.update(elapsed);
        fpsCounter.render(window);

        window.display();

        elapsed = clock.getElapsedTime();
        clock.restart();
    }
}
