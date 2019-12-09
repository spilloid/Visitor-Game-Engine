---
search:
    keywords: ['AbstractScene', 'addSprite', 'accept']
---

# class AbstractScene

[**Class List**](annotated.md) **>** [**AbstractScene**](class_abstract_scene.md)




Inherited by the following classes: **[LayeredScene](class_layered_scene.md)**, **[SimpleScene](class_simple_scene.md)**

## Public Functions

|Type|Name|
|-----|-----|
|virtual void|[**addSprite**](class_abstract_scene.md#1aa3915747c431f6428c02f0387dd6386e) (std::shared\_ptr< **[Sprite](class_sprite.md)** > s) = 0<br>add a sprite to the scene |
|virtual void|[**accept**](class_abstract_scene.md#1a38f6278adc5d3235296ed8012ea66ea7) (std::shared\_ptr< **[Visitor](class_visitor.md)** > v) = 0<br>iterate through sprites in scene letting each visitor visit sprites |


## Public Functions Documentation

### function <a id="1aa3915747c431f6428c02f0387dd6386e" href="#1aa3915747c431f6428c02f0387dd6386e">addSprite</a>

```cpp
virtual void AbstractScene::addSprite (
    std::shared_ptr< Sprite > s
) = 0
```

add a sprite to the scene 



**Parameters:**


* **s** 



### function <a id="1a38f6278adc5d3235296ed8012ea66ea7" href="#1a38f6278adc5d3235296ed8012ea66ea7">accept</a>

```cpp
virtual void AbstractScene::accept (
    std::shared_ptr< Visitor > v
) = 0
```

iterate through sprites in scene letting each visitor visit sprites 



**Parameters:**


* **v** 





----------------------------------------
The documentation for this class was generated from the following file: `classes/AbstractScene.h`
