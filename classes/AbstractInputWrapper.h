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
        /**
         * @brief Get keypresses as keycode since last check
         * 
         * @return std::shared_ptr<int> : array of keypresses pushed since last check 
         */
        virtual std::vector<int> getKeyPresses()=0;
        /**
         * @brief gets last click to occur, as an object
         * 
         * @return click 
         */
        virtual click getLastClick()=0;
};

#endif // !1ABSTRACT_INPUT_WRAPPER
