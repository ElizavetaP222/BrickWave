#include "CollisionManager.hpp"
#include <iostream>

CollisionManager::CollisionManager()
    : score(0), lives(3), current_level(1), flag_game_over(false), high_score(0) {
    std::cout << "Менеджер столкновений создан" << std::endl;
}

CollisionManager::~CollisionManager() {
    std::cout << "Менеджер столкновений уничтожен" << std::endl;
}

void CollisionManager::AddPoints(int points) {
    score += points;
    std::cout << "Добавлено очков: " << points << ", текущий счет: " << score << std::endl;
    if (score > high_score) {
        high_score = score;
        std::cout << "Новый рекорд: " << high_score << std::endl;
    }
}

void CollisionManager::LoseLife() {
    lives--;
    std::cout << "Потеряна жизнь. Осталось жизней: " << lives << std::endl;
    if (lives <= 0) {
        flag_game_over = true;
        std::cout << "Игра окончена!" << std::endl;
    }
}

void CollisionManager::GainLife() {
    lives++;
    std::cout << "Получена дополнительная жизнь. Всего жизней: " << lives << std::endl;
}

void CollisionManager::Reset() {
    score = 0;
    lives = 3;
    current_level = 1;
    flag_game_over = false;
    std::cout << "Состояние игры сброшено" << std::endl;
}

void CollisionManager::LoadLevel(int level) {
    current_level = level;
    std::cout << "Загрузка уровня: " << level << std::endl;
}