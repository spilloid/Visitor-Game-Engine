#include "SimpleScene.h"
SimpleScene::SimpleScene(){
}
SimpleScene::~SimpleScene(){
}

void SimpleScene::accept(std::shared_ptr<Visitor> v){
    for(std::_List_iterator<std::shared_ptr<SpriteProxy>> i = this->spriteList.begin(); i != this->spriteList.end(); i++){
        v->visit(*i);
    }
}
void SimpleScene::addSprite(std::shared_ptr<SpriteProxy> s){
    this->spriteList.push_back(s);
}