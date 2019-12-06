#ifndef BOUNDINGBOXCOLLISIONVISITOR_H
#define BOUNDINGBOXCOLLISIONVISITOR_H
#include "AbstractCollisionVisitor.h"
class BoundingBoxCollisionVisitor : public AbstractCollisionVisitor{
    public:
    BoundingBoxCollisionVisitor();
    /**
     * @brief update currently colliding list based on algorithm
     * 
     * @param s 
     */
    virtual void visit(std::shared_ptr<SpriteProxy> s);
};
#endif