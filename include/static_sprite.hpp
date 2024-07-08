#pragma once

#include "sprite.hpp"

class StaticSprite : public virtual Sprite {

public:
    using Sprite::Sprite;

    void draw(Vector2 position) override;

};

