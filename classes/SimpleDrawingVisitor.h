#ifndef SFMLDRAWINGVISITOR_H
#define SFMLDRAWINGVISITOR_H
#include "AbstractDrawingVisitor.h"
#include "AbstractRenderer.h"
#include <vector>
#include <map>
class SimpleDrawingVisitor : public AbstractDrawingVisitor {
private:
  /**
   * @brief cache for what to draw to screen
   * 
   */
  std::vector<std::shared_ptr<Sprite>> renderList;
    /**
     * @brief Status of window
     *
     */
    bool open;
public:
/**
 * @brief Construct a new SimpleDrawingVisitor object
 * 
 * @param renderer that which draws to things
 */
    explicit SimpleDrawingVisitor(std::shared_ptr<AbstractRenderer> renderer);

    /**
     * @brief Caches sprite for next draw
     *
     * @param s sprite to visit
     */
    void visit(std::shared_ptr<Sprite> s) override;

    /**
     * @brief check if window is open
     *
     * @return true  yep
     * @return false  nope
     */
    bool isOpen() override;

    /**
     * @brief draw all sprites from scene to screen; clears renderList
     *
     */
    void draw() override;
};
#endif