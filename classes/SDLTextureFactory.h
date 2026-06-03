#ifndef SDL_TEXTURE_FACTORY_H
#define SDL_TEXTURE_FACTORY_H

#include <SDL.h>
#include <map>
#include <string>

#include "SDLRAII.h"

/**
 * @brief Caches SDL_Texture handles by file path so each image loads once.
 *
 * The SDL analogue of TextureFactory. Each cached texture is owned by an
 * sdl::TexturePtr, so the whole cache cleans itself up; the factory borrows
 * (does not own) the SDL_Renderer the textures are bound to.
 */
class SDLTextureFactory {
private:
    SDL_Renderer *renderer; // borrowed, owned by SDLRenderer
    std::map<std::string, sdl::TexturePtr> cache;

public:
    explicit SDLTextureFactory(SDL_Renderer *renderer);

    /**
     * @brief Get the texture for a path, loading and caching on first use.
     *
     * @param fileLoc image file location
     * @return SDL_Texture* non-owning handle, or nullptr if the file failed to load
     */
    SDL_Texture *getTexture(const std::string &fileLoc);
};

#endif // SDL_TEXTURE_FACTORY_H
