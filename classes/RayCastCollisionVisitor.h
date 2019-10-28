
#ifndef RAYCASTCOLLISIONVISITOR_H
#define RAYCASTCOLLISIONVISITOR_H
#include "Visitor.h"
class RayCastCollisionVisitor : public Visitor{
    bool areColliding(std::shared_ptr<SpriteProxy> s1, std::shared_ptr<SpriteProxy> s2);
    void visit(std::shared_ptr<SpriteProxy> s);
};
#endif