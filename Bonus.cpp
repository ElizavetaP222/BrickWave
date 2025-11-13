#include "Bonus.hpp"
#include <iostream>

Bonus::Bonus()
    : fall_speed(2.0f) {
    type = "увеличение";
    texture = "bonus_texture";
    std::cout << "Бонус создан конструктором по умолчанию" << std::endl;
}

Bonus::Bonus(float posX, float posY, const std::string& bonusType)
    : type(bonusType), fall_speed(2.0f) {
    x = posX;
    y = posY;
    weight = 20.0f;
    height = 20.0f;
    texture = "bonus_texture_" + bonusType;
    std::cout << "Бонус создан с параметрами: тип=" << bonusType << std::endl;
}

Bonus::~Bonus() {
    std::cout << "Бонус уничтожен" << std::endl;
}

void Bonus::Draw() {
    std::cout << "Отрисовка бонуса в позиции (" << x << ", " << y << ")" << std::endl;
}

void Bonus::Update(float deltaTime) {
    y += fall_speed * deltaTime;
    std::cout << "Обновление положения бонуса, y=" << y << std::endl;
}

void Bonus::GetBoundingBox() {
    std::cout << "Получение границ бонуса" << std::endl;
}

void Bonus::ApplyEffect(Paddle* paddle, Ball* ball, GameState* game_state) {
    std::cout << "Применение эффекта бонуса типа: " << type << std::endl;
}