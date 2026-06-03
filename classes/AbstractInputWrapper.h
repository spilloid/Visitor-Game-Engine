#ifndef ABSTRACT_INPUT_WRAPPER
#define ABSTRACT_INPUT_WRAPPER

#include <memory>
#include <vector>

/**
 * @brief A mouse click, in pixel coordinates.
 */
struct click {
    int x;
    int y;
    int isLeft;
};

/**
 * @brief Backend-neutral key identifiers.
 *
 * Games switch on these instead of raw SFML/SDL scancodes, so the same game
 * logic runs unchanged on any input backend. Each concrete InputWrapper is
 * responsible for translating its native key codes into this enum.
 */
enum class Key {
    Up,
    Down,
    Left,
    Right,
    Space,
    Enter,
    Escape,
    W,
    A,
    S,
    D,
    Unknown
};

class AbstractInputWrapper {
protected:
public:
        virtual ~AbstractInputWrapper() = default;

        /**
         * @brief Get the set of keys currently held down, as backend-neutral Keys.
         *
         * @return std::vector<Key> keys pressed since the last poll
         */
        virtual std::vector<Key> getKeyPresses()=0;

        /**
         * @brief Gets the last click to occur, as an object.
         *
         * @return click
         */
        virtual click getLastClick()=0;
};

#endif // !1ABSTRACT_INPUT_WRAPPER
