#ifndef SFMLRENDERER_H
#define SFMLRENDERER_H
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include "AbstractRenderer.h"
#include "TextureFactory.h"
#include "SpriteProxy.h"
#include <list>
class SFMLRenderer : public AbstractRenderer
{
private:
    /**
 * @brief SFML window
 * 
 */
    std::shared_ptr<sf::RenderWindow> window;
    /**
       * @brief Factory for grabbing textures
       * 
       */
    std::shared_ptr<TextureFactory> tf;
   bool open;
public:
/**
 * @brief Construct a new SFMLRenderer object
 * 
 * @param screenWidth 
 * @param screenHeight 
 */
   SFMLRenderer(int screenWidth, int screenHeight);
   //TODO: PUT IN ABSTRACT
   void draw(std::vector<std::shared_ptr<SpriteProxy>> renderList);
   bool isOpen();
   
};
#endif // !1SFMLRENDERER_H