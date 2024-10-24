#ifndef SAXIONCPP_PLAYER_HPP
#define SAXIONCPP_PLAYER_HPP

#include <iostream>
#include <memory>

#include "Enemy.hpp"

class Player {
public:
    explicit Player(int inventorySize);
    ~Player() = default;

    void addInventoryItem(const std::string& item);
    void printInventory() const;
    void removeInventoryItem(int index);
    void displayStats() const;

    void setHealth(int hp) { this->health = hp; }
    void setAttack(int atk) { this->attack = atk; }
    void setDefense(int def) { this->defense = def; }
    void setAgility(int agl) { this->agility = agl; }

    [[nodiscard]] int getHealth() const { return health; }
    [[nodiscard]] int getAttack() const { return attack; }
    [[nodiscard]] int getDefense() const { return defense; }
    [[nodiscard]] int getAgility() const { return agility; }

    void dealDamageToEnemy(Enemy& enemy) const;
    void heal();
    static void doNothing();

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
