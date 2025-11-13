#include "Ball.hpp"
#include <iostream>

Ball::Ball()
    : vector_x(0.0f), vector_y(0.0f), base_speed(0.0f),
    flag_stuck_to_paddle(false) {
    std::cout << "ћ€ч создан конструктором по умолчанию" << std::endl;
}

Ball::Ball(float startX, float startY, float speed)
    : base_speed(speed), flag_stuck_to_paddle(false) {
    x = startX;
    y = startY;
    radius = 10.0f;
    vector_x = 1.0f;
    vector_y = -1.0f;
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