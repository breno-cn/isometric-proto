#include <memory>

#include "scene.hpp"
#include "game_map.hpp"
#include "PlayerCamera.hpp"
#include "player.hpp"

class Game {

private:
    std::unique_ptr<Scene> _scene;

public:
    void loadScene();
    void run();

    /*
    Game(std::shared_ptr<GameMap> map, std::shared_ptr<PlayerCamera> camera, std::shared_ptr<Player> player);

    std::shared_ptr<GameMap> _map;
    std::shared_ptr<PlayerCamera> _camera;
    std::shared_ptr<Player> _player;

    void init();
    void handleInput();
    void update();
    void draw();
    */

};