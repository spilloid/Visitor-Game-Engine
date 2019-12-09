---
search:
    keywords: ['AbstractDrawingVisitor', 'open', 'renderer', 'draw', 'isOpen', 'visit']
---

# class AbstractDrawingVisitor

[**Class List**](annotated.md) **>** [**AbstractDrawingVisitor**](class_abstract_drawing_visitor.md)




Inherits the following classes: **[Visitor](class_visitor.md)**



Inherited by the following classes: **[GridDrawingVisitor](class_grid_drawing_visitor.md)**, **[SimpleDrawingVisitor](class_simple_drawing_visitor.md)**

## Protected Attributes

|Type|Name|
|-----|-----|
|bool|[**open**](class_abstract_drawing_visitor.md#1ab7279a5b1e74c95b06fb086614727b2d)|
|std::shared\_ptr< **[AbstractRenderer](class_abstract_renderer.md)** >|[**renderer**](class_abstract_drawing_visitor.md#1a0a43744af979bff82123dee3faf68c8d)|


## Public Functions

|Type|Name|
|-----|-----|
|virtual void|[**draw**](class_abstract_drawing_visitor.md#1a08ecda9a55f34afbfa1797be9bd115ea) () = 0<br>Draw cache to screen. |
|virtual bool|[**isOpen**](class_abstract_drawing_visitor.md#1ae9abaeedd78440c6a0cccf6e36020602) () = 0<br>is the screen window open? |
|virtual void|[**visit**](class_abstract_drawing_visitor.md#1a173022c880329a1203eb8243816dbcd4) (std::shared\_ptr< **[Sprite](class_sprite.md)** > s) override = 0<br>cache a sprite for later drawing |


## Protected Attributes Documentation

### variable <a id="1ab7279a5b1e74c95b06fb086614727b2d" href="#1ab7279a5b1e74c95b06fb086614727b2d">open</a>

```cpp
bool AbstractDrawingVisitor::open;
```



### variable <a id="1a0a43744af979bff82123dee3faf68c8d" href="#1a0a43744af979bff82123dee3faf68c8d">renderer</a>

```cpp
std::shared_ptr<AbstractRenderer> AbstractDrawingVisitor::renderer;
```



## Public Functions Documentation

### function <a id="1a08ecda9a55f34afbfa1797be9bd115ea" href="#1a08ecda9a55f34afbfa1797be9bd115ea">draw</a>

```cpp
virtual void AbstractDrawingVisitor::draw () = 0
```

Draw cache to screen. 


### function <a id="1ae9abaeedd78440c6a0cccf6e36020602" href="#1ae9abaeedd78440c6a0cccf6e36020602">isOpen</a>

```cpp
virtual bool AbstractDrawingVisitor::isOpen () = 0
```

is the screen window open? 



**Returns:**

true 




**Returns:**

false 




### function <a id="1a173022c880329a1203eb8243816dbcd4" href="#1a173022c880329a1203eb8243816dbcd4">visit</a>

```cpp
virtual void AbstractDrawingVisitor::visit (
    std::shared_ptr< Sprite > s
) = 0
```

cache a sprite for later drawing 



**Parameters:**


* **s** 



Implements **[Visitor::visit](class_visitor.md#1af941b9cd719ad5d43bb21310fb0795eb)**




----------------------------------------
The documentation for this class was generated from the following file: `classes/AbstractDrawingVisitor.h`
