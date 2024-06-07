#pragma once
#include <raylib.h>

struct Player {
    Vector2 _position;
    Texture2D _sprite;

    void init();
    void update();
    void draw();
};