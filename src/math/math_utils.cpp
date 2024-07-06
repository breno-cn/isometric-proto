#include "math_utils.hpp"
#include "../rendering/render_options.hpp"

Vector2 math::cartesian_to_isometric(Vector2 cartesian) {
    Vector2 result;

    result.x = (cartesian.x - cartesian.y) * render::TILE_WIDTH/2;
    result.y = (cartesian.x + cartesian.y) * render::TILE_HEIGHT/2;

    return result;
}
