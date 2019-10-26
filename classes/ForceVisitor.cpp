#include "ForceVisitor.h"
void ForceVisitor::visit(SpriteProxy* s){
    //for every object with a force on it
    for(std::map<SpriteProxy*,sf::Vector2f>::iterator oim = this->forceList.begin(); oim!=this->forceList.end(); oim++){
        SpriteProxy* st = oim->first;
        //update the sprite position based on dx & dy
        st->setXY(
            st->getX() + oim->second.x,
            st->getY() + oim->second.y
        );
    }
}
void ForceVisitor::applyForce(SpriteProxy* s, double magnitude, float angle){
    double dx,dy;
    //convert to radians because we're math people
    double radianAngle = angle * M_PI / 180 - 90;
    //calc dx & dy like our lord and savior Pythagreous taught us
    dx += magnitude * cos(radianAngle);
    dy += magnitude * sin(radianAngle);
    //keep state stored on visitor
    this->forceList[s] = sf::Vector2f(dx,dy);
}