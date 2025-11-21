#include "Ball.hpp"
#include <iostream>

// ¬ынесение магических констант
const float default_vector_x = 0.0f;
const float default_vector_y = 0.0f;
const float default_speed = 0.0f;
const bool default_stuck_flag = false;
const float ball_radius = 10.0f;
const float initial_vector_x = 1.0f;
const float initial_vector_y = -1.0f;

Ball::Ball()
    : vector_x(default_vector_x), vector_y(default_vector_y), base_speed(default_speed),
    flag_stuck_to_paddle(default_stuck_flag) {
    std::cout << "ћ€ч создан конструктором по умолчанию" << std::endl;
}

Ball::Ball(float start_x, float start_y, float speed)
    : base_speed(speed), flag_stuck_to_paddle(default_stuck_flag) {
    x = start_x;
    y = start_y;
    radius = ball_radius;
    vector_x = initial_vector_x;
    vector_y = initial_vector_y;
    std::cout << "ћ€ч создан с параметрами: x=" << x << ", y=" << y << std::endl;
}

Ball::~Ball() {
    std::cout << "ћ€ч уничтожен" << std::endl;
}

void Ball::Draw() {
    std::cout << "ќтрисовка м€ча в позиции (" << x << ", " << y << ")" << std::endl;
}

void Ball::Update(float deltaTime) {
    std::cout << "ќбновление состо€ни€ м€ча, врем€: " << deltaTime << std::endl;
}

void Ball::GetBoundingBox() {
    std::cout << "ѕолучение границ м€ча" << std::endl;
}

void Ball::Move() {
    std::cout << "ƒвижение м€ча" << std::endl;
}

void Ball::Bounce(const std::string& direction) {
    std::cout << "ќтскок м€ча в направлении: " << direction << std::endl;
}

void Ball::Activate() {
    flag_stuck_to_paddle = false;
    std::cout << "јктиваци€ м€ча (отлипание от ракетки)" << std::endl;
}

void Ball::ApplySpeedModifier(float modifier) {
    std::cout << "ѕрименение модификатора скорости: " << modifier << std::endl;
}