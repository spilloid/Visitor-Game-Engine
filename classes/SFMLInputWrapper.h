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
