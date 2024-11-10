#include "Player.hpp"

Player::Player(const int inventorySize) : inventorySize(inventorySize) {
    setName("Player");
    setHealth(100);
    setAttack(10);
    setDefense(5);
    setAgility(5);
    inventory = std::make_unique<std::string[]>(inventorySize);
}

void Player::addInventoryItem(const std::string& item) {
    for (int i = 0; i < inventorySize; i++) {
        if (inventory[i].empty()) {
            inventory[i] = item;
            std::cout << "Added " << item << " to inventory" << std::endl;
            return;
        }
    }
    std::cout << "Inventory is full" << std::endl;
}

void Player::printInventory() const {
    for (int i = 0; i < inventorySize; i++)
        std::cout << "Slot " << i << ": " << inventory[i] << std::endl;
}

void Player::removeInventoryItem(const int index) {
    if (index < 0 || index >= inventorySize) {
        std::cout << "Invalid index" << std::endl;
        return;
    }
    inventory[index].clear();
    std::cout << "Removed item from inventory" << std::endl;
}
