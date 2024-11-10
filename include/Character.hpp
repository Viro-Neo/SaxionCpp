#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>

class Character {
public:
    Character();
    ~Character() = default;

    void displayStats() const;

    void setName(const std::string& nm) { this->name = nm; }
    void setHealth(const int hp) { this->health = hp; }
    void setAttack(const int atk) { this->attack = atk; }
    void setDefense(const int def) { this->defense = def; }
    void setAgility(const int agl) { this->agility = agl; }

    [[nodiscard]] std::string getName() const { return name; }
    [[nodiscard]] int getHealth() const { return health; }
    [[nodiscard]] int getAttack() const { return attack; }
    [[nodiscard]] int getDefense() const { return defense; }
    [[nodiscard]] int getAgility() const { return agility; }

    void dealDamageToTarget(Character& target) const;

private:
    std::string name;
    int health;
    int attack;
    int defense;
    int agility;
};
#endif //CHARACTER_HPP
