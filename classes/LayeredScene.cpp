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