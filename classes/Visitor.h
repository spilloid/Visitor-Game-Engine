#ifndef VISITOR_H
#define VISITOR_H
#include <iostream>
#include "SpriteProxy.h"
class Visitor{
    public:
    virtual void visit(SpriteProxy*);
};
#endif