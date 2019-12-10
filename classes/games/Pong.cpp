#include "Pong.h"

void Pong::start()
{
    //constants
    const int MAXX = 500, MINX = 0, MAXY = 500, MINY = 0,
            paddleHeight = 50, paddleWidth = 10, PADDLESPRING = 20;
    const std::string black = "./assets/img/bbox.png";
    //declare sprites : texture, (x,y), (width,height)
    std::shared_ptr<Sprite> player1 = std::make_shared<Sprite>(
            black, MINX + 100, MAXY / 2, paddleWidth, paddleHeight);
    std::shared_ptr<Sprite> player2 = std::make_shared<Sprite>(
            black, MAXX - 100, MAXY / 2, paddleWidth, paddleHeight);
    std::shared_ptr<Sprite> player1Goal = std::make_shared<Sprite>(
            black, MINX + 10, 0, 5, MAXY * 2);
    std::shared_ptr<Sprite> player2Goal = std::make_shared<Sprite>(
            black, MAXX - 10, 0, 5, MAXY * 2);
    std::shared_ptr<Sprite> ball = std::make_shared<Sprite>(
            black, MAXX / 2, MAXY / 2, 10, 10);
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
    //TODO: break sfml coupling
    sf::Clock tick;

    //start the game
    srand(time(nullptr));
    bool up = true;
    int p1points = 0, p2points = 0;
    while (draw->isOpen())
    {
        if (tick.getElapsedTime().asMilliseconds() > 50) {
            //update engine
            ge->update();
            //handle clock
            tick.restart();

            //handle keypress
            std::vector<int> keys = in->getKeyPresses();
            if (keys.empty())
                fv->stop(player1);
            else
                for (int &key : keys) {
                    switch (key) {
                        case 57: //space
                            break;
                        case 73://up
                            fv->applyForce(player1, 1, 0);
                            break;
                        case 74://down
                            fv->applyForce(player1, 1, 180);
                            break;
                        default:
                            std::cout << "Unsupported keypress: " << key << std::endl;
                            break;
                    }
                }
            //handle collisions
            std::list<std::shared_ptr<Sprite>> l = bbcv->getCollisions();
            for (auto &c : l) {
                bool reset = false;
                if (c == player1Goal) {
                    p2points++;
                    //player 2 scores
                    reset = true;
                } else if (c == player2Goal) {
                    p1points++;
                    //player 1 scores
                    reset = true;
                    //by golly, we hit a paddle
                } else if (c == player1) {
                    //bounce off paddle
                    //push ball off to stop multiple collisions
                    ball->setXY(ball->getX() + paddleWidth, ball->getY());
                    ball->setDXY(
                            fabs(ball->getDX()),
                            PADDLESPRING * ((ball->getY() - player1->getY()) / paddleHeight - 0.5f)
                    );
                    std::cout << ball->getDX() << " " << ball->getDY() << std::endl;
                } else if (c == player2) {
                    ball->setXY(ball->getX() - paddleWidth, ball->getY());
                    ball->setDXY(
                            -fabs(ball->getDX()),
                            PADDLESPRING * ((ball->getY() - player2->getY()) / paddleHeight - 0.5f)
                    );
                    std::cout << ball->getDX() << " " << ball->getDY() << std::endl;
                }
                //game over? next round!
                if (reset) {
                    ball->setXY(MAXX / 2, MAXY / 2);
                    ball->setDXY(0, 0);
                    player1->setXY(player1->getX(), MAXY / 2);
                    player2->setXY(player2->getX(), MAXY / 2);
                    fv->applyForce(ball, 10, rand()%45+90 );
                    std::cout << "POINT! Score : Player 1: " << p1points << " | Player 2: " << p2points << std::endl;
                    //silly wait to pause game shortly
                    while (tick.getElapsedTime().asSeconds() < 2);
                    //start the next round
                }
            }
            //perfect "AI"
            player2->setXY(player2->getX(), ball->getY() - paddleHeight / 2 - 20);

            draw->draw();
        }
    }
    std::cout << "PONG CLOSED" << std::endl;
}
