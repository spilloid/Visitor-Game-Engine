#include "GridDrawingVisitor.h"

GridDrawingVisitor::GridDrawingVisitor(int maxX, int maxY, std::shared_ptr<AbstractRenderer> ar){
    this->renderer = ar;
}
void GridDrawingVisitor::draw(){

}
bool GridDrawingVisitor::isOpen(){
    return true;
}
void GridDrawingVisitor::visit(std::shared_ptr<SpriteProxy> s){

}