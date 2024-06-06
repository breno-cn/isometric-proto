#include <raylib.h>

#include "./game_map.hpp"

void GameMap::draw() {
    int x = 0;
    int y = 0;

    for (int i = 0; i < MAP_HEIGHT; i++) {
        for (int j = 0; j < MAP_WIDTH; j++) {
            if (_tiles[i][j] == 0) {
                DrawRectangle(x, y, TILE_WIDTH, TILE_HEIGHT, BLACK);
            } else {
                Rectangle rect = { .x = x, .y = y, .width = TILE_WIDTH, .height = TILE_HEIGHT};
                DrawRectangleLinesEx(rect, 1.5, BLACK);
            }

            x += TILE_WIDTH;
        }

        x = 0;
        y += TILE_HEIGHT;
    }

}