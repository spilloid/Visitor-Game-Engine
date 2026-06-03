#include "SDLInputWrapper.h"

namespace {
/**
 * @brief The scancodes we surface, paired with their neutral Key.
 *
 * A table keeps the translation declarative: adding a key is one row, not
 * another branch in a switch.
 */
struct KeyMapping {
    SDL_Scancode scancode;
    Key key;
};

const KeyMapping kKeyTable[] = {
        {SDL_SCANCODE_UP, Key::Up},
        {SDL_SCANCODE_DOWN, Key::Down},
        {SDL_SCANCODE_LEFT, Key::Left},
        {SDL_SCANCODE_RIGHT, Key::Right},
        {SDL_SCANCODE_SPACE, Key::Space},
        {SDL_SCANCODE_RETURN, Key::Enter},
        {SDL_SCANCODE_ESCAPE, Key::Escape},
        {SDL_SCANCODE_W, Key::W},
        {SDL_SCANCODE_A, Key::A},
        {SDL_SCANCODE_S, Key::S},
        {SDL_SCANCODE_D, Key::D},
};
} // namespace

SDLInputWrapper::SDLInputWrapper(SDL_Window *window) : window(window) {}

std::vector<Key> SDLInputWrapper::getKeyPresses() {
    std::vector<Key> pressed;
    const Uint8 *state = SDL_GetKeyboardState(nullptr);
    for (const auto &mapping : kKeyTable) {
        if (state[mapping.scancode])
            pressed.push_back(mapping.key);
    }
    return pressed;
}

click SDLInputWrapper::getLastClick() {
    int x = 0, y = 0;
    Uint32 buttons = SDL_GetMouseState(&x, &y);
    return click{
            x,
            y,
            (buttons & SDL_BUTTON(SDL_BUTTON_LEFT)) ? 1 : 0,
    };
}
