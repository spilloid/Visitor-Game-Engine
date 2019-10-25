#ifndef GAMEENGINE_H
#define GAMEENGINE_H
#include "Visitor.h"
#include "DrawingVisitor.h"
#include "Scene.h"
#include <list>
class GameEngine{
    private:
        /**
         * @brief visitors that operate on the scene as a whole
         * 
         */
        std::list<Visitor*> sceneVisitors;
        /**
         * @brief scene which holds the sprites
         * 
         */
        Scene scene;
        /**
         * @brief SFML rendering window to draw to
         * 
         */
        sf::RenderWindow* window;
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
        void addVisitor(Visitor*);
        /**
         * @brief Add Sprite to scene
         * 
         */
        void addSprite(SpriteProxy*);
        /**
         * @brief Manually update window 
         * 
         */
        void update();
        /**
         * @brief start game engine
         * 
         */
        void start();

};
#endif