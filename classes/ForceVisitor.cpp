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
    double dx=0,dy=0;
    //is this sprite already moving?
    std::map<SpriteProxy*,sf::Vector2f>::iterator old = this->forceList.find(s);
    if (old != this->forceList.end() ) {
        std::cout << "updating from old" << std::endl;
        dx = old->second.x;
        dy = old->second.y;
    } //end if ; if not moving, we infer dx/dy is 0.

    //convert to radians because we're math people
    double radianAngle = (angle-90.f) * M_PI / 180.f;
    //calc dx & dy like our lord and savior Pythagreous taught us
    dx += magnitude * cos(radianAngle);
    dy += magnitude * sin(radianAngle);

    //keep state stored on visitor
    this->forceList[s] = sf::Vector2f(dx,dy);
    std::cout << "dx: " << dx << " dy: " << dy << " radianAngle: " << radianAngle << std::endl;
}

void ForceVisitor::stop(SpriteProxy* s){
    this->forceList[s] = sf::Vector2f(0,0);
}