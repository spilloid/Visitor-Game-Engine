#ifndef SPRITE_H
#define SPRITE_H

#include <iostream>
#include <memory>

class Sprite {
protected:
/**
 * @brief x position
 * 
 */
    double x{};
    /**
     * @brief change in x ; updated on interval in forceVisitor
     *
     */
    double dx{};
    /**
     * @brief y position
     *
     */
    double y{};
    /**
     * @brief change in y ; updated on interval in forceVisitor
     * TODO: perhaps update dy not on force visitor?
     *
     */
    double dy{};
    /**
     * @brief height of sprite
     *
     */
    double height{};
    /**
     * @brief width of sprite
     *
     */
    double width{};
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
    Sprite();

    /**
     * @brief Construct a new Sprite object
     * @param textureLoc : file location for texture
     * @param x : x location of sprite relative to size of window
     * @param y : y location of sprite relative to size of window
     * @param width : width of sprite in pixels
     * @param height : height of sprite in pixels
     */
    Sprite(std::string textureLoc, double x, double y, double width, double height);

    /**
     * @brief
     *
     * @return int x position of sprite
     */
    double getX();

    /**
     * @brief
     *
     * @return int y Position of sprite
     */
    double getY();

    /**
     * @brief set new coords of sprite
     *
     * @param X new X value of Sprite
     * @param Y new Y value of Sprite
     */
    void setXY(double X, double Y);

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
    double getHeight();

    /**
     * @brief Get the Width object
     *
     * @return int
     */
    double getWidth();

    /**
     * @brief Get the Texture Location object
     *
     * @return std::string
     */
    std::string getTextureLocation();
};

#endif