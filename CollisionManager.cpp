#include "CollisionManager.hpp"
#include <iostream>

// Вынесение магических констант
const int initial_lives = 3; //начальное кол-во жизней
const int initial_score = 0; //начальный счет
const int initial_level = 1; //начальный уровень
const int initial_high_score = 0; //начальный рекорд
const bool initial_game_over_flag = false; //начальное состояние игры
const int zero_lives_threshold = 0; //предел окончания игры 

CollisionManager::CollisionManager()
    : score(initial_score), lives(initial_lives), current_level(initial_level),
    flag_game_over(initial_game_over_flag), high_score(initial_high_score) {
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
    if (lives <= zero_lives_threshold) {
        flag_game_over = true;
        std::cout << "Игра окончена!" << std::endl;
    }
}

void CollisionManager::GainLife() {
    lives++;
    std::cout << "Получена дополнительная жизнь. Всего жизней: " << lives << std::endl;
}

void CollisionManager::Reset() {
    score = initial_score;
    lives = initial_lives;
    current_level = initial_level;
    flag_game_over = initial_game_over_flag;
    std::cout << "Состояние игры сброшено" << std::endl;
}

void CollisionManager::LoadLevel(int level) {
    current_level = level;
    std::cout << "Загрузка уровня: " << level << std::endl;
}