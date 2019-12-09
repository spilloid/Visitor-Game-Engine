---
search:
    keywords: ['AbstractCollisionVisitor.cpp', 'file']
---

# AbstractCollisionVisitor.cpp File Reference

**[Go to the documentation of this file.](_abstract_collision_visitor_8cpp.md)**
Source: `classes/AbstractCollisionVisitor.cpp`

    
    
    
    
    
    
    
```cpp
#include "AbstractCollisionVisitor.h"

#include <utility>

std::list<std::shared_ptr<Sprite>> AbstractCollisionVisitor::getCollisions() {
    std::list<std::shared_ptr<Sprite >> list = this->collisions;
    this->collisions.clear();
    return list;

}

void AbstractCollisionVisitor::setWatched(std::shared_ptr<Sprite> s) {
    this->watched = std::move(s);
}
```


    
  
