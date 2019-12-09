---
search:
    keywords: ['Game.h', 'file']
---

# Game.h File Reference

**[Go to the documentation of this file.](_game_8h.md)**
Source: `classes/games/Game.h`

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
```cpp
#ifndef GAME_H
#define GAME_H
#include "../GameEngine.h"
#include "../Sprite.h"
#include "../GravityVisitor.h"
#include "../BounceBoundsVisitor.h"
#include "../WrapBoundsVisitor.h"
#include "../ForceVisitor.h"
#include "../BoundingBoxCollisionVisitor.h"
#include "../SimpleDrawingVisitor.h"
#include "../GridDrawingVisitor.h"
#include "../SFMLRenderer.h"
#include "../SFMLInputWrapper.h"
#include <list>
#include <memory>
class Game{
    private:
    public:
        virtual void start()=0;
};
#endif
```


    
  
