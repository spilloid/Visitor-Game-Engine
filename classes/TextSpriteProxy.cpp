#include "TextSpriteProxy.h"
TextSpriteProxy::TextSpriteProxy(int x, int y, int fontSize){
    if(mono.loadFromFile("assets/fonts/RobotoMono-Regular.ttf")){
        std::string debugOutput = "DEBUGGING";
        text.setFont(mono);
        text.setCharacterSize(fontSize);
        text.setFillColor(sf::Color::Black);
        text.setPosition(sf::Vector2f(x,y));
        text.setString(debugOutput);
        this->sprite->setTexture(text);
    }

}