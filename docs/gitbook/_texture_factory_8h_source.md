---
search:
    keywords: ['TextureFactory.h', 'file']
---

# TextureFactory.h File Reference

**[Go to the documentation of this file.](_texture_factory_8h.md)**
Source: `classes/TextureFactory.h`

    
    
    
    
    
    
    
    
    
    
    
    
```cpp
#ifndef TEXTUREFACTORY_H
#define TEXTUREFACTORY_H
#include <map>
#include <memory>
#include <SFML/Graphics.hpp>
class TextureFactory{
    private:
        std::map <std::string,std::shared_ptr<sf::Texture>> cache;
    public:
        TextureFactory();

    bool loadTexture(const std::string &s);

    std::shared_ptr<sf::Texture> getTexture(const std::string &s);
};
#endif
```


    
  
