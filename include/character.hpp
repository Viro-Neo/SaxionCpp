#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <random>

class Character {
public:
    Character(std::string name, std::string spriteFile,
                int hp, int attack, int defense);
    ~Character() = default;

    [[nodiscard]] int attackCharacter(const Character& character) const;
    bool takeDamage(int damage);

    [[nodiscard]] int getAttack() const { return this->attack; }
    void setAttack(const int attack) { this->attack = attack; }

    [[nodiscard]] int getDefense() const { return this->defense; }
    void setDefense(const int defense) { this->defense = defense; }

    [[nodiscard]] int getHP() const { return this->hp; }
    void setHP(const int hp) { this->hp = (hp > 0) ? hp : 0; }

    [[nodiscard]] std::string getName() const { return this->name; }
    void setName(const std::string &name) { this->name = name; }

    [[nodiscard]] std::string getSpriteFile() const { return this->spriteFile; }

private:
    std::string name;
    std::string spriteFile;
    int hp;
    int attack;
    int defense;

};

#endif //CHARACTER_HPP
