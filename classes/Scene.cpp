#include "Scene.h"
Scene::Scene(){
}
Scene::~Scene(){
}

void Scene::accept(Visitor* v){
    for(std::_List_iterator<SpriteProxy*> i = this->spriteList.begin(); i != this->spriteList.end(); i++){
        v->visit(*i);
    }
}
void Scene::addSprite(SpriteProxy* s){
    this->spriteList.push_back(s);
}