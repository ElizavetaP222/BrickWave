#ifndef PADDLE_HPP
#define PADDLE_HPP

#include "GameObject.hpp"

class Paddle : public GameObject {
private:
    float speed;
    int move_direction;
    float base_width;

public:
    Paddle();
    Paddle(float startX, float startY, float paddleSpeed);
    ~Paddle();

    void Draw() override;
    void Update(float deltaTime) override;
    void GetBoundingBox() override;

    void HandleInput();
    void ApplyBonus();
    void ResetSize();
};

#endif