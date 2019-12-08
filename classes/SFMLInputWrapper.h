#ifndef SFMLINPUTWRAPPER
#define SFMLINPUTWRAPPER
#include "AbstractInputWrapper.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
class SFMLInputWrapper : public AbstractInputWrapper{
    private:
        std::shared_ptr<sf::RenderWindow> window;
    public:
    SFMLInputWrapper(std::shared_ptr<sf::RenderWindow> w);
        std::vector<int> getKeyPresses();
        click getLastClick();
};
#endif //INPUTWRAPPER
