#include "Bonus.hpp"
#include <iostream>

// Вынесение магических констант
const float default_fall_speed = 2.0f; //скорость падения бонуса
const float bonus_weight = 20.0f; //ширина бонуса
const float bonus_height = 20.0f; //высота 
const std::string default_type = "увеличение"; //тип бонуса по умолчанию
const std::string default_texture = "bonus_texture"; //текстура бонуса по умолчанию

Bonus::Bonus()
    : fall_speed(default_fall_speed) {
    type = default_type;
    texture = default_texture;
    std::cout << "Бонус создан конструктором по умолчанию" << std::endl;
}

Bonus::Bonus(float posX, float posY, const std::string& bonusType)
    : type(bonusType), fall_speed(default_fall_speed) {
    x = posX;
    y = posY;
    weight = bonus_weight;
    height = bonus_height;
    texture = default_texture + "_" + bonusType;
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