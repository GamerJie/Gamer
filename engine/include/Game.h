//
// Created by Jie on 2018/7/23.
//

#ifndef GAME_H
#define GAME_H

#include "Engine.h"

namespace sf{
    class RenderWindow;
}

class EngineAPI Game{
public:
    Game(const char*);
    ~Game();
    void run();

private:
    sf::RenderWindow* mWindow;
};

#endif //GAME_H
