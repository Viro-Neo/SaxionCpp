#include "Player.hpp"

Player::Player(int inventorySize) : health(100), attack(10), defense(5), agility(5), inventorySize(inventorySize) {
    name = "Player";
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

void Player::removeInventoryItem(int index) {
    if (index < 0 || index >= inventorySize) {
        std::cout << "Invalid index" << std::endl;
        return;
    }
    inventory[index].clear();
    std::cout << "Removed item from inventory" << std::endl;
}

void Player::displayStats() const {
    std::cout << "Player " << this->name << " stats:" << std::endl;
    std::cout << "Health: " << health << std::endl;
    std::cout << "Attack: " << attack << std::endl;
    std::cout << "Defense: " << defense << std::endl;
    std::cout << "Agility: " << agility << std::endl;
    std::cout << std::endl;
}

void Player::dealDamageToEnemy(Enemy& enemy) const {
    int damage = attack - enemy.getDefense();
    if (damage < 0)
        damage = 0;
    std::cout << "Player deals " << damage << " damage to Enemy" << std::endl;
    enemy.setHealth(enemy.getHealth() - damage);
    std::cout << "Enemy health: " << enemy.getHealth() << std::endl;
}

void Player::heal() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, defense);

    int healAmount = dis(gen);
    health += healAmount;
    std::cout << "Player healed for " << healAmount << " health" << std::endl;
}

void Player::doNothing() {
    std::cout << "Player does nothing" << std::endl;
}
