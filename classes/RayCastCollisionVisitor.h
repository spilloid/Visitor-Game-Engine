
#ifndef RAYCASTCOLLISIONVISITOR_H
#define RAYCASTCOLLISIONVISITOR_H
#include "Visitor.h"
class RayCastCollisionVisitor : public Visitor{
    bool areColliding(SpriteProxy* s1, SpriteProxy* s2);
    void visit(SpriteProxy* s);
};
#endif