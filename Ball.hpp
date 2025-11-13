#ifndef BALL_HPP
#define BALL_HPP

#include "GameObject.hpp"

class Ball : public GameObject {
private:
    float vector_x;
    float vector_y;
    float base_speed;
    bool flag_stuck_to_paddle;

public:
    Ball();
    Ball(float startX, float startY, float speed);
    ~Ball();

    void Draw() override;
    void Update(float deltaTime) override;
    void GetBoundingBox() override;

    void Move();
    void Bounce(const std::string& direction);
    void Activate();
    void ApplySpeedModifier(float modifier);
};

#endif