#ifndef ABSTRACTDRAWINGVISITOR_H
#define ABSTRACTDRAWINGVISITOR_H
#include "Visitor.h"
class AbstractDrawingVisitor : public Visitor{
    virtual void visit(std::shared_ptr<SpriteProxy> s)=0;
    private:
    //you'll probably want a cache of some kind here for drawing
    public: 
    /**
     * @brief Draw cache to screen
     * 
     */
    virtual void draw()=0;
    /**
     * @brief is the screen window open?
     * 
     * @return true 
     * @return false 
     */
    virtual bool isOpen()=0;
};
#endif // ABSTRACTDRAWINGVISITOR_H
