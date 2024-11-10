#ifndef SAXIONCPP_ENEMY_HPP
#define SAXIONCPP_ENEMY_HPP

#include "Character.hpp"

class Enemy : public Character {
public:
    Enemy();
    ~Enemy() = default;

    void assignStats();

    void setTotalPoints(const int ttPts) { this->totalPoints = ttPts; }

    [[nodiscard]] int getTotalPoints() const { return totalPoints; }

private:
    int totalPoints;
};

#endif //SAXIONCPP_ENEMY_HPP
