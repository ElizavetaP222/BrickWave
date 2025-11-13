#include "GameObject.hpp"
#include <iostream>

GameObject::GameObject()
    : x(0.0f), y(0.0f), weight(0.0f), height(0.0f),
    radius(0.0f), flag_active(true) {
    std::cout << "Базовый игровой объект создан" << std::endl;
}