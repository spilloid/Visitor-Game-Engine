#ifndef SPRITEPROXY_H
#define SPRITEPROXY_H
#include <SFML/Graphics.hpp>
#include <iostream>
#include <memory>
//TODO: fix, this is gross.
class SpriteProxy {
private:
  int x;
  int y;
  int height;
  int width;
  sf::Texture texture;
  std::shared_ptr<sf::Sprite> sprite;

public:
  /**
   * @brief Construct a new Sprite object
   *
   */
  SpriteProxy();
  /**
   * @brief Construct a new Sprite object
   *
   * @param fileLocation : relative file location of image file
   * @param x : x location of sprite relative to size of window
   * @param y : y location of sprite relative to size of window
   * @param height : height of sprite in pixels
   * @param width : width of sprite in pixels
   */
  SpriteProxy(std::string fileLocation, int x, int y, int height, int width);
  /**
   * @brief Get the Sprite object
   *
   * @return sf::Sprite
   */
  sf::Sprite getSprite();
  /**
   * @brief 
   * 
   * @return int x position of sprite
   */
  int getX();
  /**
   * @brief 
   * 
   * @return int y Position of sprite
   */
  int getY();
  /**
   * @brief set new coords of sprite
   *   
   * @param X new X value of Sprite
   * @param Y new Y value of Sprite
   */
  void setXY(int X, int Y);
  int getHeight();
  int getWidth();
};

#endif