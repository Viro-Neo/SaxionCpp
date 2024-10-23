#include "Character.hpp"

Character::Character(int inventorySize) : inventorySize(inventorySize) {
    health = 100;
    attack = 10;
    defense = 5;
    agility = 5;
    inventory = std::make_unique<std::string[]>(inventorySize);
}

void Character::addInventoryItem(const std::string& item) {
    for (int i = 0; i < inventorySize; i++) {
        if (inventory[i].empty()) {
            inventory[i] = item;
            std::cout << "Added " << item << " to inventory" << std::endl;
            return;
        }
    }
    std::cout << "Inventory is full" << std::endl;
}

void Character::printInventory() const {
    for (int i = 0; i < inventorySize; i++) {
        std::cout << "Slot " << i << ": " << inventory[i] << std::endl;
    }
}

void Character::removeInventoryItem(int index) {
    if (index < 0 || index >= inventorySize) {
        std::cout << "Invalid index" << std::endl;
        return;
    }
    inventory[index].clear();
    std::cout << "Removed item from inventory" << std::endl;
}
