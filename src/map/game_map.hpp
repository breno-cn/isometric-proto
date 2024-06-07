#pragma once

#include <raylib.h>
#include <memory>
#include <vector>

#define MAP_WIDTH 8
#define MAP_HEIGHT 8

#define WALL 1
#define FLOOR 0

#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 512

// #define TILE_SIZE 64
#define TILE_WIDTH 100
#define TILE_HEIGHT 50

// #define X_START (SCREEN_WIDTH/2 - TILE_WIDTH/2)
// #define Y_START (50)

#define X_START 0
#define Y_START 0

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

    Texture2D _grass;
    Texture2D _sand;
    Texture2D _character;

    void draw();
    void init();

    void drawTile(Texture2D texture, float x, float y);
};