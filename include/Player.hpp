#ifndef SAXIONCPP_PLAYER_HPP
#define SAXIONCPP_PLAYER_HPP

#include "Enemy.hpp"
#include <memory>
#include <iostream>

class Player {
public:
    explicit Player(int inventorySize);
    ~Player() = default;

    void addInventoryItem(const std::string& item);
    void printInventory() const;
    void removeInventoryItem(int index);
    void displayStats() const;

    void setHealth(const int hp) { this->health = hp; }
    void setAttack(const int atk) { this->attack = atk; }
    void setDefense(const int def) { this->defense = def; }
    void setAgility(const int agl) { this->agility = agl; }

    [[nodiscard]] int getHealth() const { return health; }
    [[nodiscard]] int getAttack() const { return attack; }
    [[nodiscard]] int getDefense() const { return defense; }
    [[nodiscard]] int getAgility() const { return agility; }

private:
    std::string name;
    int health;
    int attack;
    int defense;
    int agility;
    int inventorySize;
    std::unique_ptr<std::string[]> inventory;
};

#endif //SAXIONCPP_PLAYER_HPP
