---
search:
    keywords: ['GameEngine.h', 'file']
---

# GameEngine.h File Reference

**[Go to the documentation of this file.](_game_engine_8h.md)**
Source: `classes/GameEngine.h`

    
    
    
    
    
    
    
    
    
    
    
    
    
    
```cpp
#ifndef GAMEENGINE_H
#define GAMEENGINE_H
#include "Visitor.h"
#include "AbstractScene.h"
#include "SimpleScene.h"
#include <list>
#include <thread>
class GameEngine{
    private:
        std::list<std::shared_ptr<Visitor>> sceneVisitors;
        std::shared_ptr<AbstractScene> scene;
    public:
        GameEngine();
        ~GameEngine();

    void addVisitor(const std::shared_ptr<Visitor> &);

    void addSprite(std::shared_ptr<Sprite>);

    void setScene(std::shared_ptr<AbstractScene> as);

        void update();
};
#endif
```


    
  
