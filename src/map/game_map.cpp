#include <raylib.h>
#include <raymath.h>

#include "./game_map.hpp"
#include "game_map.hpp"

#include "../math/math_utils.hpp"

void GameMap::init() {
    _grass = LoadTexture("./tiles/grass.png");
    _sand = LoadTexture("./tiles/sand.png");
    _altGrass = LoadTexture("./tiles/flat_grass.png");
}

void GameMap::drawTile(Texture2D texture, float x, float y) {
    Vector2 isometric = math::cartesian_to_isometric(Vector2{x, y});

    DrawTexture(texture, isometric.x, isometric.y, RAYWHITE);
}

void GameMap::draw() {
    // DrawTexture(_grass, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2, RAYWHITE);
    for (int i = 0; i < MAP_HEIGHT; i++) {
        for (int j = 0; j < MAP_WIDTH; j++) {
            if (_tiles[i][j] == 0) {
                // this->drawTile(_sand, j, i);
                this->drawTile(_altGrass, j, i);
            } else {
                // this->drawTile(_grass, j, i);
                this->drawTile(_altGrass, j, i);
            }
        }
    }
}