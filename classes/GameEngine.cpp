#include "GameEngine.h"
GameEngine::GameEngine(int height, int width, float fps){
    this->interval = (1 / fps)*1000;
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
    sf::Clock clock; // starts the clock
    DrawingVisitor * dv = new DrawingVisitor(this->window);

    while (this->window->isOpen()){
        sf::Event event;
        //event queue
        while (this->window->pollEvent(event)){
            if (event.type == sf::Event::Closed)
                this->window->close();
        }
        //Update scene every /interval/ milliseconds
        int check = clock.getElapsedTime().asMilliseconds();
        if(check >= this->interval){
            //reset check interval
            clock.restart();
            //operating on scene
            for(auto scv = this->sceneVisitors.begin(); scv!=this->sceneVisitors.end(); scv++)
                this->scene.accept(*scv);
            //always draw last
            this->scene.accept(dv);
        }
    }
}