#include "Character.hpp"
#include <random>

Character::Character() : health(0), maxHealth(100), attack(0), defense(0), agility(0) {
    name = "Character";
}

void Character::displayStats() const {
    std::cout << "Character " << name << " stats:" << std::endl;
    std::cout << "Health: " << health << std::endl;
    std::cout << "Attack: " << attack << std::endl;
    std::cout << "Defense: " << defense << std::endl;
    std::cout << "Agility: " << agility << std::endl;
    std::cout << std::endl;
}

void Character::dealDamageToTarget(Character& target) const {
    const int damage = attack - target.defense;
    if (damage <= 0) {
        std::cout << name << " deals no damage to " << target.name << std::endl;
        return;
    }
    target.health -= damage;
    std::cout << name << " deals " << damage << " damage to " << target.name << std::endl;
    std::cout << target.name << " health: " << (target.health < 0 ? 0 : target.health) << std::endl;
}

void Character::heal(Character& self) const {
    self.health += defense;
    if (self.health > maxHealth) {
        self.health = maxHealth;
        return;
    }
    std::cout << name << " heals for " << defense << " health" << std::endl;
}

void Character::characterTurn(Character& self, Character& target) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 2);

    std::cout << "_____________________" << std::endl;
    std::cout << self.name << " turn" << std::endl;
    std::cout << self.name << " health: " << self.health << std::endl;
    if (const int action = dis(gen); action == 0) {
        std::cout << self.name << " attacks" << std::endl;
        self.dealDamageToTarget(target);
    } else if (action == 1) {
        std::cout << self.name << " heals himself" << std::endl;
        self.heal(self);
    } else {
        std::cout << self.name << " does nothing" << std::endl;
    }
}
