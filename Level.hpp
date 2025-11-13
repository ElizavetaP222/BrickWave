#ifndef LEVEL_HPP
#define LEVEL_HPP

#include <vector>
#include "GameObject.hpp"

class Ball;
class Paddle;
class Bonus;

class Level {
private:
    std::vector<GameObject*> game_objects;

public:
    Level();
    ~Level();

    void CheckBallVsPaddle(Ball* ball, Paddle* paddle);
    void CheckBallVsWalls(Ball* ball);
    void CheckBonusVsPaddle(Bonus* bonus, Paddle* paddle);

    void AddGameObject(GameObject* obj);
};

#endif