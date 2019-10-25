#include "SpriteProxy.h"
SpriteProxy::SpriteProxy() {}
SpriteProxy::SpriteProxy(std::string fileLocation, int x, int y, int height,
                         int width)
    : x(x), y(y), height(height), width(width) {
  this->sprite = new sf::Sprite();
  if (this->texture.loadFromFile(fileLocation,
                                 sf::IntRect(0, 0, height, width))) {
    this->sprite->setTexture(this->texture);
    this->sprite->setPosition(x, y);
  } else {
    std::cout << "Error loading texture!" << std::endl;
  }
}
sf::Sprite SpriteProxy::getSprite() { return *this->sprite; }
int SpriteProxy::getY() {
  const sf::Vector2f ty = this->sprite->getPosition();
  return ty.y;
}
int SpriteProxy::getX() {
  const sf::Vector2f tx = this->sprite->getPosition();
  return tx.x;
}
void SpriteProxy::setXY(int x, int y) {
  this->sprite->setPosition(x, y);
  this->x = x;
  this->y = y;
}
int SpriteProxy::getHeight(){
  return this->height;
}
int SpriteProxy::getWidth(){
  return this->width;
}