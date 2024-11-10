#include "Enemy.hpp"
#include <iostream>

Enemy::Enemy() : totalPoints(0) {
    setName("Enemy");
    setHealth(0);
    setAttack(0);
    setDefense(0);
    setAgility(0);
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

    setHealth(static_cast<int>(points * ratioHp));
    setAttack(static_cast<int>(points * ratioAtk));
    setDefense(static_cast<int>(points * ratioDef));
    setAgility(static_cast<int>(points * ratioAgl));
}
