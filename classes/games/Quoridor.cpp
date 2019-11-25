#include "Quoridor.h"
void Quoridor::start(){
    /**const int ScreenHeight=500,ScreenWidth=500,
    MAXX=24,MINX=0,MAXY=24,MINY=0,
    playerHeight=2,playerWidth=2,
    wallHeight=1,wallWidth=2;
    const std::string black = "./assets/img/bbox.png";
    //declare sprites : texture, (x,y), (width,height)
    std::shared_ptr<SpriteProxy> player1 = std::make_shared<SpriteProxy>(
        black,MAXX/2,MINY,playerWidth,playerHeight);
    std::shared_ptr<SpriteProxy> player2 = std::make_shared<SpriteProxy>(
        black,MAXX/2,MAXY,playerWidth,playerHeight);
    std::shared_ptr<SpriteProxy> player1Goal = std::make_shared<SpriteProxy>(
        black,MINX, MAXY,MAXX,1);
    std::shared_ptr<SpriteProxy> player2Goal = std::make_shared<SpriteProxy>(
        black,MINX, MINY,MAXX,1);
    std::shared_ptr<SpriteProxy> wall = std::make_shared<SpriteProxy>(
        black,0,0,wallWidth,wallHeight);
    //declare visitors
    std::shared_ptr<BoundingBoxCollisionVisitor> bbcv = std::make_shared<BoundingBoxCollisionVisitor>();
    std::shared_ptr<SFMLDrawingVisitor> draw = std::make_shared<SFMLDrawingVisitor>(MAXX,MAXY);

    //declare game engine
    std::shared_ptr<GameEngine> ge = std::make_shared<GameEngine>();

    //add sprites to scene
    ge->addSprite(player1);
    ge->addSprite(player2);
    ge->addSprite(player1Goal);
    ge->addSprite(player2Goal);
    ge->addSprite(wall);

    //tweak visitors
    bbcv->setWatched(player1);

    //add visitors to scene
    ge->addVisitor(bbcv);
    //gotta add the drawing visitor last
    ge->addVisitor(draw);

    //I want a clock
    sf::Clock tick;
    
    //start the game
    srand(time(NULL));
    bool up= true;
    while(draw->isOpen()){
        if(tick.getElapsedTime().asMilliseconds() > 50){
            ge->update();
            //apply a random force every 5 seconds
            tick.restart();
            std::list<std::shared_ptr<SpriteProxy>> l = bbcv->getCollisions();
            for(std::list<std::shared_ptr<SpriteProxy >>::iterator c = l.begin(); c != l.end(); c++){
            draw->draw();
            }
        }
    }*/
}