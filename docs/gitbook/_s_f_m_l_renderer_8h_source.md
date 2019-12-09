---
search:
    keywords: ['SFMLRenderer.h', 'file']
---

# SFMLRenderer.h File Reference

**[Go to the documentation of this file.](_s_f_m_l_renderer_8h.md)**
Source: `classes/SFMLRenderer.h`

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
```cpp
#ifndef SFML_RENDERER_H
#define SFML_RENDERER_H

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include "AbstractRenderer.h"
#include "TextureFactory.h"
#include "Sprite.h"
#include <list>

class SFMLRenderer : public AbstractRenderer {
private:
    std::shared_ptr<sf::RenderWindow> window;
    std::shared_ptr<TextureFactory> tf;
    bool open;
public:
    SFMLRenderer(unsigned int screenWidth, unsigned int screenHeight);
    //TODO: PUT IN ABSTRACT

    void draw(std::vector<std::shared_ptr<Sprite>> renderList) override;

    bool isOpen() override;

    std::shared_ptr<sf::RenderWindow> getWindow();

};

#endif // !1SFML_RENDERER_H
```


    
  
