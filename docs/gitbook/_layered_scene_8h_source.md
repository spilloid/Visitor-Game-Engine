---
search:
    keywords: ['LayeredScene.h', 'file']
---

# LayeredScene.h File Reference

**[Go to the documentation of this file.](_layered_scene_8h.md)**
Source: `classes/LayeredScene.h`

    
    
    
    
    
    
    
    
    
```cpp
#ifndef LAYEREDSCENE_H
#define LAYEREDSCENE_H
#include "AbstractScene.h"
#include <vector>
class LayeredScene : public AbstractScene{
    private:
    std::vector<std::vector<std::shared_ptr<Sprite>>> spriteList;
    public:
        LayeredScene();

    ~LayeredScene();

    void addSprite(std::shared_ptr<Sprite> s) override;

    void addSprite(const std::shared_ptr<Sprite> &s, int layerNumber);

    void accept(std::shared_ptr<Visitor> v) override;
};
#endif
```


    
  
