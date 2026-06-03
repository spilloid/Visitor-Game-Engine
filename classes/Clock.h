#ifndef CLOCK_H
#define CLOCK_H

#include <chrono>

/**
 * @brief A tiny backend-neutral stopwatch.
 *
 * Replaces sf::Clock in the game loops so timing no longer depends on the
 * graphics backend. Built on std::chrono::steady_clock, which is monotonic
 * and portable across every platform we target.
 */
class Clock {
private:
    std::chrono::steady_clock::time_point start{std::chrono::steady_clock::now()};

public:
    /**
     * @brief Milliseconds elapsed since construction or the last restart().
     */
    long getElapsedMilliseconds() const {
        auto now = std::chrono::steady_clock::now();
        return std::chrono::duration_cast<std::chrono::milliseconds>(now - start).count();
    }

    /**
     * @brief Seconds elapsed since construction or the last restart().
     */
    double getElapsedSeconds() const {
        return getElapsedMilliseconds() / 1000.0;
    }

    /**
     * @brief Reset the stopwatch to zero.
     */
    void restart() {
        start = std::chrono::steady_clock::now();
    }
};

#endif // CLOCK_H
