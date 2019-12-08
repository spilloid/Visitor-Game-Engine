
#ifndef RAYCAST_COLLISIONVISITOR_H
#define RAYCAST_COLLISIONVISITOR_H

#include "AbstractCollisionVisitor.h"

class RayCastCollisionVisitor : public AbstractCollisionVisitor {
    void visit(std::shared_ptr<Sprite> s) override;
};

#endif