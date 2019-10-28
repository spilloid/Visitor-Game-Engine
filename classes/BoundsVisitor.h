#ifndef BOUNDSVISITOR_H
#define BOUNDSVISITOR_H
#include "Visitor.h"
class BoundsVisitor : public Visitor{
    int minX, maxX, minY, maxY;
    public:
    BoundsVisitor(int minX,int maxX, int minY, int maxY);
    void visit(std::shared_ptr<SpriteProxy> sp);
};
#endif