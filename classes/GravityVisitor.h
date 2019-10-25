#ifndef GRAVITYVISITOR_H
#define GRAVITYVISITOR_H
#include "Visitor.h"
class GravityVisitor : public Visitor{
    private:
    double intensity;
    public:
    /**
     * @brief Construct a new Gravity Visitor object
     * 
     * @param intensity intensity of gravity
     */
    GravityVisitor(double intensity);
    void visit(SpriteProxy*);
};
#endif