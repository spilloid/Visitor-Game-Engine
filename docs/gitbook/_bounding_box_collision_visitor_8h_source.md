---
search:
    keywords: ['BoundingBoxCollisionVisitor.h', 'file']
---

# BoundingBoxCollisionVisitor.h File Reference

**[Go to the documentation of this file.](_bounding_box_collision_visitor_8h.md)**
Source: `classes/BoundingBoxCollisionVisitor.h`

    
    
    
    
    
    
    
    
    
    
```cpp
#ifndef BOUNDINGBOXCOLLISIONVISITOR_H
#define BOUNDINGBOXCOLLISIONVISITOR_H
#include "AbstractCollisionVisitor.h"
class BoundingBoxCollisionVisitor : public AbstractCollisionVisitor{
    public:
    BoundingBoxCollisionVisitor();

    void visit(std::shared_ptr<Sprite> s) override;
};
#endif
```


    
  
