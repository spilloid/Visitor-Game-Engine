#ifndef SIMPLESCENE_H
#define SIMPLESCENE_H
#include "AbstractScene.h"
class SimpleScene : public AbstractScene{
    private:
    /**
     * @brief list of sprites in scene. could easily be a different data structure
     * 
     */
        std::list<std::shared_ptr<SpriteProxy>> spriteList;
    public:
    /**
     * @brief Construct a new Scene object
     * 
     */
        SimpleScene();
        /**
         * @brief Destroy the Scene object
         * 
         */
        ~SimpleScene();
        /**
         * @brief add a sprite to the scene
         * 
         * @param s 
         */
        void addSprite(std::shared_ptr<SpriteProxy> s);
        /**
         * @brief iterate through sprites in scene letting each visitor visit sprites
         * 
         * @param v 
         */
        void accept(std::shared_ptr<Visitor> v);
};
#endif