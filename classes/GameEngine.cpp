#include "GameEngine.h"
GameEngine::GameEngine() {
  this->scene = std::make_shared<SimpleScene>();

}
GameEngine::~GameEngine() {}
void GameEngine::addVisitor(std::shared_ptr<Visitor> v) {
  this->sceneVisitors.push_back(v);
}
void GameEngine::addSprite(std::shared_ptr<SpriteProxy> s) {
  this->scene->addSprite(s);
}
void GameEngine::setScene(std::shared_ptr<AbstractScene> as){
  this->scene = as;
}
void GameEngine::update() {
  // operating on scene
  for (std::list<std::shared_ptr<Visitor>>::iterator scv =
           this->sceneVisitors.begin();
       scv != this->sceneVisitors.end(); scv++)
    this->scene->accept(*scv); // end if ; check interval
} // eof