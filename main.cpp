#include <iostream>
#include <vector>
#include "Paddle.hpp"
#include "Ball.hpp"
#include "Brick.hpp"
#include "Bonus.hpp"
#include "GameState.hpp"
#include "Level.hpp"
#include "CollisionManager.hpp"

void DemonstrateWork() {
    std::cout << "=== ДЕМОНСТРАЦИЯ РАБОТЫ КЛАССОВ BRICKWAVE ===" << std::endl;

    // Статическая инициализация объектов
    std::cout << "\n--- Статическая инициализация ---" << std::endl;
    Paddle staticPaddle(400.0f, 550.0f, 5.0f);
    Ball staticBall(400.0f, 500.0f, 3.0f);
    Brick staticBrick(100.0f, 100.0f, 2, "прочный");

    // Работа с методами статических объектов
    staticPaddle.Draw();
    staticBall.Move();
    staticBrick.OnHit();

    // Динамическая инициализация объектов
    std::cout << "\n--- Динамическая инициализация ---" << std::endl;
    Paddle* dynamicPaddle = new Paddle(300.0f, 550.0f, 6.0f);
    Ball* dynamicBall = new Ball(300.0f, 400.0f, 4.0f);
    Bonus* dynamicBonus = new Bonus(200.0f, 200.0f, "увеличение");

    // Работа с указателями
    dynamicPaddle->HandleInput();
    dynamicBall->Bounce("vertical");
    dynamicBonus->ApplyEffect(dynamicPaddle, dynamicBall, nullptr);

    // Освобождение памяти
    delete dynamicPaddle;
    delete dynamicBall;
    delete dynamicBonus;

    // Работа со ссылками
    std::cout << "\n--- Работа со ссылками ---" << std::endl;
    Brick brickRef(150.0f, 150.0f, 1, "обычный");
    Brick& brickReference = brickRef;
    brickReference.OnHit();

    // Динамический массив объектов класса
    std::cout << "\n--- Динамический массив объектов ---" << std::endl;
    const int brickCount = 3;
    Brick* brickArray = new Brick[brickCount];

    for (int i = 0; i < brickCount; i++) {
        brickArray[i].Draw();
    }

    delete[] brickArray;

    // Массив динамических объектов класса
    std::cout << "\n--- Массив динамических объектов ---" << std::endl;
    const int bonusCount = 2;
    Bonus** bonusArray = new Bonus * [bonusCount];

    bonusArray[0] = new Bonus(50.0f, 300.0f, "замедление");
    bonusArray[1] = new Bonus(250.0f, 350.0f, "ускорение");

    for (int i = 0; i < bonusCount; i++) {
        bonusArray[i]->Update(0.1f);
        delete bonusArray[i];
    }
    delete[] bonusArray;

    // Демонстрация работы с менеджером и состоянием игры
    std::cout << "\n--- Работа с игровыми системами ---" << std::endl;
    CollisionManager manager;
    GameState gameState(2);
    Level level;

    manager.AddPoints(100);
    gameState.Load();
    level.CheckBallVsWalls(&staticBall);

    std::cout << "\n=== ДЕМОНСТРАЦИЯ ЗАВЕРШЕНА ===" << std::endl;
}

int main() {
    DemonstrateWork();
    return 0;
}