#include "ForceVisitor.h"
void ForceVisitor::visit(SpriteProxy* s){
    //for every object with a force on it
    for(std::_List_iterator<objectInMotion> oim = this->forceList.begin(); oim!=this->forceList.end(); oim++){
        SpriteProxy* st = oim->sprite;
        //update the sprite position based on dx & dy
        st->setXY(
            st->getX() + oim->dx,
            st->getY() + oim->dy
        );
    }
}
void ForceVisitor::applyForce(SpriteProxy* s, double magnitude, float angle){
    objectInMotion oim;
    double radianAngle = angle * M_PI / 180 - 90;
    oim.dx += magnitude * cos(radianAngle);
    oim.dy += magnitude * sin(radianAngle);
    oim.sprite = s;
    this->forceList.push_back(oim);
}