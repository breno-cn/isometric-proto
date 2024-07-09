#pragma once

#include <raylib.h>
#include <memory>
#include <vector>

#include "player.hpp"
#include "PlayerCamera.hpp"

#include "sprite.hpp"
#include "static_sprite.hpp"

#define N_SPRITES 60

#define MAP_WIDTH 8
#define MAP_HEIGHT 8

class Scene {

private:
    // Sprite* _spriteTable[N_SPRITES];
    // std::unique_ptr<Sprite> _spriteTable[N_SPRITES];
    std::vector<std::unique_ptr<Sprite>> _spriteTable;

    int _map[MAP_HEIGHT][MAP_WIDTH] = {
        {22, 22, 22, 22, 22, 22, 22, 22},
        {22, 21, 22, 12, 12, 11, 23, 22},
        {22, 21, 22, 0, 26, 26, 23, 22},
        {22, 32, 22, 0, 0, 34, 34, 22},
        {22, 15, 20, 44, 0, 15, 22, 22},
        {22, 43, 15, 44, 15, 22, 11, 22},
        {22, 27, 11, 45, 45, 30, 30, 22},
        {22, 22, 22, 22, 22, 22, 22, 22},
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