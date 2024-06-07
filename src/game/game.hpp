#include <memory>

#include "../map/game_map.hpp"
#include "../player/PlayerCamera.hpp"
#include "../player/player.hpp"

class Game {

public:
    Game(std::shared_ptr<GameMap> map, std::shared_ptr<PlayerCamera> camera, std::shared_ptr<Player> player);

    std::shared_ptr<GameMap> _map;
    std::shared_ptr<PlayerCamera> _camera;
    std::shared_ptr<Player> _player;

    void init();
    void handleInput();
    void update();
    void draw();
};