#ifndef TEXTSPRITEPROXY_H
#define TEXTSPRITEPROXY_H
#include "SpriteProxy.h"
class TextSpriteProxy : public SpriteProxy{
    protected:
        sf::Font mono;
        sf::Text text;
    public:
        TextSpriteProxy(int x,int y, int fontSize);

};
#endif