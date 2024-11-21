#include "main.hpp"

int main() {
    sf::RenderWindow window(sf::VideoMode(1980, 1080), "ThirdWave");
    FPSCounter fpsCounter;
    const auto label1 = std::make_shared<GenericLabel>("label1", "assets/Arial.ttf", 20, sf::Color::White);
    const auto label2 = std::make_shared<GenericLabel>("label2", "assets/Arial.ttf", 20, sf::Color::White);
    const auto label3 = std::make_shared<GenericLabel>("label3", "assets/Arial.ttf", 20, sf::Color::White);
    sf::Clock clock;
    sf::Time elapsed = clock.getElapsedTime();

    label1->setText("Hello, World!");
    label1->setPosition(sf::Vector2f(100, 100));
    label2->setText("KYS, World!");
    label2->setPosition(sf::Vector2f(200, 300));
    label3->setText("Goodbye, World!");
    label3->setPosition(sf::Vector2f(300, 500));
    window.setFramerateLimit(60);

    label1->addChild(label2);
    label1->addChild(label3);

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

        label1->render(window);
        label2->render(window);
        label3->render(window);
        window.display();

        elapsed = clock.getElapsedTime();
        clock.restart();
    }
}
