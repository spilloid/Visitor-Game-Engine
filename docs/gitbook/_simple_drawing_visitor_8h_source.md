---
search:
    keywords: ['SimpleDrawingVisitor.h', 'file']
---

# SimpleDrawingVisitor.h File Reference

**[Go to the documentation of this file.](_simple_drawing_visitor_8h.md)**
Source: `classes/SimpleDrawingVisitor.h`

    
    
    
    
    
    
    
    
    
    
    
    
    
```cpp
#ifndef SFMLDRAWINGVISITOR_H
#define SFMLDRAWINGVISITOR_H
#include "AbstractDrawingVisitor.h"
#include "AbstractRenderer.h"
#include <vector>
#include <map>
class SimpleDrawingVisitor : public AbstractDrawingVisitor {
private:
  std::vector<std::shared_ptr<Sprite>> renderList;
    bool open;
public:
    explicit SimpleDrawingVisitor(std::shared_ptr<AbstractRenderer> renderer);

    void visit(std::shared_ptr<Sprite> s) override;

    bool isOpen() override;

    void draw() override;
};
#endif
```


    
  
