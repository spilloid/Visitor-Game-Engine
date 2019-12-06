#ifndef GRIDDRAWINGVISITOR_H
#define GRIDDRAWINGVISITOR_H
#include "AbstractDrawingVisitor.h"
class GridDrawingVisitor : public AbstractDrawingVisitor
{
private:
    /**
     * @brief maximum number of squares in X direction
     * 
     */
    int maxX;
    /**
     * @brief maximum number of squares in Y direction
     * 
     */
    int maxY;
  std::vector<std::shared_ptr<SpriteProxy>> renderList;
public:
/**
 * @brief Construct a new Grid Drawing Visitor object
 * 
 * @param maxX  : size of grid for X direction
 * @param maxY : size of grid for Y direction
 * @param ar : abstract renderer
 */
    GridDrawingVisitor(int maxX, int maxY, std::shared_ptr<AbstractRenderer> ar);
    /**
     * @brief Draw cache to screen
     * 
     */
    virtual void draw();
    /**
     * @brief is the screen window open?
     * 
     * @return true 
     * @return false 
     */
    virtual bool isOpen();
    /**
     * @brief cache a sprite for later drawing
     * 
     * @param s 
     */
    virtual void visit(std::shared_ptr<SpriteProxy> s);
};
#endif