---
search:
    keywords: ['AbstractScene.h', 'file']
---

# AbstractScene.h File Reference

**[Go to the documentation of this file.](_abstract_scene_8h.md)**
Source: `classes/AbstractScene.h`

    
    
    
    
    
    
    
    
    
    
    
    
    
    
```cpp
#ifndef ABSTRACT_SCENE_H
#define ABSTRACT_SCENE_H

#include "Sprite.h"
#include "Visitor.h"
#include <list>
#include <memory>

//TODO: implement a composite scene.
//TODO: BSP dungeon Generation ; andy's website
class AbstractScene {
private:
public:
    virtual void addSprite(std::shared_ptr<Sprite> s) = 0;

    virtual void accept(std::shared_ptr<Visitor> v) = 0;
};
#endif
```


    
  
