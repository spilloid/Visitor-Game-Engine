#include "Scene.h"
Scene::Scene(){
}
Scene::~Scene(){
}

void Scene::accept(std::shared_ptr<Visitor> v){
    for(std::_List_iterator<std::shared_ptr<SpriteProxy>> i = this->spriteList.begin(); i != this->spriteList.end(); i++){
        v->visit(*i);
    }
}
void Scene::addSprite(std::shared_ptr<SpriteProxy> s){
    this->spriteList.push_back(s);
}