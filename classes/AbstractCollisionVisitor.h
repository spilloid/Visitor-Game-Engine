#ifndef ABSTRACTCOLLISIONVISITOR_H
#define ABSTRACTCOLLISIONVISITOR_H
#include "Visitor.h"
#include <list>
/**
 * @brief Provides an abstraction for handling visitor based collisions where algorithm is separate from visitation
 * 
 */
class AbstractCollisionVisitor : public Visitor{
    protected:
    /**
     * @brief list of sprites colliding with watched since last check
     * 
     */
       std::list<std::shared_ptr<SpriteProxy>> collisions;
       /**
        * @brief sprite to watch and compare for collisions
        * 
        */
       std::shared_ptr<SpriteProxy> watched; 
    public:
    /**
     * @brief update currently colliding list based on algorithm
     * 
     * @param s 
     */
    virtual void visit(std::shared_ptr<SpriteProxy> s)=0;
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