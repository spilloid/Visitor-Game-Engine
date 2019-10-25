#include "GameEngine.h"
GameEngine::GameEngine(int height, int width){
    this->window = new sf::RenderWindow(sf::VideoMode(width,height), "Game");

}
GameEngine::~GameEngine(){
    delete this->window;
}
void GameEngine::addVisitor(Visitor * v){
    this->sceneVisitors.push_back(v);
}
void GameEngine::addSprite(SpriteProxy* s){
    this->scene.addSprite(s);
}
void GameEngine::start(){
    DrawingVisitor * dv = new DrawingVisitor(this->window);
    while (this->window->isOpen()){
        sf::Event event;
        //event queue
        while (this->window->pollEvent(event)){
            if (event.type == sf::Event::Closed)
                this->window->close();
        }
        //operating on scene
        for(auto scv = this->sceneVisitors.begin(); scv!=this->sceneVisitors.end(); scv++)
            this->scene.accept(*scv);
        //always draw last
        this->scene.accept(dv);
    }
}