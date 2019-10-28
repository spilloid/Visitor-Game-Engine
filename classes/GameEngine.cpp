#include "GameEngine.h"
GameEngine::GameEngine(int height, int width) {
  this->window = std::make_shared<sf::RenderWindow>(sf::VideoMode(width, height), "Game");
  this->renderer = std::make_shared<DrawingVisitor>(this->window);
}
GameEngine::~GameEngine() {  }
void GameEngine::addVisitor(std::shared_ptr<Visitor> v) { this->sceneVisitors.push_back(v); }
void GameEngine::addSprite(std::shared_ptr<SpriteProxy> s) { this->scene.addSprite(s); }
bool GameEngine::update() {
  if (this->window->isOpen()) {
    sf::Event event;
    // event queue
    if (this->window->pollEvent(event)) {
      if (event.type == sf::Event::Closed) {
        this->window->close();
        return false; // window is closed!
      }               // end if; window is closed
    }                 // end if ; check event poll
    // operating on scene
    for (std::list<std::shared_ptr<Visitor>>::iterator scv = this->sceneVisitors.begin();
         scv != this->sceneVisitors.end(); scv++)
      this->scene.accept(*scv);
    // always draw last
    this->scene.accept(this->renderer);
    return true;
  }             // end if ; check interval
  return false; // window is def closed
} // eof