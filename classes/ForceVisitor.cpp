#include "ForceVisitor.h"
void ForceVisitor::visit(std::shared_ptr<SpriteProxy> s){
    //for every object with a force on it
        s->setXY(
            s->getX() + s->getDX(),
            s->getY() + s->getDY()
        );
}

void ForceVisitor::applyForce(std::shared_ptr<SpriteProxy> s, double magnitude, float angle){
    double dx = s->getDX() , dy = s->getDY();
    //convert to radians because we're math people
    double radianAngle = (angle-90.f) * M_PI / 180.f;
    //calc dx & dy like our lord and savior Pythagreous taught us
    dx += magnitude * cos(radianAngle);
    dy += magnitude * sin(radianAngle);
    s->setDXY(dx,dy);
}

void ForceVisitor::stop(std::shared_ptr<SpriteProxy> s){
    s->setDXY(0,0);
}