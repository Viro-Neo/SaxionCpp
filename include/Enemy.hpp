#ifndef SAXIONCPP_ENEMY_HPP
#define SAXIONCPP_ENEMY_HPP

#include <iostream>
#include <random>

#include "Player.hpp"

class Enemy {
public:
    Enemy();
    ~Enemy() = default;

    void displayStats() const;
    void assignStats();

    void setHealth(int hp) { this->health = hp; }
    void setAttack(int atk) { this->attack = atk; }
    void setDefense(int def) { this->defense = def; }
    void setAgility(int agl) { this->agility = agl; }
    void setTotalPoints(int ttPts) { this->totalPoints = ttPts; }

    [[nodiscard]] int getHealth() const { return health; }
    [[nodiscard]] int getAttack() const { return attack; }
    [[nodiscard]] int getDefense() const { return defense; }
    [[nodiscard]] int getAgility() const { return agility; }
    [[nodiscard]] int getTotalPoints() const { return totalPoints; }

    void dealDamageToPlayer(Player& player) const;
    void heal();
    static void doNothing();

private:
    std::string name;
    int health;
    int attack;
    int defense;
    int agility;
    int totalPoints;
};

#endif //SAXIONCPP_ENEMY_HPP
