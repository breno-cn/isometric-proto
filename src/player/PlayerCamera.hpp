#pragma once

#include <raylib.h>
#include <memory>

#include "./player.hpp"

struct PlayerCamera {
    Camera2D _camera;

    void init();
    void followPlayer(std::shared_ptr<Player> player);
};