#include "GridDrawingVisitor.h"

GridDrawingVisitor::GridDrawingVisitor(int maxX, int maxY, std::shared_ptr<AbstractRenderer> ar)
:maxX(maxX),maxY(maxY){
    this->renderer = ar;
}
void GridDrawingVisitor::draw(){
  //convert x / y coords from grid to pixel  ; done every refresh
  std::vector<std::shared_ptr<SpriteProxy>> newList;
  for( auto i = this->renderList.begin(); i != this->renderList.end(); i++){
    std::shared_ptr<SpriteProxy> ptr = (*i);
    //get height/width of each square
    int blockWidth = this->renderer->getWidth() / this->maxX; 
    int blockHeight = this->renderer->getHeight() / this->maxY;
    //convert grid coord --> pixel coord
    int xcoord = ptr->getX() * blockWidth;
    int ycoord = ptr->getY() * blockHeight;
    int pixY = ptr->getY();
    //make a new list with correct coords
    newList.push_back(
      std::make_shared<SpriteProxy>(
        ptr->getTextureLocation(),
        xcoord,
        ycoord, 
        blockWidth * ptr->getWidth(),
        blockHeight * ptr->getHeight()
    ));
  }
  this->renderer->draw(newList);
  this->renderList.clear();
}
bool GridDrawingVisitor::isOpen(){
    return this->renderer->isOpen();
}
void GridDrawingVisitor::visit(std::shared_ptr<SpriteProxy> s){
  this->renderList.push_back(s);
}