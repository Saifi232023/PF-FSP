#pragma once
#include "colors.h"
#include "game.h"
#include <string>

class Tetris {
  public:
    explicit Tetris(const char* executablePath);
    ~Tetris();
    void run();

  private:
    bool EventTriggered(float interval);

  private:
    std::string build_path;
    Font font;
    Game game;
    float lastUpdateTime = 0;
};
