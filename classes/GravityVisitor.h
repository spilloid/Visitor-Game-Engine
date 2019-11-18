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
    /**
     * @brief add arbitrary dy up to move sprite simulating gravity
     * 
     */
    void visit(std::shared_ptr<SpriteProxy>);
};
#endif