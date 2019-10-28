#ifndef DRAWINGVISITOR_H
#define DRAWINGVISITOR_H
#include "Visitor.h"
#include "SpriteProxy.h"
#include <SFML/Graphics.hpp>
#include <list>
#include <algorithm>
class DrawingVisitor : public Visitor{
    private:
    std::shared_ptr<sf::RenderWindow> window;
    std::list<std::shared_ptr<SpriteProxy>> renderList;
    public:
    DrawingVisitor();
    DrawingVisitor(std::shared_ptr<sf::RenderWindow> w);
    virtual void visit(std::shared_ptr<SpriteProxy> s);
};
#endif