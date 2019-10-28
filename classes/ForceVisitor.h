#ifndef FORCEVISITOR_H
#define FORCEVISITOR_H
#include "Visitor.h"
#include <map>
#include <math.h>
class ForceVisitor : public Visitor{
    private:
        /**
         * @brief Holds force vectors in dx/dy notation on each sprite
         * 
         * ASIDE: I chose a map for this because I felt adding 
         * multiple forces to the same object would be easier to
         * access if the key was a pointer to the sprite. This
         * should be effecient since pointers are just memory addresses (small)
         * 
         */
        std::map<std::shared_ptr<SpriteProxy>,sf::Vector2f> forceList;
    public:
    virtual void visit(std::shared_ptr<SpriteProxy> s);
    /**
     * @brief apply a force to the sprite
     * 
     * @param s sprite to be operated on
     * @param magnitude force magnitude
     * @param angle angle of operation, in degrees
     */
    void applyForce(std::shared_ptr<SpriteProxy> s, double magnitude, float angle);
    /**
     * @brief Stop the sprite from moving
     * 
     * @param s 
     */
    void stop(std::shared_ptr<SpriteProxy> s);
};
#endif