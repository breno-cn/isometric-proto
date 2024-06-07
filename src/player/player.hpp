#pragma once
#include <raylib.h>

struct Player {
    Vector2 _position;

    void init();
    void update();
};