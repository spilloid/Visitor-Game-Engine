---
search:
    keywords: ['TextureFactory.cpp', 'file']
---

# TextureFactory.cpp File Reference

**[Go to the documentation of this file.](_texture_factory_8cpp.md)**
Source: `classes/TextureFactory.cpp`

    
    
    
    
    
    
```cpp
#include "TextureFactory.h"
TextureFactory::TextureFactory() = default;

bool TextureFactory::loadTexture(const std::string &fileLoc) {
    std::shared_ptr<sf::Texture> tx = std::make_shared<sf::Texture>();
    if (tx->loadFromFile(fileLoc)) {
        this->cache[fileLoc] = tx;
        return true;
    } else {
        return false;
    }

}

std::shared_ptr<sf::Texture> TextureFactory::getTexture(const std::string &fileLoc) {
    auto f = this->cache.find(fileLoc);
    if (f == this->cache.end()) {
        //load texture
        this->loadTexture(fileLoc);
    }
    return this->cache[fileLoc];
    //Consider: use f instead of making an extra call to the map?
}
```


    
  
