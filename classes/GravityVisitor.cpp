#include "GravityVisitor.h"
GravityVisitor::GravityVisitor(double intensity)
:intensity(intensity)
{  }
void GravityVisitor::visit(std::shared_ptr<SpriteProxy> s){
    s->setXY(
        s->getX(),
        s->getY() - this->intensity
    );
}