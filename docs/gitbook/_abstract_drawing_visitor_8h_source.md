---
search:
    keywords: ['AbstractDrawingVisitor.h', 'file']
---

# AbstractDrawingVisitor.h File Reference

**[Go to the documentation of this file.](_abstract_drawing_visitor_8h.md)**
Source: `classes/AbstractDrawingVisitor.h`

    
    
    
    
    
    
    
    
    
    
    
```cpp
#ifndef ABSTRACTDRAWINGVISITOR_H
#define ABSTRACTDRAWINGVISITOR_H
#include "Visitor.h"
#include "AbstractRenderer.h"
class AbstractDrawingVisitor : public Visitor{

    private:
    //you'll probably want a cache of some kind here for drawing
    protected:
        bool open;
        std::shared_ptr<AbstractRenderer> renderer;
    public: 
    virtual void draw()=0;
    virtual bool isOpen() = 0;

    void visit(std::shared_ptr<Sprite> s) override = 0;
};
#endif // ABSTRACTDRAWINGVISITOR_H
```


    
  
