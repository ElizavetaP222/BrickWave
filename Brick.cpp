#include "Brick.hpp"
#include <iostream>

Brick::Brick()
    : hit_points(1), max_hit_points(1), score_value(10), contains_bonus(false) {
    brick_type = "обычный";
    std::cout << "Кирпич создан конструктором по умолчанию" << std::endl;
}

Brick::Brick(float posX, float posY, int durability, const std::string& type)
    : hit_points(durability), max_hit_points(durability), brick_type(type) {
    x = posX;
    y = posY;
    weight = 50.0f;
    height = 20.0f;
    score_value = durability * 10;
    contains_bonus = (durability == 1);
    std::cout << "Кирпич создан с параметрами: тип=" << type << ", прочность=" << durability << std::endl;
}

Brick::~Brick() {
    std::cout << "Кирпич уничтожен" << std::endl;
}

void Brick::Draw() {
    std::cout << "Отрисовка кирпича в позиции (" << x << ", " << y << ")" << std::endl;
}

void Brick::Update(float deltaTime) {
    std::cout << "Обновление состояния кирпича, время: " << deltaTime << std::endl;
}

void Brick::GetBoundingBox() {
    std::cout << "Получение границ кирпича" << std::endl;
}

void Brick::OnHit() {
    hit_points--;
    std::cout << "Попадание по кирпичу. Осталось прочности: " << hit_points << std::endl;
    if (hit_points <= 0) {
        flag_active = false;
        std::cout << "Кирпич разрушен!" << std::endl;
    }
}

void Brick::GetColor() {
    std::cout << "Получение цвета кирпича типа: " << brick_type << std::endl;
}