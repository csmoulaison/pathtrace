#include "platform.h"

Platform init_platform(const Context* context) {
    Platform platform = {};
    platform.window_size.x = 256;
    platform.window_size.y = 256;

    SDL_Init(SDL_INIT_EVERYTHING);
    platform.window = SDL_CreateWindow(
        "pathtrace", 
        0, 
        0, 
        platform.window_size.x, 
        platform.window_size.y, 
        SDL_WINDOW_RESIZABLE
    );

    return platform;
}
