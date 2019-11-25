#ifndef ABSTRACTRENDERER_H
#define ABSTRACTRENDERER_H
#include <vector>
#include <memory>
#include "SpriteProxy.h"
class AbstractRenderer{
   protected:
   bool open;
   public: 
   virtual bool isOpen()=0;
   virtual void draw(std::vector<std::shared_ptr<SpriteProxy>> renderList)=0;
};
#endif // !1RENDERER_H