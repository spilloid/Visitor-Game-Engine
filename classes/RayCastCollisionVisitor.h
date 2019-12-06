
#ifndef RAYCASTCOLLISIONVISITOR_H
#define RAYCASTCOLLISIONVISITOR_H
#include "AbstractCollisionVisitor.h"
class RayCastCollisionVisitor : public AbstractCollisionVisitor{
    void visit(std::shared_ptr<SpriteProxy> s);
};
#endif