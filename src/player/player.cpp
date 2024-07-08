#include <raylib.h>
#include <raymath.h>

#include "player.hpp"
#include "math_utils.hpp"

#define TILE_WIDTH 32
#define TILE_HEIGHT 32

void Player::init() {
    _position = Vector2Zero();
    _sprite = LoadTexture("./sprites/char.png");
}

void Player::update() {
    float acceleration = 0.1;

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

void Player::draw() {
    Rectangle source = {
        .x = 0,
        .y = 25,
        .width = 16,
        .height = 25,
    };

    Vector2 isometric = math::cartesian_to_isometric(_position);

    Rectangle dest = {
        .x = isometric.x,
        .y = isometric.y,
        .width = TILE_WIDTH * 0.35,
        .height = TILE_HEIGHT * 0.7,
    };

    DrawTexturePro(_sprite, source, dest, Vector2Zero(), 0, RAYWHITE);
}
