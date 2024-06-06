#include <raylib.h>
#include <iostream>
#include <cmath>

#include "game.hpp"

Game::Game(std::shared_ptr<GameMap> map) {
    _map = map;
}

void Game::init() {
    // _map.get()->init();
}

void Game::handleInput() {
    PollInputEvents();
}

void Game::update() {
}

void Game::draw() {
    _map.get()->draw();

    Vector2 mousePosition = GetMousePosition();
    DrawText(TextFormat("position x: %.2f, y: %.2f", mousePosition.x, mousePosition.y), 400, 0, 40, BLACK);

    Vector2 tileSelected = {
        .x = floorf(mousePosition.x / TILE_WIDTH), 
        .y = floorf(mousePosition.y / TILE_HEIGHT),
    };

    if (tileSelected.x >= 0 && tileSelected.x < MAP_WIDTH && tileSelected.y >= 0 && tileSelected.y < MAP_HEIGHT) {
        DrawText(TextFormat("tile selected x: %.0f, y: %.0f", tileSelected.x, tileSelected.y), 400, 60, 40, BLACK);

        Rectangle rec = {
            .x = tileSelected.x * TILE_WIDTH,
            .y = tileSelected.y * TILE_HEIGHT,
            .width = TILE_WIDTH,
            .height = TILE_HEIGHT,
        };
        DrawRectangleLinesEx(rec, 1.7, GREEN);

        Vector2 mouseOffset = {
            .x = int(mousePosition.x) % TILE_WIDTH,
            .y = int(mousePosition.y) % TILE_HEIGHT,
        };
        DrawText(TextFormat("offset x: %.2f, y: %.2f", mouseOffset.x, mouseOffset.y), 400, 120, 40, BLACK);
    }
}