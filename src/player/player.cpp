#include <raylib.h>
#include <raymath.h>

#include "./player.hpp"

#define TILE_WIDTH 100
#define TILE_HEIGHT 50

void Player::init() {
    _position = Vector2 { 45, 45 };
    _sprite = LoadTexture("/home/nirra/Documents/isometric-proto/sprites/char.png");
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

void Player::draw() {
    Rectangle source = {
        .x = 0,
        .y = 25,
        .width = 16,
        .height = 25,
    };

    Rectangle dest = {
        .x = _position.x,
        .y = _position.y,
        .width = TILE_WIDTH * 0.35,
        .height = TILE_HEIGHT * 0.7,
    };

    DrawTexturePro(_sprite, source, dest, Vector2Zero(), 0, RAYWHITE);
}
