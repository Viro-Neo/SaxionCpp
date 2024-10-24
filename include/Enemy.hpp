#ifndef SAXIONCPP_ENEMY_HPP
#define SAXIONCPP_ENEMY_HPP

#include <iostream>
#include <random>

class Enemy {
public:
    Enemy();
    ~Enemy() = default;

    void displayStats() const;
    void assignStats();

    void setHealth(int health);
    void setAttack(int attack);
    void setDefense(int defense);
    void setAgility(int agility);
    void setTotalPoints(int totalPoints);
private:
    std::string name;
    int health;
    int attack;
    int defense;
    int agility;
    int totalPoints;
};

#endif //SAXIONCPP_ENEMY_HPP
