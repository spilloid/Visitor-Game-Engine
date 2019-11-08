#include "SpriteProxy.h"
SpriteProxy::SpriteProxy() {}

SpriteProxy::SpriteProxy(std::string fileLoc, int x, int y,int width, int height)
    :textureLoc(fileLoc), x(x), y(y), width(width),height(height){}

int SpriteProxy::getX() { return this->x; }

double SpriteProxy::getDX() { return this->dx; }

int SpriteProxy::getY() { return this->y; }

double SpriteProxy::getDY() { return this->dy; }

void SpriteProxy::setXY(int x, int y) {
  this->x = x;
  this->y = y;
}

void SpriteProxy::setDXY(double dx, double dy) {
  this->dx = dx;
  this->dy = dy;
}

int SpriteProxy::getHeight() { return this->height; }

int SpriteProxy::getWidth() { return this->width; }
std::string SpriteProxy::getTextureLocation() { return this->textureLoc; }