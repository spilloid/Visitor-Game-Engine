#include "./classes/GameEngine.h"
#include "./classes/SpriteProxy.h"
#include "./classes/GravityVisitor.h"
#include "./classes/BoundsVisitor.h"
#include "./classes/WrapBoundsVisitor.h"
#include "./classes/ForceVisitor.h"
#include "./classes/BoundingBoxCollisionVisitor.h"
#include "./classes/SFMLDrawingVisitor.h"
#include <list>
#include <memory>
int main()
{
    const int MAXX=500,MINX=0,MAXY=500,MINY=0;
    const std::string black = "./assets/img/bbox.png";
    //declare sprites
    std::shared_ptr<SpriteProxy> player1 = std::make_shared<SpriteProxy>(
        black,
        MINX + 100,MAXY/2,
        10,100);
    std::shared_ptr<SpriteProxy> player1Goal = std::make_shared<SpriteProxy>(
        black,
        MINX,MAXY/2,
        10,500);
    std::shared_ptr<SpriteProxy> player2 = std::make_shared<SpriteProxy>(
        black,
        MAXX - 20,MAXY/2,
        10,100);
    std::shared_ptr<SpriteProxy> player2Goal = std::make_shared<SpriteProxy>(
        black,
        MAXX,MAXY/2,
        10,500);
    std::shared_ptr<SpriteProxy> ball = std::make_shared<SpriteProxy>(
        black,
        MAXX / 2,MAXY / 2,
        10,10);

    //declare visitors
    std::shared_ptr<WrapBoundsVisitor> bv = std::make_shared<WrapBoundsVisitor>(MINX,MAXX,MINY,MAXY);
    std::shared_ptr<ForceVisitor> fv = std::make_shared<ForceVisitor>();
    std::shared_ptr<BoundingBoxCollisionVisitor> bbcv = std::make_shared<BoundingBoxCollisionVisitor>();
    std::shared_ptr<SFMLDrawingVisitor> draw = std::make_shared<SFMLDrawingVisitor>(500,500);

    //declare game engine
    std::shared_ptr<GameEngine> ge = std::make_shared<GameEngine>();

    //add sprites to scene
    ge->addSprite(player1);
    ge->addSprite(player2);
    ge->addSprite(player1Goal);
    ge->addSprite(player2Goal);
    ge->addSprite(ball);

    //tweak visitors
    bbcv->setWatched(ball);
    fv->applyForce(ball,10,rand());

    //add visitors to scene
    ge->addVisitor(bbcv);
    ge->addVisitor(fv);
    ge->addVisitor(bv);
    //gotta add the drawing visitor last
    ge->addVisitor(draw);

    //I want a clock
    sf::Clock tick;
    
    //start the game
    srand(time(NULL));

    while(draw->isOpen()){
        if(tick.getElapsedTime().asMilliseconds() > 50){
            //apply a random force every 5 seconds
            tick.restart();
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
                player1->setXY(player1->getX(),player1->getY()-10);
            }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
                player1->setXY(player1->getX(),player1->getY()+10);
            }

            std::list<std::shared_ptr<SpriteProxy>> l = bbcv->getCollisions();
            for(std::list<std::shared_ptr<SpriteProxy >>::iterator c = l.begin(); c != l.end(); c++){
                bool reset = false;
                if(*c == player1Goal){
                    //player 2 scores
                    reset = true;
                }
                else if(*c == player2Goal){
                    //player 1 scores
                    reset = true;
                //by golly, we hit a paddle
                }else if (*c == player1 || *c == player2){
                    //bounce off paddle
                    //TODO: make this more pong-like
                    ball->setDXY(
                        ball->getDX() * -1,
                        ball->getDY()
                    );
                }
                //game over? next round!
                if(reset){
                    ball->setXY(MAXX/2,MAXY/2);
                    fv->applyForce(ball,10,rand());
                    std::cout << "POINT!" << std::endl;
                    //silly wait to pause game shortly
                    while(tick.getElapsedTime().asSeconds() < 2);
                    //start the next round
                }
            }
            ge->update();
            draw->draw();
        }
    }
    return 0;
}
