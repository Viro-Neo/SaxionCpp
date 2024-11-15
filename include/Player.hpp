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

    [[nodiscard]] int getBodyCount() const { return bodyCount; }

    void setBodyCount(const int bc) { bodyCount = bc; }

    void lootItem();

private:
    int bodyCount;
    int inventorySize;
    std::unique_ptr<std::string[]> inventory;
};

#endif //SAXIONCPP_PLAYER_HPP
