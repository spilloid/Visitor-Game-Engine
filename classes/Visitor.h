#ifndef VISITOR_H
#define VISITOR_H
#include <iostream>
#include "SpriteProxy.h"
#include <memory>
class Visitor{
    public:
    /**
     * @brief visit sprite
     * 
     * @param sp 
     */
    virtual void visit(std::shared_ptr<SpriteProxy> sp);
};
#endif