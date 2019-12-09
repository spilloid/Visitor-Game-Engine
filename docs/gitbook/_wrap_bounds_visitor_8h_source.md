---
search:
    keywords: ['WrapBoundsVisitor.h', 'file']
---

# WrapBoundsVisitor.h File Reference

**[Go to the documentation of this file.](_wrap_bounds_visitor_8h.md)**
Source: `classes/WrapBoundsVisitor.h`

    
    
    
    
    
    
    
    
    
    
```cpp
#ifndef WRAPBOUNDSVISITOR_H
#define WRAPBOUNDSVISITOR_H
#include "Visitor.h"
class WrapBoundsVisitor : public Visitor{
    private:
    int minX,maxX,minY,maxY;
    public:
    WrapBoundsVisitor(int minX, int maxX, int minY, int maxY);

    void visit(std::shared_ptr<Sprite> s) override;
};
#endif
```


    
  
