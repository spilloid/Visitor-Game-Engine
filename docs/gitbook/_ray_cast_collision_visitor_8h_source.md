---
search:
    keywords: ['RayCastCollisionVisitor.h', 'file']
---

# RayCastCollisionVisitor.h File Reference

**[Go to the documentation of this file.](_ray_cast_collision_visitor_8h.md)**
Source: `classes/RayCastCollisionVisitor.h`

    
    
    
    
    
    
    
    
```cpp

#ifndef RAYCAST_COLLISIONVISITOR_H
#define RAYCAST_COLLISIONVISITOR_H

#include "AbstractCollisionVisitor.h"

class RayCastCollisionVisitor : public AbstractCollisionVisitor {
    void visit(std::shared_ptr<Sprite> s) override;
};

#endif
```


    
  
