#include "Enemy.hpp"

Enemy::Enemy() : health(0), attack(0), defense(0), agility(0), totalPoints(0) {
    name = "Enemy";
}

void Enemy::displayStats() const {
    std::cout << "Enemy " << this->name << " stats:" << std::endl;
    std::cout << "Health: " << health << std::endl;
    std::cout << "Attack: " << attack << std::endl;
    std::cout << "Defense: " << defense << std::endl;
    std::cout << "Agility: " << agility << std::endl;
    std::cout << "Total points: " << totalPoints << std::endl;
    std::cout << std::endl;
}

void Enemy::assignStats() {
    if (totalPoints == 0) {
        std::cerr << "Total points not set" << std::endl;
        return;
    }
    const auto points = static_cast<float>(totalPoints);
    constexpr float ratioHp = 100.0f / 120.0f;
    constexpr float ratioAtk = 10.0f / 120.0f;
    constexpr float ratioDef = 5.0f / 120.0f;
    constexpr float ratioAgl = 5.0f / 120.0f;

    health = static_cast<int>(points * ratioHp);
    attack = static_cast<int>(points * ratioAtk);
    defense = static_cast<int>(points * ratioDef);
    agility = static_cast<int>(points * ratioAgl);
}