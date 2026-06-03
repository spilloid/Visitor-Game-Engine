#include "SDLBackend.h"

#include <SDL.h>
#include <SDL_image.h>
#include <iostream>

#include "SDLRAII.h"
#include "SDLRenderer.h"
#include "SDLInputWrapper.h"

Platform SDLBackend::create(unsigned int width, unsigned int height,
                            const std::string &title) {
    // SDL_Init is ref-counted and safe to call once per game in the menu loop.
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
        std::cerr << "SDLBackend: SDL_Init failed: " << SDL_GetError() << std::endl;
    IMG_Init(IMG_INIT_PNG);

    sdl::WindowPtr window(SDL_CreateWindow(
            title.c_str(),
            SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
            static_cast<int>(width), static_cast<int>(height),
            SDL_WINDOW_SHOWN));
    if (window == nullptr)
        std::cerr << "SDLBackend: window creation failed: " << SDL_GetError() << std::endl;

    sdl::RendererPtr renderer(SDL_CreateRenderer(
            window.get(), -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC));
    if (renderer == nullptr) {
        // Some platforms (notably the Emscripten/WASM port) expose no driver
        // matching those flags. Fall back to letting SDL pick whatever it has;
        // native builds still get hardware acceleration by default.
        renderer.reset(SDL_CreateRenderer(window.get(), -1, 0));
    }
    if (renderer == nullptr)
        std::cerr << "SDLBackend: renderer creation failed: " << SDL_GetError() << std::endl;

    // The input wrapper only observes the window, so grab a borrowed pointer
    // before ownership of the window moves into the renderer.
    SDL_Window *windowObserver = window.get();

    Platform platform;
    platform.renderer = std::make_shared<SDLRenderer>(
            std::move(window), std::move(renderer), width, height);
    platform.input = std::make_shared<SDLInputWrapper>(windowObserver);
    return platform;
}

/**
 * @brief Build-time backend seam: this TU is compiled only for SDL2 builds.
 */
std::shared_ptr<Backend> createDefaultBackend() {
    return std::make_shared<SDLBackend>();
}
