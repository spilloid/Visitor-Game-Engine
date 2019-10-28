#ifndef WRAPBOUNDSVISITOR_H
#define WRAPBOUNDSVISITOR_H
#include "Visitor.h"
class WrapBoundsVisitor : public Visitor{
    private:
    int minX,maxX,minY,maxY;
    public:
    WrapBoundsVisitor(int minX,int maxX,int minY,int maxY);
    void visit(std::shared_ptr<SpriteProxy> s);
};
#endif