#include "SDLTextureFactory.h"

#include <SDL_image.h>
#include <iostream>

SDLTextureFactory::SDLTextureFactory(SDL_Renderer *renderer) : renderer(renderer) {}

SDL_Texture *SDLTextureFactory::getTexture(const std::string &fileLoc) {
    auto found = this->cache.find(fileLoc);
    if (found != this->cache.end())
        return found->second.get();

    // First request for this path: load it (may legitimately be nullptr).
    sdl::TexturePtr texture(IMG_LoadTexture(this->renderer, fileLoc.c_str()));
    if (texture == nullptr)
        std::cerr << "SDLTextureFactory: failed to load '" << fileLoc
                  << "': " << IMG_GetError() << std::endl;

    // Cache the result either way so we don't retry a missing file every frame.
    SDL_Texture *raw = texture.get();
    this->cache[fileLoc] = std::move(texture);
    return raw;
}
