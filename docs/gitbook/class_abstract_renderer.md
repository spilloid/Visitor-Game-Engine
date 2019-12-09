---
search:
    keywords: ['AbstractRenderer', 'open', 'screenHeight', 'screenWidth', 'getHeight', 'getWidth', 'isOpen', 'draw']
---

# class AbstractRenderer

[**Class List**](annotated.md) **>** [**AbstractRenderer**](class_abstract_renderer.md)




Inherited by the following classes: **[SFMLRenderer](class_s_f_m_l_renderer.md)**

## Protected Attributes

|Type|Name|
|-----|-----|
|bool|[**open**](class_abstract_renderer.md#1a7de8e73874d912196d1dda80548ec044)|
|unsigned int|[**screenHeight**](class_abstract_renderer.md#1a4cab2964f09c3873d8dac8d8baa60661)|
|unsigned int|[**screenWidth**](class_abstract_renderer.md#1a7001efd6b8a6d30927f6a0149a13cb01)|


## Public Functions

|Type|Name|
|-----|-----|
|virtual unsigned int|[**getHeight**](class_abstract_renderer.md#1a18a159d52012a3958c7c127de659d122) () |
|virtual unsigned int|[**getWidth**](class_abstract_renderer.md#1a3804773250d1c39f1d1fc29e6f72efe3) () |
|virtual bool|[**isOpen**](class_abstract_renderer.md#1a9342a6cd4986f8362b54f6c13e7ae0d3) () = 0|
|virtual void|[**draw**](class_abstract_renderer.md#1a0007e3bb5ccabf279a2db89182a0efdb) (std::vector< std::shared\_ptr< **[Sprite](class_sprite.md)** >> renderList) = 0|


## Protected Attributes Documentation

### variable <a id="1a7de8e73874d912196d1dda80548ec044" href="#1a7de8e73874d912196d1dda80548ec044">open</a>

```cpp
bool AbstractRenderer::open;
```



### variable <a id="1a4cab2964f09c3873d8dac8d8baa60661" href="#1a4cab2964f09c3873d8dac8d8baa60661">screenHeight</a>

```cpp
unsigned int AbstractRenderer::screenHeight;
```



### variable <a id="1a7001efd6b8a6d30927f6a0149a13cb01" href="#1a7001efd6b8a6d30927f6a0149a13cb01">screenWidth</a>

```cpp
unsigned int AbstractRenderer::screenWidth;
```



## Public Functions Documentation

### function <a id="1a18a159d52012a3958c7c127de659d122" href="#1a18a159d52012a3958c7c127de659d122">getHeight</a>

```cpp
virtual unsigned int AbstractRenderer::getHeight ()
```



### function <a id="1a3804773250d1c39f1d1fc29e6f72efe3" href="#1a3804773250d1c39f1d1fc29e6f72efe3">getWidth</a>

```cpp
virtual unsigned int AbstractRenderer::getWidth ()
```



### function <a id="1a9342a6cd4986f8362b54f6c13e7ae0d3" href="#1a9342a6cd4986f8362b54f6c13e7ae0d3">isOpen</a>

```cpp
virtual bool AbstractRenderer::isOpen () = 0
```



### function <a id="1a0007e3bb5ccabf279a2db89182a0efdb" href="#1a0007e3bb5ccabf279a2db89182a0efdb">draw</a>

```cpp
virtual void AbstractRenderer::draw (
    std::vector< std::shared_ptr< Sprite >> renderList
) = 0
```





----------------------------------------
The documentation for this class was generated from the following file: `classes/AbstractRenderer.h`
