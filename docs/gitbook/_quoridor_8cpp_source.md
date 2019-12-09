---
search:
    keywords: ['Quoridor.cpp', 'file']
---

# Quoridor.cpp File Reference

**[Go to the documentation of this file.](_quoridor_8cpp.md)**
Source: `classes/games/Quoridor.cpp`

    
    
    
    
    
    
```cpp
#include "Quoridor.h"
void Quoridor::start()
{
    const int ScreenHeight = 500, ScreenWidth = 500,
            MAXX = 24, MINX = 0, MAXY = 24, MINY = 0,
            playerHeight = 2, playerWidth = 2,
            wallHeight = 1, wallWidth = 2;
    const std::string black = "./assets/img/bbox.png";
    const std::string greySquare = "./assets/img/greySquare.png";
    //declare sprites : texture, (x,y), (width,height)
    std::shared_ptr<Sprite> player1 = std::make_shared<Sprite>(
            black, MAXX / 2, MINY, playerWidth, playerHeight);
    std::shared_ptr<Sprite> player2 = std::make_shared<Sprite>(
            black, MAXX / 2, MAXY, playerWidth, playerHeight);
    std::shared_ptr<Sprite> player1Goal = std::make_shared<Sprite>(
            black, MINX, MAXY, MAXX, 1);
    std::shared_ptr<Sprite> player2Goal = std::make_shared<Sprite>(
            black, MINX, MINY, MAXX, 1);
    std::shared_ptr<Sprite> wall = std::make_shared<Sprite>(
            black, 0, 0, wallWidth, wallHeight);
    //declare renderer
    std::shared_ptr<SFMLRenderer> sr = std::make_shared<SFMLRenderer>(ScreenHeight, ScreenWidth);
    //declare visitors
    std::shared_ptr<BoundingBoxCollisionVisitor> bbcv = std::make_shared<BoundingBoxCollisionVisitor>();
    std::shared_ptr<GridDrawingVisitor> draw = std::make_shared<GridDrawingVisitor>(MAXX, MAXY, sr);

    //declare input wrapper
    std::shared_ptr<SFMLInputWrapper> in = std::make_shared<SFMLInputWrapper>(sr->getWindow());

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
    //ge->addVisitor(bbcv);
    //gotta add the drawing visitor last
    ge->addVisitor(draw);

    //I want a clock
    sf::Clock tick;

    //start the game
    srand(time(nullptr));
    bool up = true;
    while (draw->isOpen())
    {
        if (tick.getElapsedTime().asMilliseconds() > 50) {
            tick.restart(); //restart clock
            //handle keypress
            std::vector<int> keys = in->getKeyPresses();
            double p1x = player1->getX(), p1y = player1->getY();
            for (int &key : keys) {
                switch (key) {
                    case 57: //space
                        break;
                    case 71://left
                        player1->setXY(p1x - 1, p1y);
                        break;
                    case 72://right
                        player1->setXY(p1x + 1, p1y);
                        break;
                    case 73://up
                        player1->setXY(p1x, p1y - 1);
                        break;
                    case 74://down
                        player1->setXY(p1x, p1y + 1);
                        break;
                    default:
                        std::cout << "Unsupported keypress: " << key << std::endl;
                        break;
                }
            }
        }
        ge->update();
        draw->draw();
    }
}
```


    
  
