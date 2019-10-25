#include "DrawingVisitor.h"
DrawingVisitor::DrawingVisitor(sf::RenderWindow* w)
:window(w)
{}
void DrawingVisitor::visit(SpriteProxy* s){
    //add sprite to local drawing cache if not duplicate
    std::_List_iterator<SpriteProxy*> duplicate = std::find(this->renderList.begin(),this->renderList.end(),s);
    if(duplicate == this->renderList.end()){
        this->renderList.push_back(s);
    }
    //refresh window
    this->window->clear(sf::Color::White);
    for(std::_List_iterator<SpriteProxy*> s = this->renderList.begin(); s!=this->renderList.end(); s++){
        //move the sprite before drawing so the x/y are centered
        sf::Sprite stemp = (*s)->getSprite();
        stemp.setPosition(sf::Vector2f(
            stemp.getPosition().x - (*s)->getWidth() / 2 ,
            stemp.getPosition().y - (*s)->getHeight() / 2
        ));
        this->window->draw(stemp);
    }
    this->window->display();
}
