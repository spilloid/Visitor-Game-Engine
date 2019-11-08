#ifndef SCENE_H
#define SCENE_H
#include "SpriteProxy.h"
#include "Visitor.h"
#include <list>
#include <memory>
class Scene{
    private:
        std::list<std::shared_ptr<SpriteProxy>> spriteList;
    public:
        Scene();
        ~Scene();
        void addSprite(std::shared_ptr<SpriteProxy> s);
        void accept(std::shared_ptr<Visitor> v);
};
#endif