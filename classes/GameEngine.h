#ifndef GAMEENGINE_H
#define GAMEENGINE_H
#include "Visitor.h"
#include "Scene.h"
#include <list>
#include <thread>
class GameEngine{
    private:
        /**
         * @brief visitors that operate on the scene as a whole
         * 
         */
        std::list<std::shared_ptr<Visitor>> sceneVisitors;
        /**
         * @brief scene which holds the sprites
         * 
         */
        Scene scene;
    public:
    /**
     * @brief Construct a new Game Engine object
     * 
     */
        GameEngine();
        /**
         * @brief Destroy the Game Engine object
         * 
         */
        ~GameEngine();
        /**
         * @brief Add visitor operation for scene
         * 
         */
        void addVisitor(std::shared_ptr<Visitor>);
        /**
         * @brief Add Sprite to scene
         * 
         */
        void addSprite(std::shared_ptr<SpriteProxy>);
        /**
         * 
         */


        /**
         * @brief Let visitors visit the scene
         * 
         */
        void update();
};
#endif