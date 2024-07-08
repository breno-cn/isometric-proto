#pragma once

#include <raylib.h>

class Sprite {

public:
    explicit Sprite(const char *filepath);
    virtual ~Sprite();
    
    virtual void draw(Vector2 position) = 0;

protected:
    Texture2D _spritesheet;


    // Sprite();

    // void loadSpritesheet(char *filepath);

};