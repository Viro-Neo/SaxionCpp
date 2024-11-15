#include "main.hpp"

int main() {
    sf::RenderWindow window(sf::VideoMode(1980, 1080), "ThirdWave");

    while (window.isOpen()) {
        sf::Event event{};
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear();
        window.display();
    }
}
