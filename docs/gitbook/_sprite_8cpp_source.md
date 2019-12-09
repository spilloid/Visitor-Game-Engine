---
search:
    keywords: ['Sprite.cpp', 'file']
---

# Sprite.cpp File Reference

**[Go to the documentation of this file.](_sprite_8cpp.md)**
Source: `classes/Sprite.cpp`

    
    
    
    
    
    
    
```cpp
#include "Sprite.h"

#include <utility>

Sprite::Sprite() = default;

double Sprite::getX() { return this->x; }

double Sprite::getDX() { return this->dx; }

double Sprite::getY() { return this->y; }

double Sprite::getDY() { return this->dy; }

void Sprite::setXY(double X, double Y) {
  this->x = X;
  this->y = Y;
}

void Sprite::setDXY(double dx, double dy) {
  this->dx = dx;
  this->dy = dy;
}

double Sprite::getHeight() { return this->height; }

double Sprite::getWidth() { return this->width; }

std::string Sprite::getTextureLocation() { return this->textureLoc; }

Sprite::Sprite(std::string textureLoc, double x, double y, double width, double height)
        : textureLoc(std::move(textureLoc)), x(x), y(y), dx(0), dy(0), width(width), height(height) {}
```


    
  
