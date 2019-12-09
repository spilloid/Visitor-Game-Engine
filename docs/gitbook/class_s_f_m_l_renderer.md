---
search:
    keywords: ['SFMLRenderer', 'SFMLRenderer', 'draw', 'isOpen', 'getWindow']
---

# class SFMLRenderer

[**Class List**](annotated.md) **>** [**SFMLRenderer**](class_s_f_m_l_renderer.md)




Inherits the following classes: **[AbstractRenderer](class_abstract_renderer.md)**

## Public Functions

|Type|Name|
|-----|-----|
||[**SFMLRenderer**](class_s_f_m_l_renderer.md#1a8a3902b191d793e1899c1e72c47adc34) (unsigned int screenWidth, unsigned int screenHeight) <br>Construct a new **[SFMLRenderer](class_s_f_m_l_renderer.md)** object. |
|virtual void|[**draw**](class_s_f_m_l_renderer.md#1abc1185a02b26ea1758d48e89f0e81e39) (std::vector< std::shared\_ptr< **[Sprite](class_sprite.md)** >> renderList) override |
|virtual bool|[**isOpen**](class_s_f_m_l_renderer.md#1a5b89b3ce189fe0156759c8f667470942) () override |
|std::shared\_ptr< sf::RenderWindow >|[**getWindow**](class_s_f_m_l_renderer.md#1a935c28d7fba581c65990eeacf547eb0e) () <br>Get the Window object. |


## Public Functions Documentation

### function <a id="1a8a3902b191d793e1899c1e72c47adc34" href="#1a8a3902b191d793e1899c1e72c47adc34">SFMLRenderer</a>

```cpp
SFMLRenderer::SFMLRenderer (
    unsigned int screenWidth,
    unsigned int screenHeight
)
```

Construct a new **[SFMLRenderer](class_s_f_m_l_renderer.md)** object. 



**Parameters:**


* **screenWidth** 
* **screenHeight** 



### function <a id="1abc1185a02b26ea1758d48e89f0e81e39" href="#1abc1185a02b26ea1758d48e89f0e81e39">draw</a>

```cpp
virtual void SFMLRenderer::draw (
    std::vector< std::shared_ptr< Sprite >> renderList
)
```




**Parameters:**


* **renderList** draws all items in render list to screen 



Implements **[AbstractRenderer::draw](class_abstract_renderer.md#1a0007e3bb5ccabf279a2db89182a0efdb)**


### function <a id="1a5b89b3ce189fe0156759c8f667470942" href="#1a5b89b3ce189fe0156759c8f667470942">isOpen</a>

```cpp
virtual bool SFMLRenderer::isOpen ()
```




**Returns:**

is the window open? 




Implements **[AbstractRenderer::isOpen](class_abstract_renderer.md#1a9342a6cd4986f8362b54f6c13e7ae0d3)**


### function <a id="1a935c28d7fba581c65990eeacf547eb0e" href="#1a935c28d7fba581c65990eeacf547eb0e">getWindow</a>

```cpp
std::shared_ptr< sf::RenderWindow > SFMLRenderer::getWindow ()
```

Get the Window object. 



**Returns:**

std::shared\_ptr<sf::Window> 






----------------------------------------
The documentation for this class was generated from the following file: `classes/SFMLRenderer.h`
