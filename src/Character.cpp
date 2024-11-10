#include "Character.hpp"

Character::Character() : health(0), attack(0), defense(0), agility(0) {
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
    std::cout << target.name << " health: " << target.health << std::endl;
}

void Character::heal(Character& self) const {
    self.health += defense;
    std::cout << name << " heals for " << defense << " health" << std::endl;
}
