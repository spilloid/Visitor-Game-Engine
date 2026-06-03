#ifndef SDL_RAII_H
#define SDL_RAII_H

#include <SDL.h>
#include <memory>

/**
 * @brief RAII wrappers for SDL's C-style handles.
 *
 * SDL hands back raw pointers that must be released with matching SDL_Destroy*
 * calls. Pairing each with a custom-deleter unique_ptr makes ownership explicit
 * and cleanup automatic -- no hand-written destructors, exception-safe by
 * construction. A plain SDL_Window or SDL_Renderer raw pointer then
 * unambiguously means "non-owning observer".
 */
namespace sdl {

struct WindowDeleter {
    void operator()(SDL_Window *w) const { if (w) SDL_DestroyWindow(w); }
};
struct RendererDeleter {
    void operator()(SDL_Renderer *r) const { if (r) SDL_DestroyRenderer(r); }
};
struct TextureDeleter {
    void operator()(SDL_Texture *t) const { if (t) SDL_DestroyTexture(t); }
};

using WindowPtr = std::unique_ptr<SDL_Window, WindowDeleter>;
using RendererPtr = std::unique_ptr<SDL_Renderer, RendererDeleter>;
using TexturePtr = std::unique_ptr<SDL_Texture, TextureDeleter>;

} // namespace sdl

#endif // SDL_RAII_H
