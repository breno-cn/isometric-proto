#include <raylib.h>
#include <memory>

#include "game.hpp"
#include "static_sprite.hpp"

int main() {
    int width = 1024;
    int height = 512; 

    Game game;

    InitWindow(width, height, "Isometric rendering prototype");
    SetTargetFPS(60);

    game.loadScene();

    while (!WindowShouldClose()) {
        BeginDrawing();

            ClearBackground(BLACK);
            game.run();

            DrawFPS(0, 0);

        EndDrawing();
    }

    return 0;
}
