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
    std::list<std::shared_ptr<Sprite>> collisions;
    /**
     * @brief sprite to watch and compare for collisions
     *
     */
    std::shared_ptr<Sprite> watched;
    public:
    /**
     * @brief update currently colliding list based on algorithm
     * 
     * @param s 
     */
    void visit(std::shared_ptr<Sprite> s) override = 0;

    /**
     * @brief 
     * 
     * @return std::list<Sprite*> list of all sprites that collided with watched since last check
     */
    std::list<std::shared_ptr<Sprite>> getCollisions();

    /**
     * @brief Set the Watched object
     * 
     * @param s 
     */
    void setWatched(std::shared_ptr<Sprite> s);

};
#endif