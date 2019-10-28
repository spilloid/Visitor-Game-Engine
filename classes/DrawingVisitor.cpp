#include "DrawingVisitor.h"
DrawingVisitor::DrawingVisitor(std::shared_ptr<sf::RenderWindow> w)
:window(w)
{}
void DrawingVisitor::visit(std::shared_ptr<SpriteProxy> s){
    //add sprite to local drawing cache if not duplicate
    std::_List_iterator<std::shared_ptr<SpriteProxy>> duplicate = std::find(this->renderList.begin(),this->renderList.end(),s);
    if(duplicate == this->renderList.end()){
        this->renderList.push_back(s);
    }
    //refresh window
    this->window->clear(sf::Color::White);
    for(std::_List_iterator<std::shared_ptr<SpriteProxy>> s = this->renderList.begin(); s!=this->renderList.end(); s++){
        //move the sprite before drawing so the x/y are centered
        sf::Sprite stemp = (*s)->getSprite();
        stemp.setPosition(sf::Vector2f(
            stemp.getPosition().x - (*s)->getWidth() / 2 ,
            stemp.getPosition().y - (*s)->getHeight() / 2
        ));
        this->window->draw(stemp);
    }
    ////DEBUGGING://///
    //TODO: make it so this is modular, ideally maybe visitors can visit the drawing vistor and draw other things?
    sf::Font mono;
    sf::Text text;
    if(mono.loadFromFile("assets/fonts/RobotoMono-Regular.ttf")){
        std::string debugOutput = "DEBUGGING";
        text.setFont(mono);
        text.setCharacterSize(11);
        text.setFillColor(sf::Color::Black);
        text.setPosition(sf::Vector2f(0,0));
        for(std::_List_iterator<std::shared_ptr<SpriteProxy>> s = this->renderList.begin(); s!=this->renderList.end(); s++){
            sf::Vector2f spx = (*s)->getSprite().getPosition();
            debugOutput += "\nX: " + std::to_string(spx.x) + " | Y: " + std::to_string(spx.y);
        }
        text.setString(debugOutput);
        this->window->draw(text);
    }
    ///////////////////
    this->window->display();
}