---
search:
    keywords: ['GridDrawingVisitor.h', 'file']
---

# GridDrawingVisitor.h File Reference

**[Go to the documentation of this file.](_grid_drawing_visitor_8h.md)**
Source: `classes/GridDrawingVisitor.h`

    
    
    
    
    
    
    
    
    
    
```cpp
#ifndef GRIDDRAWINGVISITOR_H
#define GRIDDRAWINGVISITOR_H
#include "AbstractDrawingVisitor.h"
class GridDrawingVisitor : public AbstractDrawingVisitor
{
private:
    int maxX;
    int maxY;
    std::vector<std::shared_ptr<Sprite>> renderList;
public:
    GridDrawingVisitor(int maxX, int maxY, std::shared_ptr<AbstractRenderer> ar);

    void draw() override;

    bool isOpen() override;

    void visit(std::shared_ptr<Sprite> s) override;
};
#endif
```


    
  
