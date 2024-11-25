#ifndef GAME_HPP
#define GAME_HPP
#define GAME_NAME "Katana ZERO: CMGT Edition"

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>

class Game {
public:
    Game();
    ~Game();

    void loop();

private:
    sf::RenderWindow window;
    sf::Event event{};
};

#endif //GAME_HPP
