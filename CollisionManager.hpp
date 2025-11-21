#pragma once

class CollisionManager {
private:
    int score;
    int lives;
    int current_level;
    bool flag_game_over;
    int high_score;

public:
    CollisionManager();
    ~CollisionManager();

    void AddPoints(int points);
    void LoseLife();
    void GainLife();
    void Reset();
    void LoadLevel(int level);

    int GetScore() const { return score; }
    int GetLives() const { return lives; }
    bool IsGameOver() const { return flag_game_over; }
};

#endif