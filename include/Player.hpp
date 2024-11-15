#ifndef SAXIONCPP_PLAYER_HPP
#define SAXIONCPP_PLAYER_HPP

#include "Character.hpp"
#include <memory>
#include <iostream>

class Player : public Character {
public:
    explicit Player(int inventorySize);
    ~Player() = default;

    void addInventoryItem(const std::string& item);
    void printInventory() const;
    void removeInventoryItem(int index);

    void lootItem();

private:
    int inventorySize;
    std::unique_ptr<std::string[]> inventory;
};

#endif //SAXIONCPP_PLAYER_HPP
