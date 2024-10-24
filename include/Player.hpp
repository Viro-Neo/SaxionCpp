#ifndef SAXIONCPP_PLAYER_HPP
#define SAXIONCPP_PLAYER_HPP

#include <iostream>
#include <memory>

class Player {
public:
    explicit Player(int inventorySize);
    ~Player() = default;

    void addInventoryItem(const std::string& item);
    void printInventory() const;
    void removeInventoryItem(int index);
    void displayStats() const;
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
