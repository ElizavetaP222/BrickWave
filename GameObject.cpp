#include "GameObject.hpp"
#include <iostream>

const float default_size = 0.0f;
const bool default_active_flag = true;

GameObject::GameObject()
    : x(default_size), y(default_size),
    weight(default_size), height(default_size),
    radius(default_size), flag_active(default_active_flag) {
    std::cout << "Базовый игровой объект создан" << std::endl;
}