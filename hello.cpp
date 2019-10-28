#include <SFML/Graphics.hpp>
#include "./classes/GameEngine.h"
#include "./classes/SpriteProxy.h"
#include "./classes/GravityVisitor.h"
#include "./classes/BoundsVisitor.h"
#include "./classes/WrapBoundsVisitor.h"
#include "./classes/ForceVisitor.h"
#include "./classes/BoundingBoxCollisionVisitor.h"
#include <list>
#include <memory>
int main()
{
    const int MAXX=500,MINX=0,MAXY=500,MINY=0;
    //declare sprites
    std::shared_ptr<SpriteProxy> player1 = std::make_shared<SpriteProxy>(
        "./assets/img/bbox.png",
        MINX + 100,MAXY/2,
        10,100);
    std::shared_ptr<SpriteProxy> player2 = std::make_shared<SpriteProxy>(
        "./assets/img/bbox.png",
        MAXX - 20,MAXY/2,
        10,100);
    std::shared_ptr<SpriteProxy> ball = std::make_shared<SpriteProxy>(
        "./assets/img/bbox.png",
        MAXX / 2,MAXY / 2,
        10,10);

    //declare visitors
    std::shared_ptr<WrapBoundsVisitor> bv = std::make_shared<WrapBoundsVisitor>(MINX,MAXX,MINY,MAXY);
    std::shared_ptr<ForceVisitor> fv = std::make_shared<ForceVisitor>();
    std::shared_ptr<BoundingBoxCollisionVisitor> bbcv = std::make_shared<BoundingBoxCollisionVisitor>();

    //declare game engine
    GameEngine* ge = new GameEngine(MAXY,MAXX);

    //add sprites to scene
    ge->addSprite(player1);
    ge->addSprite(player2);
    ge->addSprite(ball);

    //tweak visitors
    bbcv->setWatched(ball);
    fv->applyForce(ball,10,rand());

    //add visitors to scene
    ge->addVisitor(bbcv);
    ge->addVisitor(fv);
    ge->addVisitor(bv);

    //I want a clock
    sf::Clock tick;
    //start the game
    srand(time(NULL));
    bool keepGoing = true;

    while(keepGoing){
        if(tick.getElapsedTime().asMilliseconds() > 50){
            //apply a random force every 5 seconds
            //TODO: events aren't straight..... fix the math in forcevisitor
            tick.restart();
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
                player1->setXY(player1->getX(),player1->getY()-10);
            }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
                player1->setXY(player1->getX(),player1->getY()+10);
            }

            std::list<std::shared_ptr<SpriteProxy>> l = bbcv->getCollisions();
            for(std::list<std::shared_ptr<SpriteProxy >>::iterator c = l.begin(); c != l.end(); c++){
                ball->setDXY(
                    ball->getDX() * -1,
                    ball->getDY()
                );
            }
            keepGoing = ge->update();
        }
    }
    return 0;
}
