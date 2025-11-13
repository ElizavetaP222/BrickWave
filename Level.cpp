#include "Level.hpp"
#include <iostream>

Level::Level() {
    std::cout << "Уровень создан" << std::endl;
}

Level::~Level() {
    std::cout << "Уровень уничтожен" << std::endl;
}

void Level::CheckBallVsPaddle(Ball* ball, Paddle* paddle) {
    std::cout << "Проверка столкновения мяча с ракеткой" << std::endl;
}

void Level::CheckBallVsWalls(Ball* ball) {
    std::cout << "Проверка столкновения мяча со стенами" << std::endl;
}

void Level::CheckBonusVsPaddle(Bonus* bonus, Paddle* paddle) {
    std::cout << "Проверка столкновения бонуса с ракеткой" << std::endl;
}

void Level::AddGameObject(GameObject* obj) {
    game_objects.push_back(obj);
    std::cout << "Игровой объект добавлен на уровень" << std::endl;
}