#include "SFMLRenderer.h"
SFMLRenderer::SFMLRenderer(int screenWidth, int screenHeight)
:open(true)
{
    this->screenWidth = screenWidth;
    this->screenHeight = screenHeight;
    this->window =
        std::make_shared<sf::RenderWindow>(sf::VideoMode(screenWidth, screenHeight), "Game");

    this->tf = std::make_shared<TextureFactory>();
}
void SFMLRenderer::draw(std::vector<std::shared_ptr<SpriteProxy>> renderList)
{
    // 1. REFRESH SCREEN
    this->window->clear(sf::Color::White);
    //iterate over sprite list
    for (auto spriteIterator = renderList.begin(); spriteIterator != renderList.end(); spriteIterator++)
    {
        std::shared_ptr<SpriteProxy> i = *spriteIterator;
        std::shared_ptr<sf::Sprite> temp = std::make_shared<sf::Sprite>();
        temp->setTexture(*this->tf->getTexture(i->getTextureLocation()));
        temp->setTextureRect(sf::IntRect(0, 0, i->getWidth(), i->getHeight()));
        temp->setPosition(i->getX(), i->getY());
        this->window->draw(*temp);
    }
    this->window->display();
}
bool SFMLRenderer::isOpen()
{
    if (this->window->isOpen())
    {
        sf::Event event;
        // TODO: explore way to watch for events on window smarter....
        //perhaps multithreading?
        if (this->window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                this->window->close();
                this->open = false;
            } // end if; window is closed
        }     // end if ; check event poll
        return this->open;
    }else
    {
        return false;
    }
    
}
std::shared_ptr<sf::Window> SFMLRenderer::getWindow(){
    return this->window;
}