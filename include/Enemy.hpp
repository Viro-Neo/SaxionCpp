#ifndef SAXIONCPP_ENEMY_HPP
#define SAXIONCPP_ENEMY_HPP

#include "Player.hpp"
#include <random>

class Enemy {
public:
    Enemy();
    ~Enemy() = default;

    void displayStats() const;
    void assignStats();

    void setHealth(const int hp) { this->health = hp; }
    void setAttack(const int atk) { this->attack = atk; }
    void setDefense(const int def) { this->defense = def; }
    void setAgility(const int agl) { this->agility = agl; }
    void setTotalPoints(const int ttPts) { this->totalPoints = ttPts; }

    [[nodiscard]] int getHealth() const { return health; }
    [[nodiscard]] int getAttack() const { return attack; }
    [[nodiscard]] int getDefense() const { return defense; }
    [[nodiscard]] int getAgility() const { return agility; }
    [[nodiscard]] int getTotalPoints() const { return totalPoints; }

private:
    std::string name;
    int health;
    int attack;
    int defense;
    int agility;
    int totalPoints;
};

#endif //SAXIONCPP_ENEMY_HPP
