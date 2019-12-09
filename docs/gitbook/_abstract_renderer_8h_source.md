---
search:
    keywords: ['AbstractRenderer.h', 'file']
---

# AbstractRenderer.h File Reference

**[Go to the documentation of this file.](_abstract_renderer_8h.md)**
Source: `classes/AbstractRenderer.h`

    
    
    
    
    
    
    
    
    
    
    
    
    
    
```cpp
#ifndef ABSTRACT_RENDERER_H
#define ABSTRACT_RENDERER_H

#include <vector>
#include <memory>
#include "Sprite.h"

class AbstractRenderer {
protected:
    bool open{};
    unsigned int screenHeight{};
    unsigned int screenWidth{};
public:
    virtual unsigned int getHeight();

    virtual unsigned int getWidth();

    virtual bool isOpen() = 0;

    virtual void draw(std::vector<std::shared_ptr<Sprite>> renderList) = 0;
};
#endif // !1RENDERER_H
```


    
  
