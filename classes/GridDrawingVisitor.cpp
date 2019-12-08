#include "GridDrawingVisitor.h"

#include <utility>

GridDrawingVisitor::GridDrawingVisitor(int maxX, int maxY, std::shared_ptr<AbstractRenderer> ar)
        : maxX(maxX), maxY(maxY) {
    this->renderer = std::move(ar);
}

void GridDrawingVisitor::draw() {
    //convert x / y coordinates from grid to pixel  ; done every refresh
    std::vector<std::shared_ptr<Sprite>> newList;
    for (auto &i : this->renderList) {
        const std::shared_ptr<Sprite> &ptr = i;
        //get height/width of each square
        unsigned int blockWidth = this->renderer->getWidth() / this->maxX;
        unsigned int blockHeight = this->renderer->getHeight() / this->maxY;
        //convert grid coord --> pixel coord
        double xcoord = ptr->getX() * blockWidth;
        double ycoord = ptr->getY() * blockHeight;
        //make a new list with correct coordinates
        newList.push_back(
                std::make_shared<Sprite>(
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

bool GridDrawingVisitor::isOpen() {
    return this->renderer->isOpen();
}

void GridDrawingVisitor::visit(std::shared_ptr<Sprite> s) {
    this->renderList.push_back(s);
}