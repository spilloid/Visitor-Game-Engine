#ifndef BOUNCEBOUNDSVISITOR_H
#define BOUNCEBOUNDSVISITOR_H
#include "Visitor.h"
class BounceBoundsVisitor : public Visitor{
    int minX, maxX, minY, maxY;
    public:
    BounceBoundsVisitor(int minX,int maxX, int minY, int maxY);
    void visit(std::shared_ptr<SpriteProxy> sp);
};
#endif