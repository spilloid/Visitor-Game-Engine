---
search:
    keywords: ['Visitor.h', 'file']
---

# Visitor.h File Reference

**[Go to the documentation of this file.](_visitor_8h.md)**
Source: `classes/Visitor.h`

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
```cpp
#ifndef VISITOR_H
#define VISITOR_H
#include <iostream>
#include "Sprite.h"
#include <memory>
class Visitor{
    public:
    virtual void visit(std::shared_ptr<Sprite> sp) = 0;
};
#endif
```


    
  
