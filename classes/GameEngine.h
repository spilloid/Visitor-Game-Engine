#ifndef GAMEENGINE_H
#define GAMEENGINE_H
#include "Visitor.h"
#include "DrawingVisitor.h"
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
        /**
         * @brief SFML rendering window to draw to
         * 
         */
        std::shared_ptr<sf::RenderWindow> window;
        /**
         * @brief renderer which draws to window
         * 
         */
        std::shared_ptr<DrawingVisitor> renderer;
    public:
    /**
     * @brief Construct a new Game Engine object
     * 
     */
        GameEngine();
        /**
         * @brief Construct a new Game Engine object
         * 
         * @param height specify game window height
         * @param width specify game window width
         */
        GameEngine(int height, int width);
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
         * @brief updates game engine window. 
         * 
         * Plop this in your main game loop,
         * @return true window is open
         * @return false window is closed
         */
        bool update();
};
#endif