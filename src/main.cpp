#include <raylib.h>
#include <memory>

#include "./game/game.hpp"

int main() {
    int width = 1024;
    int height = 512; 

    auto gameMap = std::make_shared<GameMap>();
    auto camera = std::make_shared<PlayerCamera>();
    auto player = std::make_shared<Player>();
    Game game(gameMap, camera, player);

    InitWindow(width, height, "Isometric rendering prototype");
    SetTargetFPS(60);

    game.init();

    while (!WindowShouldClose()) {
        BeginDrawing();

            ClearBackground(RAYWHITE);

            game.handleInput();

            game.update();

            game.draw();
            DrawFPS(0, 0);

        EndDrawing();
    }

    return 0;
}
