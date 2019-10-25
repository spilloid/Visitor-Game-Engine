#ifndef DRAWINGVISITOR_H
#define DRAWINGVISITOR_H
#include "Visitor.h"
#include "SpriteProxy.h"
#include <SFML/Graphics.hpp>
#include <list>
#include <algorithm>
class DrawingVisitor : public Visitor{
    private:
    sf::RenderWindow* window;
    std::list<SpriteProxy*> renderList;
    public:
    DrawingVisitor();
    DrawingVisitor(sf::RenderWindow* w);
    virtual void visit(SpriteProxy* s);
};
#endif