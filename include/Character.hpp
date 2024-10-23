#ifndef SAXIONCPP_CHARACTER_HPP
#define SAXIONCPP_CHARACTER_HPP

#include <iostream>
#include <memory>

class Character {
public:
    Character() = default;
    explicit Character(int inventorySize);
    ~Character() = default;

    void addInventoryItem(const std::string& item);
    void printInventory() const;
    void removeInventoryItem(int index);
private:
    int health;
    int attack;
    int defense;
    int agility;
    int inventorySize;
    std::unique_ptr<std::string[]> inventory;
};

#endif //SAXIONCPP_CHARACTER_HPP
