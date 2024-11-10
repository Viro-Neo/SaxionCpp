#include "Player.hpp"
#include "Enemy.hpp"
#include <algorithm>
#include <random>

// Randomize total points for each enemy, the last enemy will have the highest total points
void randomizeTotalPoints(const std::shared_ptr<Enemy[]>& enemies, const int nbrEnemies) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(40, 120);
    std::vector<int> PtsToDistribute;

    PtsToDistribute.reserve(nbrEnemies);
for (int i = 0; i < nbrEnemies; i++)
        PtsToDistribute.push_back(dis(gen));
    std::sort(PtsToDistribute.begin(), PtsToDistribute.end());
    for (int i = 0; i < nbrEnemies; i++) {
        enemies[i].setTotalPoints(PtsToDistribute[i]);
    }
}

void battle(Player& player, Enemy& enemy) {
    while (player.getHealth() > 0) {
        int playerDamage = player.getAttack() - enemy.getDefense();
        int enemyDamage = enemy.getAttack() - player.getDefense();

        if (playerDamage < 0)
            playerDamage = 0;
        if (enemyDamage < 0)
            enemyDamage = 0;

        std::cout << "Player deals " << playerDamage << " damage to Enemy" << std::endl;
        enemy.setHealth(enemy.getHealth() - playerDamage);
        std::cout << "Enemy health: " << enemy.getHealth() << std::endl;

        if (enemy.getHealth() <= 0)
            break;

        std::cout << "Enemy deals " << enemyDamage << " damage to Player" << std::endl;
        player.setHealth(player.getHealth() - enemyDamage);
        std::cout << "Player health: " << player.getHealth() << std::endl;
    }

    if (player.getHealth() <= 0 && enemy.getHealth() <= 0)
        std::cout << "Draw" << std::endl;
    else if (player.getHealth() <= 0)
        std::cout << "Enemy wins" << std::endl;
    else
        std::cout << "Player wins" << std::endl;
}

int main()
{
    constexpr int nbrEnemies = 5;
    Player player(5);
    auto enemies = std::shared_ptr<Enemy[]>(new Enemy[nbrEnemies]);

    randomizeTotalPoints(enemies, nbrEnemies);
    for (int i = 0; i < nbrEnemies; i++)
        enemies[i].assignStats();

    player.displayStats();
    for (int i = 0; i < nbrEnemies; i++)
        enemies[i].displayStats();

    std::cout << "Battle simulation" << std::endl;
    for (int i = 0; i < nbrEnemies; i++) {
        std::cout << "Player vs Enemy " << i << std::endl;
        battle(player, enemies[i]);
        std::cout << std::endl;
    }
    return 0;
}
