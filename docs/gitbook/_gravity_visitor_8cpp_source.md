---
search:
    keywords: ['GravityVisitor.cpp', 'file']
---

# GravityVisitor.cpp File Reference

**[Go to the documentation of this file.](_gravity_visitor_8cpp.md)**
Source: `classes/GravityVisitor.cpp`

    
    
    
    
    
    
```cpp
#include "GravityVisitor.h"
GravityVisitor::GravityVisitor(double intensity)
        : intensity(intensity) {}

void GravityVisitor::visit(std::shared_ptr<Sprite> s) {
    s->setXY(
            s->getX(),
            s->getY() - this->intensity
    );
}
```


    
  
