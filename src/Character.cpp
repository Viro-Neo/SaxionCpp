#include "Character.hpp"

Character::Character() : health(0), attack(0), defense(0), agility(0) {
    name = "Character";
}

void Character::displayStats() const {
    std::cout << "Character " << this->name << " stats:" << std::endl;
    std::cout << "Health: " << health << std::endl;
    std::cout << "Attack: " << attack << std::endl;
    std::cout << "Defense: " << defense << std::endl;
    std::cout << "Agility: " << agility << std::endl;
    std::cout << std::endl;
}

void Character::dealDamageToTarget(Character& target) const {
    int damage = this->attack - target.defense;
    if (damage < 0)
        damage = 0;
    std::cout << this->name << " deals " << damage << " damage to " << target.name << std::endl;
    target.health -= damage;
    std::cout << target.name << " health: " << target.health << std::endl;
}
