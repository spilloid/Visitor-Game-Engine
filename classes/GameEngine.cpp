#include "GameEngine.h"
GameEngine::GameEngine(int height, int width, float fps){
    this->interval = (1 / fps)*1000;
    this->window = new sf::RenderWindow(sf::VideoMode(width,height), "Game");
    this->renderer = new DrawingVisitor(this->window);

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
bool GameEngine::update(){
    if (this->window->isOpen()){
        sf::Event event;
        //event queue
        if (this->window->pollEvent(event)){
            if (event.type == sf::Event::Closed){
                this->window->close();
                return false;//window is closed!
            }//end if; window is closed
        }//end if ; check event poll
        //Update scene every /interval/ milliseconds
        int check = this->clock.getElapsedTime().asMilliseconds();
        if(check >= this->interval){
            //reset check interval
            this->clock.restart();
            //operating on scene
            for(auto scv = this->sceneVisitors.begin(); scv!=this->sceneVisitors.end(); scv++)
                this->scene.accept(*scv);
            //always draw last
            this->scene.accept(this->renderer);
        }//end if ; check interval
        return true;//window is still open
    }else //end if ; window is open?
    return false;//window is def closed
}// eof