#ifndef BOUNDINGBOXCOLLISIONVISITOR_H
#define BOUNDINGBOXCOLLISIONVISITOR_H
#include "Visitor.h"
#include <list>
class BoundingBoxCollisionVisitor : public Visitor{
    private:
    /**
     * @brief list of sprites colliding with watched since last check
     * 
     */
       std::list<std::shared_ptr<SpriteProxy>> collisions;
       /**
        * @brief sprite to watch and compare for collisionss
        * 
        */
       std::shared_ptr<SpriteProxy> watched; 
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
    BoundingBoxCollisionVisitor(std::shared_ptr<SpriteProxy> s);
    /**
     * @brief update currently colliding list
     * 
     * @param s 
     */
    void visit(std::shared_ptr<SpriteProxy> s);
    /**
     * @brief 
     * 
     * @return std::list<SpriteProxy*> list of all sprites that collided with watched since last check
     */
    std::list<std::shared_ptr<SpriteProxy>> getCollisions();
    /**
     * @brief Set the Watched object
     * 
     * @param s 
     */
    void setWatched(std::shared_ptr<SpriteProxy> s);
};
#endif