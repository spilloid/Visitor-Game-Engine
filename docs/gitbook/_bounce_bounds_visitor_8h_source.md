---
search:
    keywords: ['BounceBoundsVisitor.h', 'file']
---

# BounceBoundsVisitor.h File Reference

**[Go to the documentation of this file.](_bounce_bounds_visitor_8h.md)**
Source: `classes/BounceBoundsVisitor.h`

    
    
    
    
    
    
    
    
    
    
```cpp
#ifndef BOUNCEBOUNDSVISITOR_H
#define BOUNCEBOUNDSVISITOR_H
#include "Visitor.h"
class BounceBoundsVisitor : public Visitor{
    int minX, maxX, minY, maxY;
    public:
    BounceBoundsVisitor(int minX, int maxX, int minY, int maxY);

    void visit(std::shared_ptr<Sprite> sp) override;
};
#endif
```


    
  
