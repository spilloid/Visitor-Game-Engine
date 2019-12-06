#include "LayeredScene.h"
LayeredScene::LayeredScene(){

}
LayeredScene::~LayeredScene(){}
void LayeredScene::addSprite(std::shared_ptr<SpriteProxy> s){
    this->addSprite(s,0);
}
void LayeredScene::addSprite(std::shared_ptr<SpriteProxy> s, int layeredNum){
    this->spriteList[layeredNum].emplace_back(s);
}
void LayeredScene::accept(std::shared_ptr<Visitor> v){
    //iterate over the list of lists in order 
    for(auto i = this->spriteList.begin(); i!= this->spriteList.end(); i++){
       for(auto j = i->begin(); j != i->end(); j++){
           v->visit(*j);
       } 
    }
}