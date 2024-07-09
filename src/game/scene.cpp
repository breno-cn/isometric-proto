#include "scene.hpp"
#include "math_utils.hpp"

Scene::~Scene() {
}

void Scene::drawTile(int x, int y, int spriteIndex) {
    Vector2 cartesian = Vector2 { float(x), float(y) };
    Vector2 isometric = math::cartesian_to_isometric(cartesian);

    Sprite& sprite = *_spriteTable[spriteIndex];
    sprite.draw(isometric);
}

void Scene::init() {
    for (int i = 0; i < N_SPRITES; i++) {
        const char* filepath = TextFormat("./tiles/tile_%d.png", i);
        _spriteTable.push_back(std::make_unique<StaticSprite>(filepath));
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
                int spriteIndex = _map[y][x];

                this->drawTile(x, y, spriteIndex);
            }
        }

        this->drawTile(2, 3, 51);
    EndMode2D();
}


