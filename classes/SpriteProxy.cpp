#include "SpriteProxy.h"
SpriteProxy::SpriteProxy() {}
SpriteProxy::SpriteProxy(std::string fileLocation, int x, int y, int height,
                         int width)
    : x(x), y(y), height(height), width(width) {
  this->sprite = std::make_shared<sf::Sprite>();
  if (this->texture.loadFromFile(fileLocation,
                                 sf::IntRect(0, 0, height, width))) {
    this->sprite->setTexture(this->texture);
    this->sprite->setPosition(x, y);
  } else {
    std::cout << "Error loading texture!" << std::endl;
  }
}
sf::Sprite SpriteProxy::getSprite() { return *this->sprite; }
int SpriteProxy::getX() {
  const sf::Vector2f tx = this->sprite->getPosition();
  return tx.x;
}
double SpriteProxy::getDX(){
  return this->dx;
}
int SpriteProxy::getY() {
  const sf::Vector2f ty = this->sprite->getPosition();
  return ty.y;
}
double SpriteProxy::getDY(){
  return this->dy;
}
void SpriteProxy::setXY(int x, int y) {
  this->sprite->setPosition(x, y);
  this->x = x;
  this->y = y;
}
void SpriteProxy::setDXY(double dx, double dy){
  this->dx = dx;
  this->dy = dy;
}
int SpriteProxy::getHeight(){
  return this->height;
}
int SpriteProxy::getWidth(){
  return this->width;
}