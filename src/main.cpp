#include <raylib.h>
#include <memory>

#include "game.hpp"
#include "static_sprite.hpp"

int main() {
    int width = 1024;
    int height = 512; 

    /*
    auto gameMap = std::make_shared<GameMap>();
    auto camera = std::make_shared<PlayerCamera>();
    auto player = std::make_shared<Player>();
    Game game(gameMap, camera, player);
    */
    Game game;

    // StaticSprite sprite;
    // Sprite *sprite = new StaticSprite();

    InitWindow(width, height, "Isometric rendering prototype");
    SetTargetFPS(60);

    game.loadScene();

    while (!WindowShouldClose()) {
        BeginDrawing();

            ClearBackground(RAYWHITE);
            game.run();

            DrawFPS(0, 0);

        EndDrawing();
    }

    // delete sprite;

    return 0;
}
