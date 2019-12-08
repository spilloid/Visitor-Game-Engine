#ifndef TEXTUREFACTORY_H
#define TEXTUREFACTORY_H
#include <map>
#include <memory>
#include <SFML/Graphics.hpp>
class TextureFactory{
    private:
    /**
     * @brief cache of textures to minimize ram usage
     * 
     */
        std::map <std::string,std::shared_ptr<sf::Texture>> cache;
    public:
        TextureFactory();

    /**
     * @brief cache the texture for access later, hard loads on each call
     *
     * @param s file location
     * @return bool True on success
     */
    bool loadTexture(const std::string &s);

    /**
     * @brief Get the Texture object, check if cached first
     *
     * @param s file location
     * @return std::shared_ptr<sf::Texture> Texture loaded from file
     */
    std::shared_ptr<sf::Texture> getTexture(const std::string &s);
};
#endif