---
search:
    keywords: ['SimpleScene.cpp', 'file']
---

# SimpleScene.cpp File Reference

**[Go to the documentation of this file.](_simple_scene_8cpp.md)**
Source: `classes/SimpleScene.cpp`

    
    
    
    
    
    
```cpp
#include "SimpleScene.h"

SimpleScene::SimpleScene() = default;

SimpleScene::~SimpleScene() = default;

void SimpleScene::accept(std::shared_ptr<Visitor> v) {
    for (auto &i : this->spriteList) {
        v->visit(i);
    }
}

void SimpleScene::addSprite(std::shared_ptr<Sprite> s) {

    this->spriteList.push_back(s);
}
```


    
  
