---
search:
    keywords: ['SFMLInputWrapper.cpp', 'file']
---

# SFMLInputWrapper.cpp File Reference

**[Go to the documentation of this file.](_s_f_m_l_input_wrapper_8cpp.md)**
Source: `classes/SFMLInputWrapper.cpp`

    
    
    
    
    
    
    
```
#include "SFMLInputWrapper.h"

#include <utility>

std::vector<int> SFMLInputWrapper::getKeyPresses() {
    std::vector<int> list;
    //50-151 care about
    for (int i = 50; i < 151; i++) {
        if (sf::Keyboard::isKeyPressed((sf::Keyboard::Key) i)) {
            list.emplace_back(i);
        }
    }
    return list;
}
click SFMLInputWrapper::getLastClick()
{
    //mouse location
    sf::Vector2i localPosition = sf::Mouse::getPosition(*this->window);
    //mouse button
    return (click){
        localPosition.x,
        localPosition.y,
        sf::Mouse::isButtonPressed(sf::Mouse::Left)
    };
}

SFMLInputWrapper::SFMLInputWrapper(std::shared_ptr<sf::RenderWindow> w) : window(std::move(w))

```


    
  
