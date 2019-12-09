---
search:
    keywords: ['SFMLInputWrapper.h', 'file']
---

# SFMLInputWrapper.h File Reference

**[Go to the documentation of this file.](_s_f_m_l_input_wrapper_8h.md)**
Source: `classes/SFMLInputWrapper.h`

    
    
    
    
    
    
    
    
    
    
    
    
```cpp
#ifndef SFML_INPUT_WRAPPER
#define SFML_INPUT_WRAPPER

#include "AbstractInputWrapper.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

class SFMLInputWrapper : public AbstractInputWrapper {
private:
    std::shared_ptr<sf::RenderWindow> window;
public:
    explicit SFMLInputWrapper(std::shared_ptr<sf::RenderWindow> w);

    std::vector<int> getKeyPresses() override;

    click getLastClick() override;
};

#endif //INPUT_WRAPPER
```


    
  
