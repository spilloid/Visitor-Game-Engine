#ifndef FORCEVISITOR_H
#define FORCEVISITOR_H
#include "Visitor.h"
#include <map>
#include <math.h>
class ForceVisitor : public Visitor{
    private:
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