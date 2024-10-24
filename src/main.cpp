#include "Player.hpp"
#include "Enemy.hpp"
#include <random>
#include <algorithm>

// Randomize total points for each enemy, the last enemy will have the highest total points
void randomizeTotalPoints(std::shared_ptr<Enemy[]> enemies, int nbrEnemies) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(40, 120);
    std::vector<int> PtsToDistribute;

    for (int i = 0; i < nbrEnemies; i++)
        PtsToDistribute.push_back(dis(gen));
    std::sort(PtsToDistribute.begin(), PtsToDistribute.end());
    for (int i = 0; i < nbrEnemies; i++) {
        enemies[i].setTotalPoints(PtsToDistribute[i]);
    }
}

int main()
{
    int nbrEnemies = 5;
    Player player(5);
    std::shared_ptr<Enemy[]> enemies = std::shared_ptr<Enemy[]>(new Enemy[nbrEnemies]);

    randomizeTotalPoints(enemies, nbrEnemies);

    player.displayStats();
    for (int i = 0; i < 5; i++)
        enemies[i].displayStats();
    return 0;
}
