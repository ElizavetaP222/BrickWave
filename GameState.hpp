#pragma once

#include <vector>
#include "Brick.hpp"

class Ball;

class GameState {
private:
    int level_number;
    int bricks_remaining;
    std::vector<Brick> bricks;
    std::string background;

public:
    GameState();
    GameState(int level);
    ~GameState();

    void Load();
    bool IsCompleted();
    void CheckBrickCollision(Ball* ball);

    int GetLevelNumber() const { return level_number; }
    int GetBricksRemaining() const { return bricks_remaining; }
};

#endif