#include <memory>

#include "../map/game_map.hpp"

class Game {

public:
    Game(std::shared_ptr<GameMap> map);

    std::shared_ptr<GameMap> _map;

    void init();
    void handleInput();
    void update();
    void draw();

};