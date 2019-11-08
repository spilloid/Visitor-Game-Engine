#include "SFMLDrawingVisitor.h"
SFMLDrawingVisitor::SFMLDrawingVisitor(int width, int height) {
  this->window =
      std::make_shared<sf::RenderWindow>(sf::VideoMode(width, height), "Game");
  this->tf = std::make_shared<TextureFactory>();
  this->open = true;
}

void SFMLDrawingVisitor::visit(std::shared_ptr<SpriteProxy> s) {
  // NECESSARY: Check if window is still open
  sf::Event event;
  if (this->window->isOpen()) {
    // TODO: explore way to watch for events on window smarter....
    if (this->window->pollEvent(event)) {
      if (event.type == sf::Event::Closed) {
        this->window->close();
        this->open = false;
      } // end if; window is closed
    }   // end if ; check event poll

    // 1. REFRESH SCREEN
    this->window->clear(sf::Color::White);

    // 2.a. Add sprite to local drawing cache if not duplicate
    auto f = this->renderList.find(s);
    // sprite not in cache
    if (f == renderList.end()) {
      // create & configure sprite
      this->renderList[s] = std::make_shared<sf::Sprite>();
    }
    // 2.b. refresh spriteProxy -> sprite pairing
    this->renderList[s]->setTexture(*this->tf->getTexture(s->getTextureLocation()));
    this->renderList[s]->setTextureRect(sf::IntRect(0,0,s->getWidth(),s->getHeight()));
    this->renderList[s]->setPosition(s->getX(), s->getY());
  }
}
bool SFMLDrawingVisitor::isOpen(){return this->open;}

void SFMLDrawingVisitor::draw() {
  // redraw all sprites on window
  // NOTE: this will refresh screen every time a sprite is visited.....
  for (auto i = this->renderList.begin(); i != this->renderList.end(); i++) {
    this->window->draw(*i->second);
  }
  this->window->display();
}