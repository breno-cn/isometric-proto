#include "scene.hpp"
#include "../math/math_utils.hpp"

Scene::~Scene() {
    for (int i = 0; i < N_SPRITES; i++) {
        UnloadTexture(_sprites[i]);
    }
}

void Scene::drawTile(int x, int y, int spriteIndex) {
    // Vector2 isometric = math::cartesian_to_isometric(Vector2{x, y});
    Vector2 cartesian = Vector2 { float(x), float(y) };
    Vector2 isometric = math::cartesian_to_isometric(cartesian);

    Texture2D texture = _sprites[spriteIndex];

    DrawTexture(texture, isometric.x, isometric.y, RAYWHITE);
}

void Scene::init() {
    for (int i = 0; i < N_SPRITES; i++) {
        const char* filepath = TextFormat("./tiles/tile_%d.png", i);

        _sprites[i] = LoadTexture(filepath);
    }

    _player = std::make_unique<Player>();
    _player.get()->init();

    _camera = std::make_unique<PlayerCamera>();
    _camera.get()->init();
}

void Scene::handleInput() {
    PollInputEvents();
}

void Scene::update() {
    _player.get()->update();
    _camera.get()->followPlayer(*_player);
}

void Scene::draw() {
    BeginMode2D(_camera.get()->_camera);
        for (int y = 0; y < MAP_HEIGHT; y++) {
            for (int x = 0; x < MAP_WIDTH; x++) {
                int spriteIndex = _map[x][y];

                // DrawTexture(_sprites[spriteIndex], x, y, RAYWHITE);
                this->drawTile(x, y, spriteIndex);
            }
        }
    EndMode2D();
}


