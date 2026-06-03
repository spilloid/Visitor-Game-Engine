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
    if (f != this->cache.end())
        return f->second;
    // Not cached yet: try to load it. On failure return nullptr instead of
    // letting operator[] insert (and later dereference) a null entry.
    if (this->loadTexture(fileLoc))
        return this->cache[fileLoc];
    return nullptr;
}
