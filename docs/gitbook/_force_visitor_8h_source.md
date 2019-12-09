---
search:
    keywords: ['ForceVisitor.h', 'file']
---

# ForceVisitor.h File Reference

**[Go to the documentation of this file.](_force_visitor_8h.md)**
Source: `classes/ForceVisitor.h`

    
    
    
    
    
    
    
    
    
    
    
    
```cpp
#ifndef FORCE_VISITOR_H
#define FORCE_VISITOR_H

#include "Visitor.h"
#include <map>
#include <cmath>

class ForceVisitor : public Visitor {
private:
public:
    void visit(std::shared_ptr<Sprite> s) override;

    static void applyForce(const std::shared_ptr<Sprite> &s, double magnitude, float angle);

    static void stop(const std::shared_ptr<Sprite> &s);
};
#endif
```


    
  
