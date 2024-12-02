#include "character.hpp"
#include <utility>

Character::Character(std::string name, std::string spriteFile, const int hp, const int attack, const int defense) :
    name(std::move(name)), spriteFile(std::move(spriteFile)), hp(hp), attack(attack), defense(defense)
{ }

int Character::attackCharacter(const Character& character) const {
    //Just a random function
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 3);

    //attack + 0~3
    const int attackPower = attack + dis(gen) % 4;
    // defense + -1~1
    const int defensePower = character.getDefense() + (-1 + dis(gen) % 3);

    return std::max(attackPower - defensePower, 0);
}

bool Character::takeDamage(const int damage) {
    hp = std::max(hp - damage, 0);
    return hp == 0;
}
