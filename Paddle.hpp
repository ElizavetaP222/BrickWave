#pragma once

class Paddle {
private:
    static const float default_weight;
    static const float default_height;

public:
    Paddle();
    Paddle(float start_x, float start_y, float paddle_speed);
    ~Paddle();

    void Draw();
    void Update(float delta_time);
    void GetBoundingBox();
    void HandleInput();
    void ApplyBonus();
    void ResetSize();

private:
    float x, y;
    float weight;
    float height;
    float speed;
    int move_direction;
    float base_width;
};