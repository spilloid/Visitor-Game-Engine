#include "Pong.h"

void Pong::start()
{
    //constants
    const int MAXX = 500, MINX = 0, MAXY = 500, MINY = 0,
              paddleHeight = 50, paddleWidth = 10;
    const std::string black = "./assets/img/bbox.png";
    //declare sprites : texture, (x,y), (width,height)
    std::shared_ptr<SpriteProxy> player1 = std::make_shared<SpriteProxy>(
        black, MINX + 100, MAXY / 2, paddleWidth, paddleHeight);
    std::shared_ptr<SpriteProxy> player2 = std::make_shared<SpriteProxy>(
        black, MAXX - 100, MAXY / 2, paddleWidth, paddleHeight);
    std::shared_ptr<SpriteProxy> player1Goal = std::make_shared<SpriteProxy>(
        black, MINX + 10, 0, 5, MAXY * 2);
    std::shared_ptr<SpriteProxy> player2Goal = std::make_shared<SpriteProxy>(
        black, MAXX - 10, 0, 5, MAXY * 2);
    std::shared_ptr<SpriteProxy> ball = std::make_shared<SpriteProxy>(
        black, MAXX / 2, MAXY / 2, 5, 5);
    //make a renderer for drawing to
    //std::shared_ptr<AbstractRenderer> ar = std::make_shared<SFMLRenderer>(MAXX,MAXY);
    std::shared_ptr<SFMLRenderer> ar = std::make_shared<SFMLRenderer>(MAXX, MAXY);
    //declare visitors
    std::shared_ptr<BounceBoundsVisitor> bv = std::make_shared<BounceBoundsVisitor>(MINX, MAXX, MINY, MAXY);
    std::shared_ptr<ForceVisitor> fv = std::make_shared<ForceVisitor>();
    std::shared_ptr<BoundingBoxCollisionVisitor> bbcv = std::make_shared<BoundingBoxCollisionVisitor>();
    std::shared_ptr<SimpleDrawingVisitor> draw = std::make_shared<SimpleDrawingVisitor>(ar);

    //declare game engine
    std::shared_ptr<GameEngine> ge = std::make_shared<GameEngine>();

    //declare input wrapper
    std::shared_ptr<SFMLInputWrapper> in = std::make_shared<SFMLInputWrapper>(ar->getWindow());

    //add sprites to scene
    ge->addSprite(player1);
    ge->addSprite(player2);
    ge->addSprite(player1Goal);
    ge->addSprite(player2Goal);
    ge->addSprite(ball);

    //tweak visitors
    bbcv->setWatched(ball);
    fv->applyForce(ball, 10, rand());

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
    bool up = true;
    while (draw->isOpen())
    {
        if (tick.getElapsedTime().asMilliseconds() > 50)
        {
            //update engine
            ge->update();
            //handle clock
            tick.restart();

            //handle keypresses
            std::vector<int> keys = in->getKeyPresses();
            for (std::vector<int>::iterator press = keys.begin(); press != keys.end(); press++)
            {
                switch (*press)
                {
                case -1:
                fv->applyForce(player1, 1, 0);
                    break;
                case -2:
                fv->applyForce(player1, 1, 180);
                default:
                    std::cout << "Unsupported keypress: " << *press << std::endl;
                    fv->stop(player1);
                    break;
                }
            }

            //handle collisions
            std::list<std::shared_ptr<SpriteProxy>> l = bbcv->getCollisions();
            for (std::list<std::shared_ptr<SpriteProxy>>::iterator c = l.begin(); c != l.end(); c++)
            {
                bool reset = false;
                if (*c == player1Goal)
                {
                    //player 2 scores
                    reset = true;
                }
                else if (*c == player2Goal)
                {
                    //player 1 scores
                    reset = true;
                    //by golly, we hit a paddle
                }
                else if (*c == player1)
                {
                    //bounce off paddle
                    //push ball off to stop multiple collisions
                    ball->setXY(ball->getX() + paddleWidth, ball->getY());
                    ball->setDXY(
                        ball->getDX() * -1,
                        ball->getDY());
                }
                else if (*c == player2)
                {
                    ball->setXY(ball->getX() - paddleWidth, ball->getY());
                    ball->setDXY(
                        ball->getDX() * -1,
                        ball->getDY());
                }
                //game over? next round!
                if (reset)
                {
                    ball->setXY(MAXX / 2, MAXY / 2);
                    fv->applyForce(ball, 10, rand() % 180);
                    std::cout << "POINT!" << std::endl;
                    //silly wait to pause game shortly
                    while (tick.getElapsedTime().asSeconds() < 2)
                        ;
                    //start the next round
                }
            }
            player2->setXY(player2->getX(), ball->getY());
            draw->draw();
        }
    }
    std::cout << "PONG CLOSED" << std::endl;
}
