#include <raylib.h>
#include <iostream>
#include <cmath>

#include "game.hpp"

void Game::loadScene() {
    _scene = std::make_unique<Scene>();

    _scene.get()->init();
}

void Game::run() {
    _scene.get()->handleInput();
    _scene.get()->update();
    _scene.get()->draw();
}
