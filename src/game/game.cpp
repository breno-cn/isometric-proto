#include <raylib.h>
#include <iostream>
#include <cmath>

#include "game.hpp"

Game::Game(std::shared_ptr<GameMap> map, std::shared_ptr<PlayerCamera> camera, std::shared_ptr<Player> player) {
    _map = map;
    _camera = camera;
    _player = player;
}

void Game::init() {
    _map.get()->init();
    _camera.get()->init();
    _player.get()->init();
}

void Game::handleInput() {
    PollInputEvents();
}

void Game::update() {
    _player.get()->update();
}

void Game::draw() {
    BeginMode2D(_camera.get()->_camera);
        _map.get()->draw();
        _player.get()->draw();
        _camera.get()->followPlayer(_player);
    EndMode2D();
}
