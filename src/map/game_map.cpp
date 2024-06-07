#include <raylib.h>
#include <raymath.h>

#include "./game_map.hpp"
#include "game_map.hpp"

void GameMap::init() {
    _grass = LoadTexture("/home/nirra/Documents/isometric-proto/tiles/grass.png");
    _sand = LoadTexture("/home/nirra/Documents/isometric-proto/tiles/sand.png");
    _character = LoadTexture("/home/nirra/Documents/isometric-proto/sprites/char.png");
}

void GameMap::drawTile(Texture2D texture, float x, float y) {
    float _x = X_START + (x - y) * TILE_WIDTH/2;
    float _y = Y_START + (x + y) * TILE_HEIGHT/2;

    DrawTexture(texture, _x, _y, RAYWHITE);
}

void GameMap::draw() {
    // DrawTexture(_grass, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2, RAYWHITE);
    for (int i = 0; i < MAP_HEIGHT; i++) {
        for (int j = 0; j < MAP_WIDTH; j++) {
            if (_tiles[i][j] == 0) {
                this->drawTile(_sand, j, i);
            } else {
                this->drawTile(_grass, j, i);
            }
        }
    }

    Rectangle source = {
        .x = 0,
        .y = 25,
        .width = 16,
        .height = 25,
    };

    Rectangle dest = {
        .x = 45,
        .y = 45,
        .width = TILE_WIDTH * 0.35,
        .height = TILE_HEIGHT * 0.7,
    };

    DrawTexturePro(_character, source, dest, Vector2Zero(), 0, RAYWHITE);
}