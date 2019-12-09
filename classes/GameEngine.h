#ifndef GAMEENGINE_H
#define GAMEENGINE_H
#include "Visitor.h"
#include "AbstractScene.h"
#include "SimpleScene.h"
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
        std::shared_ptr<AbstractScene> scene;
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
    void addVisitor(const std::shared_ptr<Visitor> &);

    /**
     * @brief Add Sprite to scene
     *
     */
    void addSprite(std::shared_ptr<Sprite>);

    /**
     * @brief Set the Scene object
     *
     * @param as
     */
    void setScene(std::shared_ptr<AbstractScene> as);

        /**
         * @brief Let visitors visit the scene
         * 
         */
        void update();
};
#endif