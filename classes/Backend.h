#ifndef BACKEND_H
#define BACKEND_H

#include <memory>
#include <string>

#include "AbstractRenderer.h"
#include "AbstractInputWrapper.h"

/**
 * @brief A matched renderer + input pair that share one platform window.
 *
 * Returned by Backend::create() so a game never has to touch the underlying
 * window handle (the old SFMLInputWrapper(ar->getWindow()) coupling is gone).
 */
struct Platform {
    std::shared_ptr<AbstractRenderer> renderer;
    std::shared_ptr<AbstractInputWrapper> input;
};

/**
 * @brief GoF Abstract Factory for a windowing/graphics backend.
 *
 * Each concrete backend (SDL2, SFML, ...) knows how to open a window and build
 * the renderer/input pair that drive it. Games depend only on this interface,
 * so swapping backends is a build-time choice, not a code change.
 */
class Backend {
public:
    virtual ~Backend() = default;

    /**
     * @brief Open a window and produce the renderer + input wrapper for it.
     *
     * @param width  window width in pixels
     * @param height window height in pixels
     * @param title  window title bar text
     * @return Platform matched renderer/input pair
     */
    virtual Platform create(unsigned int width,
                            unsigned int height,
                            const std::string &title) = 0;
};

/**
 * @brief Returns the backend selected at build time.
 *
 * Exactly one backend translation unit (SDLBackend.cpp, SFMLBackend.cpp, ...)
 * is compiled per build and provides this definition. This is the single seam
 * the build system flips to change targets.
 */
std::shared_ptr<Backend> createDefaultBackend();

#endif // BACKEND_H
