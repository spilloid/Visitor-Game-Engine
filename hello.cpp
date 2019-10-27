#include <SFML/Graphics.hpp>
#include "./classes/GameEngine.h"
#include "./classes/SpriteProxy.h"
#include "./classes/GravityVisitor.h"
#include "./classes/BoundsVisitor.h"
#include "./classes/WrapBoundsVisitor.h"
#include "./classes/ForceVisitor.h"
#include "./classes/BoundingBoxCollisionVisitor.h"
#include <list>
int main()
{
    //declare sprites
    SpriteProxy* bbox = new SpriteProxy("./assets/img/bbox.png",200,200,50,50);
    SpriteProxy* bx = new SpriteProxy("./assets/img/blueX.png",250,250,50,50);

    //declare visitors
    GravityVisitor* gv = new GravityVisitor(-10);
    WrapBoundsVisitor* wbv = new WrapBoundsVisitor(0,640,0,480);
    ForceVisitor* fv = new ForceVisitor();
    BoundingBoxCollisionVisitor* bbcv = new BoundingBoxCollisionVisitor();

    //declare game engine
    GameEngine* ge = new GameEngine(480,640);

    //add sprites to scene
    ge->addSprite(bbox);
    ge->addSprite(bx);

    //tweak visitors
    bbcv->setWatched(bbox);

    //add visitors to scene
    ge->addVisitor(bbcv);
    ge->addVisitor(fv);
    ge->addVisitor(wbv);

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
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
                fv->applyForce(bbox,1,90);
            }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
                fv->applyForce(bbox,1,0);
            }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
                fv->applyForce(bbox,1,180);
            }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
                fv->applyForce(bbox,1,270);
            }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space)){
                fv->stop(bbox);
            }

            std::list<SpriteProxy*> l = bbcv->getCollisions();
            for(std::list<SpriteProxy *>::iterator c = l.begin(); c != l.end(); c++){
                std::cout << "moving : " << *c << std::endl;
                std::printf("BBox: %p BX: %p \n",bbox,bx);
                (*c)->setXY(0,0);
                fv->stop(*c);
            }
            keepGoing = ge->update();
        }
    }
    return 0;
}
