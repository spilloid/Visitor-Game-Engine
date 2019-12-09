---
search:
    keywords: ['Sprite.h', 'file']
---

# Sprite.h File Reference

**[Go to the documentation of this file.](_sprite_8h.md)**
Source: `classes/Sprite.h`

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
```cpp
#ifndef SPRITE_H
#define SPRITE_H

#include <iostream>
#include <memory>

class Sprite {
protected:
    double x{};
    double dx{};
    double y{};
    double dy{};
    double height{};
    double width{};
    std::string textureLoc;
public:
    Sprite();

    Sprite(std::string textureLoc, double x, double y, double width, double height);

    double getX();

    double getY();

    void setXY(double X, double Y);

    double getDX();
  double getDY();

    void setDXY(double x, double y);

    double getHeight();

    double getWidth();

    std::string getTextureLocation();
};

#endif
```


    
  
