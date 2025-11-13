#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP

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
    void SetX(float newX) { x = newX; }
    void SetY(float newY) { y = newY; }
    bool IsActive() const { return flag_active; }
    void SetActive(bool active) { flag_active = active; }
};

#endif