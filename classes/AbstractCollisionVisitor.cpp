#include "AbstractCollisionVisitor.h"

std::list<std::shared_ptr<SpriteProxy>> AbstractCollisionVisitor::getCollisions(){
  std::list<std::shared_ptr<SpriteProxy >> list = this->collisions;
  this->collisions.clear();
  return list;

}
void AbstractCollisionVisitor::setWatched(std::shared_ptr< SpriteProxy> s) {
  this->watched = s;
}