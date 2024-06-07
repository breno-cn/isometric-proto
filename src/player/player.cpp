#include <raylib.h>
#include <raymath.h>

#include "./player.hpp"

void Player::init() {
    _position = Vector2 { 0, 0 };
}

void Player::update() {
    float acceleration = 5;

    if (IsKeyDown(KEY_A)) {
        _position.x -= acceleration;
    }

    if (IsKeyDown(KEY_D)) {
        _position.x += acceleration;
    }

    if (IsKeyDown(KEY_W)) {
        _position.y -= acceleration;
    }

    if (IsKeyDown(KEY_S)) {
        _position.y += acceleration;
    }
}
