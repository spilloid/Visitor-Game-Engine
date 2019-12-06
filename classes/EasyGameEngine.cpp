#include "EasyGameEngine.h"
EasyGameEngine::EasyGameEngine()
    : drawer(nullptr),
      collisions(std::make_shared<BoundingBoxCollisionVisitor>()),
      scenes(),
      forces(std::make_shared<ForceVisitor>()),
      curScene(0)
{
    this->renderer = nullptr;
}
void EasyGameEngine::setBoundingBoxCollisions()
{
    this->collisions = std::make_shared<BoundingBoxCollisionVisitor>();
}
void EasyGameEngine::setRayCastCollisions()
{
    this->collisions = std::make_shared<RayCastCollisionVisitor>();
}
void EasyGameEngine::setForces(bool yn)
{

    this->forcesOn = yn;
}
int EasyGameEngine::addScene(std::shared_ptr<AbstractScene> scene) {
    this->scenes.emplace_back(scene);
    return this->scenes.size()-1;
}
void EasyGameEngine::setScene(int id) {
    if(id < this->scenes.size())
        this->curScene = id;
    else 
        std::cout << "Invalid Scene Number!" << std::endl;
}
void EasyGameEngine::setRendererer(std::shared_ptr<AbstractRenderer> ar) {
    this->renderer = ar;
}
void EasyGameEngine::update(){
    if(this->renderer == nullptr){
        std::cout << "No rendererer to draw to!" << std::endl;
    }else if(!this->renderer->isOpen()){
        std::cout << "Window is closed!" << std::endl;
    }else{
       std::shared_ptr<AbstractScene> s = this->scenes[this->curScene];
       if(this->forcesOn)
           s->accept(this->forces);
       s->accept(this->drawer);
    }
}