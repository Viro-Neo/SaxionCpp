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

void Enemy::setHealth(int hp) {
    this->health = hp;
}

void Enemy::setAttack(int atk) {
    this->attack = atk;
}

void Enemy::setDefense(int def) {
    this->defense = def;
}

void Enemy::setAgility(int agl) {
    this->agility = agl;
}

void Enemy::setTotalPoints(int ttPts) {
    this->totalPoints = ttPts;
}
