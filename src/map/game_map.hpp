#pragma once

#include <raylib.h>
#include <memory>
#include <vector>

#define MAP_WIDTH 8
#define MAP_HEIGHT 8

#define WALL 1
#define FLOOR 0

// #define TILE_SIZE 64
#define TILE_WIDTH 48
#define TILE_HEIGHT 48

struct GameMap {
    int _tiles[MAP_HEIGHT][MAP_WIDTH] = {
        {1, 1, 1, 1, 1, 1, 1, 1},
        {1, 0, 1, 0, 0, 0, 0, 1},
        {1, 0, 1, 0, 0, 0, 0, 1},
        {1, 0, 1, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 1, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1},
    };

    void draw();

};