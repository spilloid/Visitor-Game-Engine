---
search:
    keywords: ['LayeredScene', 'LayeredScene', '~LayeredScene', 'addSprite', 'addSprite', 'accept']
---

# class LayeredScene

[**Class List**](annotated.md) **>** [**LayeredScene**](class_layered_scene.md)




Inherits the following classes: **[AbstractScene](class_abstract_scene.md)**

## Public Functions

|Type|Name|
|-----|-----|
||[**LayeredScene**](class_layered_scene.md#1ab8bcd5423dfc6e867ae09a59b750807e) () <br>Construct a new Scene object. |
||[**~LayeredScene**](class_layered_scene.md#1a019d144e8b2797dd3eb83293046b0625) () <br>Destroy the Scene object. |
|virtual void|[**addSprite**](class_layered_scene.md#1aa7749be2c9d1a016b56ac6dc65e5437f) (std::shared\_ptr< **[Sprite](class_sprite.md)** > s) override <br>add a sprite to the scene |
|void|[**addSprite**](class_layered_scene.md#1a4845c313e50329c70495b7a72d4aa2ec) (const std::shared\_ptr< **[Sprite](class_sprite.md)** > & s, int layerNumber) |
|virtual void|[**accept**](class_layered_scene.md#1a1e82a368797fb3e6fff57549707bd56e) (std::shared\_ptr< **[Visitor](class_visitor.md)** > v) override <br>iterate through sprites in scene letting each visitor visit sprites |


## Public Functions Documentation

### function <a id="1ab8bcd5423dfc6e867ae09a59b750807e" href="#1ab8bcd5423dfc6e867ae09a59b750807e">LayeredScene</a>

```cpp
LayeredScene::LayeredScene ()
```

Construct a new Scene object. 


### function <a id="1a019d144e8b2797dd3eb83293046b0625" href="#1a019d144e8b2797dd3eb83293046b0625">~LayeredScene</a>

```cpp
LayeredScene::~LayeredScene ()
```

Destroy the Scene object. 


### function <a id="1aa7749be2c9d1a016b56ac6dc65e5437f" href="#1aa7749be2c9d1a016b56ac6dc65e5437f">addSprite (1/2)</a>

```cpp
virtual void LayeredScene::addSprite (
    std::shared_ptr< Sprite > s
)
```

add a sprite to the scene 



**Parameters:**


* **s** 



Implements **[AbstractScene::addSprite](class_abstract_scene.md#1aa3915747c431f6428c02f0387dd6386e)**


### function <a id="1a4845c313e50329c70495b7a72d4aa2ec" href="#1a4845c313e50329c70495b7a72d4aa2ec">addSprite (2/2)</a>

```cpp
void LayeredScene::addSprite (
    const std::shared_ptr< Sprite > & s,
    int layerNumber
)
```



### function <a id="1a1e82a368797fb3e6fff57549707bd56e" href="#1a1e82a368797fb3e6fff57549707bd56e">accept</a>

```cpp
virtual void LayeredScene::accept (
    std::shared_ptr< Visitor > v
)
```

iterate through sprites in scene letting each visitor visit sprites 



**Parameters:**


* **v** 



Implements **[AbstractScene::accept](class_abstract_scene.md#1a38f6278adc5d3235296ed8012ea66ea7)**




----------------------------------------
The documentation for this class was generated from the following file: `classes/LayeredScene.h`
