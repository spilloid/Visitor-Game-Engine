---
search:
    keywords: ['AbstractInputWrapper.h', 'file']
---

# AbstractInputWrapper.h File Reference

**[Go to the documentation of this file.](_abstract_input_wrapper_8h.md)**
Source: `classes/AbstractInputWrapper.h`

    
    
    
    
    
    
    
    
      
    
    
    
```cpp
#ifndef AbSTRACT_INPUT_WRAPPER
#define ABSTRACT_INPUT_WRAPPER

#include <memory>
#include <vector>

struct click {
    int x;
    int y;
    int isLeft;
};

class AbstractInputWrapper {
protected:
public:
        virtual std::vector<int> getKeyPresses()=0;
        virtual click getLastClick()=0;
};

#endif // !1ABSTRACT_INPUT_WRAPPER
```


    
  
