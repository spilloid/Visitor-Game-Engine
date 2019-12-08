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
    void visit(std::shared_ptr<Sprite> s) override;
};
#endif