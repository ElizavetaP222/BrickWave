#include "Paddle.hpp"
#include <iostream>

Paddle::Paddle()
    : speed(0.0f), move_direction(0), base_width(0.0f) {
    std::cout << "Ракетка создана конструктором по умолчанию" << std::endl;
}

Paddle::Paddle(float startX, float startY, float paddleSpeed)
    : speed(paddleSpeed), move_direction(0) {
    x = startX;
    y = startY;
    weight = 100.0f;
    height = 20.0f;
    base_width = weight;
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