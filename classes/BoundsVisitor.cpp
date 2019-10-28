#include "BoundsVisitor.h"
    BoundsVisitor::BoundsVisitor(int minX,int maxX, int minY, int maxY)
    :minX(minX),maxX(maxX),minY(minY),maxY(maxY)
    { }
    void BoundsVisitor::visit(std::shared_ptr<SpriteProxy> sp ){
        int ox = sp->getX();
        int oy = sp->getY();
        int nx = ox;
        int ny = oy;
        //check bounds of x and y coords, setting to max/min of breaking threshold
        if(ox > maxX)
            nx = this->maxX;
        else if(ox < minX)
            nx = this->minX;
        if(oy > maxY)
            ny = this->maxY;
        else if(oy < minY)
            ny = this->minY;
        sp->setXY(nx,ny);
    }