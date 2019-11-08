#ifndef SPRITEPROXY_H
#define SPRITEPROXY_H
#include <iostream>
#include <memory>
class SpriteProxy {
protected:
  int x;
  int dx;
  int y;
  int dy;
  int height;
  int width;
  std::string textureLoc;
public:
  /**
   * @brief Construct a new Sprite object
   *
   */
  SpriteProxy();
  /**
   * @brief Construct a new Sprite object
   * @param textureLoc : file location for texture
   * @param x : x location of sprite relative to size of window
   * @param y : y location of sprite relative to size of window
   * @param width : width of sprite in pixels
   * @param height : height of sprite in pixels
   */
  SpriteProxy(std::string textureLoc, int x, int y, int width,int height);
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
  double getDX();
  double getDY();
  void setDXY(double x, double y);
  int getHeight();
  int getWidth();
  std::string getTextureLocation();
};

#endif