#ifndef YIELD_H
#define YIELD_H

/**
 * @brief Hand control back to the host once per frame.
 *
 * Native targets run a normal blocking game loop, so this is a no-op. In the
 * browser a blocking loop would freeze the tab, so the Emscripten build yields
 * to the event loop here (requires -sASYNCIFY). One call per outer loop
 * iteration keeps the games' loop structure identical across every target.
 */
#ifdef __EMSCRIPTEN__
#include <emscripten.h>
inline void frameYield(int milliseconds) { emscripten_sleep(milliseconds); }
#else
inline void frameYield(int /*milliseconds*/) {}
#endif

#endif // YIELD_H
