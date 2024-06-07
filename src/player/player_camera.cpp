#include "PlayerCamera.hpp"

void PlayerCamera::init() {
    _camera = { 0 };
    _camera.zoom = 1.7;
    _camera.offset = { .x = 512, .y = 256 };
}

void PlayerCamera::followPlayer(std::shared_ptr<Player> player) {
    _camera.target = player.get()->_position;
}
