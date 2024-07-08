#include <raylib.h>

#include "sprite.hpp"

Sprite::Sprite(const char *filepath) {
    _spritesheet = LoadTexture(filepath);
}

Sprite::~Sprite() {
    UnloadTexture(_spritesheet);
}
