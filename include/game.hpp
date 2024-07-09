#include <memory>

#include "scene.hpp"
#include "PlayerCamera.hpp"
#include "player.hpp"

class Game {

private:
    std::unique_ptr<Scene> _scene;

public:
    void loadScene();
    void run();

};