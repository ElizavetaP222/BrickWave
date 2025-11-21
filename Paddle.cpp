#include "Paddle.hpp"
#include <iostream>

// Вынесение магических констант
const float Paddle::DEFAULT_WEIGHT = 100.0f;
const float Paddle::DEFAULT_HEIGHT = 20.0f;

Paddle::Paddle()
    : speed(0.0f), move_direction(0), base_width(0.0f) {
    std::cout << "Ракетка создана конструктором по умолчанию" << std::endl;
}

Paddle::Paddle(float start_x, float start_y, float paddle_speed)
    : speed(paddleSpeed), move_direction(0) {
    x = start_x;
    y = start_y;
    weight = default_weight;
    height = default_height;
    base_width = default_weight;
    std::cout << "Ракетка создана с параметрами: x=" << x << ", y=" << y << std::endl;
}

Paddle::~Paddle() {
    std::cout << "Ракетка уничтожена" << std::endl;
}

void Paddle::Draw() {
    std::cout << "Отрисовка ракетки в позиции (" << x << ", " << y << ")" << std::endl;
}

void Paddle::Update(float deltaTime) {
    std::cout << "Обновление состояния ракетки, время: " << deltaTime << std::endl;
}

void Paddle::GetBoundingBox() {
    std::cout << "Получение границ ракетки" << std::endl;
}

void Paddle::HandleInput() {
    std::cout << "Обработка ввода пользователя для ракетки" << std::endl;
}

void Paddle::ApplyBonus() {
    std::cout << "Применение бонуса к ракетке" << std::endl;
}

void Paddle::ResetSize() {
    weight = base_width;
    std::cout << "Сброс размера ракетки к исходному" << std::endl;
}