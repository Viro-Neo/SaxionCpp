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
    auto points = static_cast<float>(totalPoints);
    float ratioHp = 100.0f / 120.0f;
    float ratioAtk = 10.0f / 120.0f;
    float ratioDef = 5.0f / 120.0f;
    float ratioAgl = 5.0f / 120.0f;

    health = static_cast<int>(points * ratioHp);
    attack = static_cast<int>(points * ratioAtk);
    defense = static_cast<int>(points * ratioDef);
    agility = static_cast<int>(points * ratioAgl);
}

void Enemy::dealDamageToPlayer(Player& player) const {
    int damage = attack - player.getDefense();
    if (damage < 0)
        damage = 0;
    std::cout << "Enemy deals " << damage << " damage to Player" << std::endl;
    player.setHealth(player.getHealth() - damage);
    std::cout << "Player health: " << player.getHealth() << std::endl;
}

void Enemy::heal() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, defense);

    int healAmount = dis(gen);
    health += healAmount;
    std::cout << "Enemy healed for " << healAmount << " health" << std::endl;
}

void Enemy::doNothing() {
    std::cout << "Enemy does nothing" << std::endl;
}
