---
search:
    keywords: ['GravityVisitor.h', 'file']
---

# GravityVisitor.h File Reference

**[Go to the documentation of this file.](_gravity_visitor_8h.md)**
Source: `classes/GravityVisitor.h`

    
    
    
    
    
    
    
    
    
    
```cpp
#ifndef GRAVITYVISITOR_H
#define GRAVITYVISITOR_H
#include "Visitor.h"
class GravityVisitor : public Visitor{
    private:
    double intensity;
    public:
    explicit GravityVisitor(double intensity);

    void visit(std::shared_ptr<Sprite>) override;
};
#endif
```


    
  
