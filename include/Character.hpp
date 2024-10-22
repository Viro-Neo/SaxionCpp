#ifndef SAXIONCPP_CHARACTER_HPP
#define SAXIONCPP_CHARACTER_HPP

#include <iostream>
#include <memory>

class Character {
public:
     explicit Character(int inventorySize);
    ~Character() = default;
private:
    int health;
    int attack;
    int defense;
    int agility;
    int inventorySize;
    std::unique_ptr<int[]> inventory;
};

#endif //SAXIONCPP_CHARACTER_HPP
