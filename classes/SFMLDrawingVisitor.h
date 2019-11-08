#ifndef SFMLDRAWINGVISITOR_H
#define SFMLDRAWINGVISITOR_H
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <map>

#include "AbstractDrawingVisitor.h"
#include "TextureFactory.h"
class SFMLDrawingVisitor : public AbstractDrawingVisitor {
private:
/**
 * @brief SFML window
 * 
 */
  std::shared_ptr<sf::RenderWindow> window;
  /**
   * @brief cache for what to draw to screen
   * 
   */
  std::map<std::shared_ptr<SpriteProxy>, std::shared_ptr<sf::Sprite>>
      renderList;
      /**
       * @brief Factory for grabbing textures
       * 
       */
  std::shared_ptr<TextureFactory> tf;
  /**
   * @brief Status of window 
   * 
   */
  bool open;
public:
/**
 * @brief Construct a new SFMLDrawingVisitor object
 * 
 * @param width  width of window
 * @param height height of window
 */
  SFMLDrawingVisitor(int width, int height);
  /**
   * @brief Caches sprite and draws to sfml window
   *
   * @param s sprite to visit
   */
  virtual void visit(std::shared_ptr<SpriteProxy> s);
  /**
   * @brief check if sfml window is open
   *
   * @return true  yep
   * @return false  nope
   */
  virtual bool isOpen();
  /**
   * @brief draw all sprites to scene
   * 
   */
  virtual void draw();
};
#endif