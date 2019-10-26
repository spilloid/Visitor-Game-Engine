#ifndef FORCEVISITOR_H
#define FORCEVISITOR_H
#include "Visitor.h"
#include <list>
#include <math.h>
struct objectInMotion{
    double dx;
    double dy;
    SpriteProxy* sprite;
};
class ForceVisitor : public Visitor{
    private:
        std::list<objectInMotion> forceList;
    public:
    virtual void visit(SpriteProxy* s);
    /**
     * @brief apply a force to the sprite
     * 
     * @param s sprite to be operated on
     * @param magnitude force magnitude
     * @param angle angle of operation, in degrees
     */
    void applyForce(SpriteProxy* s, double magnitude, float angle);
};
#endif