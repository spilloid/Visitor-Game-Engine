#include <SFML/Graphics.hpp>
#include "./classes/GameEngine.h"
#include "./classes/SpriteProxy.h"
#include "./classes/GravityVisitor.h"
#include "./classes/BoundsVisitor.h"

int main()
{
    //declare sprites
    SpriteProxy* bbox = new SpriteProxy("./assets/img/bbox.png",200,200,50,50);
    SpriteProxy* bx = new SpriteProxy("./assets/img/blueX.png",250,250,50,50);
    //declare sprites
    GravityVisitor* gv = new GravityVisitor(-1);
    BoundsVisitor* bv = new BoundsVisitor(50,600,50,600);

    //declare game engine
    GameEngine* ge = new GameEngine(480,640);

    //add sprites to scene
    ge->addSprite(bbox);
    ge->addSprite(bx);

    //add visitors to scene
    //ge->addVisitor(gv);
    //ge->addVisitor(bv);

    //start the engine
    ge->start();
    return 0;
}
