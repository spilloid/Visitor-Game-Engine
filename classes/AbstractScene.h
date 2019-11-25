#ifndef ABSTRACTSCENE_H
#define ABSTRACTSCENE_H
#include "SpriteProxy.h"
#include "Visitor.h"
#include <list>
#include <memory>
class AbstractScene{
    private:
    public:
        /**
         * @brief add a sprite to the scene
         * 
         * @param s 
         */
        void addSprite(std::shared_ptr<SpriteProxy> s)=0;
        /**
         * @brief iterate through sprites in scene letting each visitor visit sprites
         * 
         * @param v 
         */
        void accept(std::shared_ptr<Visitor> v)=0;
};
#endif