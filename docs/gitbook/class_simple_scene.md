---
search:
    keywords: ['SimpleScene', 'SimpleScene', '~SimpleScene', 'addSprite', 'accept']
---

# class SimpleScene

[**Class List**](annotated.md) **>** [**SimpleScene**](class_simple_scene.md)




Inherits the following classes: **[AbstractScene](class_abstract_scene.md)**

## Public Functions

|Type|Name|
|-----|-----|
||[**SimpleScene**](class_simple_scene.md#1a4c1488dffd5429e86e1c595961cedd79) () <br>Construct a new Scene object. |
||[**~SimpleScene**](class_simple_scene.md#1a50a4c34576a09596905a59f4db5802ea) () <br>Destroy the Scene object. |
|virtual void|[**addSprite**](class_simple_scene.md#1a245e8567ad1a38d575596e7ed298d2c5) (std::shared\_ptr< **[Sprite](class_sprite.md)** > s) override <br>add a sprite to the scene |
|virtual void|[**accept**](class_simple_scene.md#1a2f56ea6a9c5e2112bc77c30da72c7d64) (std::shared\_ptr< **[Visitor](class_visitor.md)** > v) override <br>iterate through sprites in scene letting each visitor visit sprites |


## Public Functions Documentation

### function <a id="1a4c1488dffd5429e86e1c595961cedd79" href="#1a4c1488dffd5429e86e1c595961cedd79">SimpleScene</a>

```cpp
SimpleScene::SimpleScene ()
```

Construct a new Scene object. 


### function <a id="1a50a4c34576a09596905a59f4db5802ea" href="#1a50a4c34576a09596905a59f4db5802ea">~SimpleScene</a>

```cpp
SimpleScene::~SimpleScene ()
```

Destroy the Scene object. 


### function <a id="1a245e8567ad1a38d575596e7ed298d2c5" href="#1a245e8567ad1a38d575596e7ed298d2c5">addSprite</a>

```cpp
virtual void SimpleScene::addSprite (
    std::shared_ptr< Sprite > s
)
```

add a sprite to the scene 



**Parameters:**


* **s** 



Implements **[AbstractScene::addSprite](class_abstract_scene.md#1aa3915747c431f6428c02f0387dd6386e)**


### function <a id="1a2f56ea6a9c5e2112bc77c30da72c7d64" href="#1a2f56ea6a9c5e2112bc77c30da72c7d64">accept</a>

```cpp
virtual void SimpleScene::accept (
    std::shared_ptr< Visitor > v
)
```

iterate through sprites in scene letting each visitor visit sprites 



**Parameters:**


* **v** 



Implements **[AbstractScene::accept](class_abstract_scene.md#1a38f6278adc5d3235296ed8012ea66ea7)**




----------------------------------------
The documentation for this class was generated from the following file: `classes/SimpleScene.h`
