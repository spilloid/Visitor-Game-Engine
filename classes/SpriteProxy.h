#ifndef SPRITEPROXY_H
#define SPRITEPROXY_H
#include <iostream>
#include <memory>
class SpriteProxy {
protected:
/**
 * @brief x position
 * 
 */
  int x;
  /**
   * @brief change in x ; updated on interval in forceVisitor
   * TODO: perhaps update dx not on force visitor?
   * 
   */
  int dx;
  /**
   * @brief y position
   * 
   */
  int y;
  /**
   * @brief change in y ; updated on interval in forceVisitor
   * TODO: perhaps update dy not on force visitor?
   * 
   */
  int dy;
  /**
   * @brief height of sprite
   * 
   */
  int height;
  /**
   * @brief width of sprite
   * 
   */
  int width;
  /**
   * @brief location of image for sprite texture
   * 
   */
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
  /**
   * @brief get dx
   * 
   * @return double 
   */
  double getDX();
  /**
   * @brief get dy
   * 
   * @return double 
   */
  double getDY();
  /**
   * @brief set dx and dy
   * 
   * @param x new dx
   * @param y new dy
   */
  void setDXY(double x, double y);
  /**
   * @brief Get the Height object
   * 
   * @return int 
   */
  int getHeight();
  /**
   * @brief Get the Width object
   * 
   * @return int 
   */
  int getWidth();
  /**
   * @brief Get the Texture Location object
   * 
   * @return std::string 
   */
  std::string getTextureLocation();
};

#endif