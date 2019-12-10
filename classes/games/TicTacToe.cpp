#include "TicTacToe.h"
void TicTacToe::start(){
    int MAXX = 500, MAXY = 500;
    std::string gb = "./assets/img/blueX.png";
    std::shared_ptr<Sprite> board[3][3] = {
        {std::make_shared<Sprite>(gb,0,0,1,1),std::make_shared<Sprite>(gb,1,0,1,1),std::make_shared<Sprite>(gb,2,0,1,1)},
        {std::make_shared<Sprite>(gb,0,1,1,1),std::make_shared<Sprite>(gb,1,1,1,1),std::make_shared<Sprite>(gb,2,1,1,1)},
        {std::make_shared<Sprite>(gb,0,2,1,1),std::make_shared<Sprite>(gb,1,2,1,1),std::make_shared<Sprite>(gb,2,2,1,1)},
    };

    std::shared_ptr<SFMLRenderer> ar = std::make_shared<SFMLRenderer>(MAXX, MAXY);
    std::shared_ptr<SFMLInputWrapper> in = std::make_shared<SFMLInputWrapper>(ar->getWindow());
    std::shared_ptr<GameEngine> ge = std::make_shared<GameEngine>();

    std::shared_ptr<GridDrawingVisitor> draw = std::make_shared<GridDrawingVisitor>(3,3,ar);
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            ge->addSprite(board[i][j]);
    sf::Clock tick;
    while(draw->isOpen()){
        if(tick.getElapsedTime().asMilliseconds() > 50){
            ge->update();
            draw->draw();
        }
    }
}