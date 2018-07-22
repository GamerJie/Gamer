//
// Created by Jie on 2018/7/23.
//

#include "Game.h"

#include <SFMl/Graphics.hpp>

Game::Game(const char* title) {
    mWindow = new sf::RenderWindow(sf::VideoMode(800, 600), title);
}

Game::~Game() {
    delete mWindow;
}

void Game::run() {
    while (mWindow->isOpen()){
        sf::Event _event;
        if(mWindow->pollEvent(_event)){
            if(_event.type == sf::Event::Closed)
                mWindow->close();
        }

        mWindow->clear();
        mWindow->display();
    }
}