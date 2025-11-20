#pragma once

#include "GameObject.hpp"
#include <string>

class Brick : public GameObject {
private:
    int hit_points;
    int max_hit_points;
    std::string brick_type;
    int score_value;
    bool contains_bonus;

public:
    Brick();
    Brick(float pos_x, float pos_y, int durability, const std::string& type);
    ~Brick();

    void Draw() override;
    void Update(float deltaTime) override;
    void GetBoundingBox() override;

    void OnHit();
    void GetColor();
};

#endif