#ifndef SFMLDRAWINGVISITOR_H
#define SFMLDRAWINGVISITOR_H
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <map>

#include "AbstractDrawingVisitor.h"
#include "TextureFactory.h"
class SFMLDrawingVisitor : public AbstractDrawingVisitor {
private:
  std::shared_ptr<sf::RenderWindow> window;
  std::map<std::shared_ptr<SpriteProxy>, std::shared_ptr<sf::Sprite>>
      renderList;
  std::shared_ptr<TextureFactory> tf;
  bool open;
public:
  SFMLDrawingVisitor(int width, int height);
  /**
   * @brief Caches sprite and draws to sfml window
   *
   * @param s
   */
  virtual void visit(std::shared_ptr<SpriteProxy> s);
  /**
   * @brief check if sfml window is open
   *
   * @return true  yep
   * @return false  nope
   */
  virtual bool isOpen();
  virtual void draw();
};
#endif