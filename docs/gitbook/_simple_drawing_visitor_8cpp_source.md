---
search:
    keywords: ['SimpleDrawingVisitor.cpp', 'file']
---

# SimpleDrawingVisitor.cpp File Reference

**[Go to the documentation of this file.](_simple_drawing_visitor_8cpp.md)**
Source: `classes/SimpleDrawingVisitor.cpp`

    
    
    
    
    
    
    
```cpp
#include "SimpleDrawingVisitor.h"

#include <utility>

SimpleDrawingVisitor::SimpleDrawingVisitor(std::shared_ptr<AbstractRenderer> ar) {
    this->open = true;
    this->renderer = std::move(ar);
}

void SimpleDrawingVisitor::visit(std::shared_ptr<Sprite> s) {
    this->renderList.push_back(s);
}

bool SimpleDrawingVisitor::isOpen() { return this->renderer->isOpen(); }

void SimpleDrawingVisitor::draw() {
  this->renderer->draw(this->renderList);
  this->renderList.clear();
}
```


    
  
