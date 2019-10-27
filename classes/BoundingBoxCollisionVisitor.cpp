#include "BoundingBoxCollisionVisitor.h"
BoundingBoxCollisionVisitor::BoundingBoxCollisionVisitor() : watched(nullptr) {}

void BoundingBoxCollisionVisitor::visit(SpriteProxy *s) {
    // if watched isnt set or if the watched is visiting himself we ignore it
  if(this->watched==nullptr || s == this->watched)return;
  // watched attributes
  double ww = this->watched->getWidth();
  double wh = this->watched->getHeight();
  double wx = this->watched->getX();
  double wy = this->watched->getY();
  // visiting sprite's attributes
  double sw = s->getWidth();
  double sh = s->getHeight();
  double sx = s->getX();
  double sy = s->getY();

  if (wx < sx + sw)
    if (wx + ww > sx)
      if (wy < sy + sh)
        if (wy + wh > sy){
            std::cout << this->watched << " Collided with " << s <<std::endl;
            this->collisions.push_back(s);
        }
  this->collisions.unique();
}

BoundingBoxCollisionVisitor::BoundingBoxCollisionVisitor(SpriteProxy *s)
    : watched(s) {}

std::list<SpriteProxy *> BoundingBoxCollisionVisitor::getCollisions() {
  std::list<SpriteProxy *> list = this->collisions;
  this->collisions.clear();
  return list;
}

void BoundingBoxCollisionVisitor::setWatched(SpriteProxy *s) {
  this->watched = s;
}