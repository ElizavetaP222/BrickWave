#pragma once

class GameObject {
protected:
    float x;
    float y;
    float weight;
    float height;
    float radius;
    bool flag_active;

public:
    GameObject();
    virtual ~GameObject() = default;

    virtual void Draw() = 0;
    virtual void Update(float deltaTime) = 0;
    virtual void GetBoundingBox() = 0;

    // Геттеры и сеттеры
    float GetX() const { return x; }
    float GetY() const { return y; }
    void SetX(float new_x) { x = new_x; }
    void SetY(float new_y) { y = new_y; }
    bool IsActive() const { return flag_active; }
    void SetActive(bool active) { flag_active = active; }
};

#endif