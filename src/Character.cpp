#include "Character.hpp"

Character::Character(int inventorySize) : inventorySize(inventorySize) {
    health = 100;
    attack = 10;
    defense = 5;
    agility = 5;
    inventory = std::make_unique<int[]>(inventorySize);
}
