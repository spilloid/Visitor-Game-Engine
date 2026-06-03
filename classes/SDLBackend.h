#ifndef SDL_BACKEND_H
#define SDL_BACKEND_H

#include "Backend.h"

/**
 * @brief SDL2 concrete Abstract Factory.
 *
 * Opens an SDL window + hardware renderer and produces the matched
 * SDLRenderer / SDLInputWrapper pair that drive it.
 */
class SDLBackend : public Backend {
public:
    Platform create(unsigned int width,
                    unsigned int height,
                    const std::string &title) override;
};

#endif // SDL_BACKEND_H
