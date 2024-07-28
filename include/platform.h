#pragma once

#include <SDL.h>
#include "vectors.h"
#include "context.h"

struct {
    SDL_Window* window;
    Vec2_I16 window_size;
} typedef Platform;

Platform init_platform(const Context* context);
