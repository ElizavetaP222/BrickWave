#include "GameState.hpp"
#include <iostream>

GameState::GameState()
    : level_number(1), bricks_remaining(0) {
    background = "default_background";
    std::cout << "Состояние игры создано конструктором по умолчанию" << std::endl;
}

GameState::GameState(int level)
    : level_number(level) {
    background = "background_level_" + std::to_string(level);
    std::cout << "Состояние игры создано для уровня: " << level << std::endl;
}

GameState::~GameState() {
    std::cout << "Состояние игры уничтожено" << std::endl;
}

void GameState::Load() {
    std::cout << "Загрузка уровня " << level_number << std::endl;
    bricks_remaining = level_number * 10;
    std::cout << "Кирпичей для разрушения: " << bricks_remaining << std::endl;
}

bool GameState::IsCompleted() {
    bool completed = (bricks_remaining == 0);
    std::cout << "Проверка завершения уровня: " << (completed ? "завершен" : "не завершен") << std::endl;
    return completed;
}

void GameState::CheckBrickCollision(Ball* ball) {
    std::cout << "Проверка столкновений мяча с кирпичами" << std::endl;
}