---
search:
    keywords: ['TextureFactory', 'TextureFactory', 'loadTexture', 'getTexture']
---

# class TextureFactory

[**Class List**](annotated.md) **>** [**TextureFactory**](class_texture_factory.md)


## Public Functions

|Type|Name|
|-----|-----|
||[**TextureFactory**](class_texture_factory.md#1a8f929f76381d8b9790188b0ceb1bce62) () |
|bool|[**loadTexture**](class_texture_factory.md#1aab66db80def7130338f9f0862717ac5b) (const std::string & s) <br>cache the texture for access later, hard loads on each call |
|std::shared\_ptr< sf::Texture >|[**getTexture**](class_texture_factory.md#1ad01083de75eea082788b29dcbf5605df) (const std::string & s) <br>Get the Texture object, check if cached first. |


## Public Functions Documentation

### function <a id="1a8f929f76381d8b9790188b0ceb1bce62" href="#1a8f929f76381d8b9790188b0ceb1bce62">TextureFactory</a>

```cpp
TextureFactory::TextureFactory ()
```



### function <a id="1aab66db80def7130338f9f0862717ac5b" href="#1aab66db80def7130338f9f0862717ac5b">loadTexture</a>

```cpp
bool TextureFactory::loadTexture (
    const std::string & s
)
```

cache the texture for access later, hard loads on each call 



**Parameters:**


* **s** file location 



**Returns:**

bool True on success 




### function <a id="1ad01083de75eea082788b29dcbf5605df" href="#1ad01083de75eea082788b29dcbf5605df">getTexture</a>

```cpp
std::shared_ptr< sf::Texture > TextureFactory::getTexture (
    const std::string & s
)
```

Get the Texture object, check if cached first. 



**Parameters:**


* **s** file location 



**Returns:**

std::shared\_ptr<sf::Texture> Texture loaded from file 






----------------------------------------
The documentation for this class was generated from the following file: `classes/TextureFactory.h`
