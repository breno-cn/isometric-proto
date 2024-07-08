#include "PlayerCamera.hpp"
#include "../math/math_utils.hpp"

void PlayerCamera::init() {
    _camera = { 0 };
    _camera.zoom = 3.7;
    _camera.offset = { .x = 512, .y = 256 };
}

void PlayerCamera::followPlayer(Player& player) {
    // _camera.target = player.get()->_position;
    _camera.target = math::cartesian_to_isometric(player._position);
}
