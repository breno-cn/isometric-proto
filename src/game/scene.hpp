#pragma once

#include <raylib.h>
#include <memory>

#include "../player/player.hpp"
#include "../player/PlayerCamera.hpp"

#define N_SPRITES 60

#define MAP_WIDTH 8
#define MAP_HEIGHT 8

class Scene {

private:
    Texture2D _sprites[N_SPRITES];
    int _map[MAP_HEIGHT][MAP_WIDTH] = {
        {1, 1, 1, 1, 1, 1, 1, 1},
        {1, 0, 1, 0, 0, 0, 0, 1},
        {1, 0, 1, 0, 0, 0, 0, 1},
        {1, 0, 1, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 1, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1},
    };
    std::unique_ptr<Player> _player;
    std::unique_ptr<PlayerCamera> _camera;

    void drawTile(int x, int y, int spriteIndex);

public:
    ~Scene();

    void init();

    void handleInput();
    void update();
    void draw();

};