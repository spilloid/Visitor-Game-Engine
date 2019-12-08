#include "AbstractCollisionVisitor.h"

#include <utility>

std::list<std::shared_ptr<Sprite>> AbstractCollisionVisitor::getCollisions() {
    std::list<std::shared_ptr<Sprite >> list = this->collisions;
    this->collisions.clear();
    return list;

}

void AbstractCollisionVisitor::setWatched(std::shared_ptr<Sprite> s) {
    this->watched = std::move(s);
}