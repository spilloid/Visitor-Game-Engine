---
search:
    keywords: ['AbstractCollisionVisitor.h', 'file']
---

# AbstractCollisionVisitor.h File Reference

**[Go to the documentation of this file.](_abstract_collision_visitor_8h.md)**
Source: `classes/AbstractCollisionVisitor.h`

    
    
    
    
    
    
    
    
    
    
    
    
```cpp
#ifndef ABSTRACTCOLLISIONVISITOR_H
#define ABSTRACTCOLLISIONVISITOR_H
#include "Visitor.h"
#include <list>
class AbstractCollisionVisitor : public Visitor{
    protected:
    std::list<std::shared_ptr<Sprite>> collisions;
    std::shared_ptr<Sprite> watched;
    public:
    void visit(std::shared_ptr<Sprite> s) override = 0;

    std::list<std::shared_ptr<Sprite>> getCollisions();

    void setWatched(std::shared_ptr<Sprite> s);

};
#endif
```


    
  
