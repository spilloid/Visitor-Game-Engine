#include "GravityVisitor.h"
GravityVisitor::GravityVisitor(double intensity)
        : intensity(intensity) {}

void GravityVisitor::visit(std::shared_ptr<Sprite> s) {
    s->setXY(
            s->getX(),
            s->getY() - this->intensity
    );
}