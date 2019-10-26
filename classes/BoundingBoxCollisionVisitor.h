#ifndef BOUNDINGBOXCOLLISIONVISITOR_H
#define BOUNDINGBOXCOLLISIONVISITOR_H
#include "Visitor.h"
#include <list>
class BoundingBoxCollisionVisitor : public Visitor{
    private:
       std::list<SpriteProxy*> collisions;
       SpriteProxy* watched; 
    public:
    /**
     * @brief Construct a new Bounding Box Collision Visitor object
     * 
     */
    BoundingBoxCollisionVisitor();
    /**
     * @brief Construct a new Bounding Box Collision Visitor object
     * check for collisions with this sprite
     * @param s 
     */
    BoundingBoxCollisionVisitor(SpriteProxy* s);
    /**
     * @brief update currently colliding list
     * 
     * @param s 
     */
    void visit(SpriteProxy* s);
    /**
     * @brief 
     * 
     * @return std::list<SpriteProxy*> list of all sprites that collided with watched since last check
     */
    std::list<SpriteProxy*> getCollisions();
    /**
     * @brief Set the Watched object
     * 
     * @param s 
     */
    void setWatched(SpriteProxy* s);
};
#endif