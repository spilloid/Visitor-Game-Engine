#include "SimpleDrawingVisitor.h"
SimpleDrawingVisitor::SimpleDrawingVisitor(std::shared_ptr<AbstractRenderer> ar) {
  this->open = true;
  this->renderer = ar;
}

void SimpleDrawingVisitor::visit(std::shared_ptr<SpriteProxy> s) {
  this->renderList.push_back(s);
}
bool SimpleDrawingVisitor::isOpen(){return this->open;}

void SimpleDrawingVisitor::draw() {
  this->renderer->draw(this->renderList);
  this->renderList.clear();
}