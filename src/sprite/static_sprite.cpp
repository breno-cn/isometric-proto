#include <raylib.h>

#include "./static_sprite.hpp"

void StaticSprite::draw(Vector2 position) {
    DrawTexture(_spritesheet, position.x, position.y, RAYWHITE);
}

