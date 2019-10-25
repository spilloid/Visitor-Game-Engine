#ifndef SCENE_H
#define SCENE_H
#include "SpriteProxy.h"
#include "Visitor.h"
#include <list>
class Scene{
    private:
        std::list<SpriteProxy*> spriteList;
    public:
        Scene();
        ~Scene();
        void addSprite(SpriteProxy* s);
        void accept(Visitor* v);
};
#endif