---
search:
    keywords: ['SimpleScene.h', 'file']
---

# SimpleScene.h File Reference

**[Go to the documentation of this file.](_simple_scene_8h.md)**
Source: `classes/SimpleScene.h`

    
    
    
    
    
    
    
    
    
    
```cpp
#ifndef SIMPLE_SCENE_H
#define SIMPLE_SCENE_H

#include "AbstractScene.h"

class SimpleScene : public AbstractScene {
private:
    std::list<std::shared_ptr<Sprite>> spriteList;
public:
        SimpleScene();

    ~SimpleScene();

    void addSprite(std::shared_ptr<Sprite> s) override;

    void accept(std::shared_ptr<Visitor> v) override;
};
#endif
```


    
  
