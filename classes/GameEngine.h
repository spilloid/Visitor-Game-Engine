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
        /**
         * @brief renderer which draws to window
         * 
         */
        DrawingVisitor* renderer;
        /**
         * @brief game engine update interval
         * 
         */
        int interval;
        /**
         * @brief a clock to watch updates
         * 
         */
        sf::Clock clock; // starts the clock
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
         * @param fps Frames per second
         */
        GameEngine(int height, int width, float fps);
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
         * 
         */


        /**
         * @brief updates game engine window. 
         * 
         * Plop this in your main game loop,
         * the clock will make sure it only updates at most as often as the fps set
         * @return true window is open
         * @return false window is closed
         */
        bool update();
};
#endif