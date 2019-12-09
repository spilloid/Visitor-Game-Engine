---
search:
    keywords: ['GridDrawingVisitor', 'GridDrawingVisitor', 'draw', 'isOpen', 'visit']
---

# class GridDrawingVisitor

[**Class List**](annotated.md) **>** [**GridDrawingVisitor**](class_grid_drawing_visitor.md)




Inherits the following classes: **[AbstractDrawingVisitor](class_abstract_drawing_visitor.md)**

## Public Functions

|Type|Name|
|-----|-----|
||[**GridDrawingVisitor**](class_grid_drawing_visitor.md#1a0ca662fa97695ca52caab304e8610a9d) (int maxX, int maxY, std::shared\_ptr< **[AbstractRenderer](class_abstract_renderer.md)** > ar) <br>Construct a new Grid Drawing **[Visitor](class_visitor.md)** object. |
|virtual void|[**draw**](class_grid_drawing_visitor.md#1a7f0ac122f11dd3b5918e99b10da1f920) () override <br>Draw cache to screen. |
|virtual bool|[**isOpen**](class_grid_drawing_visitor.md#1ab81d77ac87bdff6eb945767686eebf70) () override <br>is the screen window open? |
|virtual void|[**visit**](class_grid_drawing_visitor.md#1acdf1185e8a82d2a8495d8c18b65ee2b2) (std::shared\_ptr< **[Sprite](class_sprite.md)** > s) override <br>cache a sprite for later drawing |


## Public Functions Documentation

### function <a id="1a0ca662fa97695ca52caab304e8610a9d" href="#1a0ca662fa97695ca52caab304e8610a9d">GridDrawingVisitor</a>

```cpp
GridDrawingVisitor::GridDrawingVisitor (
    int maxX,
    int maxY,
    std::shared_ptr< AbstractRenderer > ar
)
```

Construct a new Grid Drawing **[Visitor](class_visitor.md)** object. 



**Parameters:**


* **maxX** : size of grid for X direction 
* **maxY** : size of grid for Y direction 
* **ar** : abstract renderer 



### function <a id="1a7f0ac122f11dd3b5918e99b10da1f920" href="#1a7f0ac122f11dd3b5918e99b10da1f920">draw</a>

```cpp
virtual void GridDrawingVisitor::draw ()
```

Draw cache to screen. 


Implements **[AbstractDrawingVisitor::draw](class_abstract_drawing_visitor.md#1a08ecda9a55f34afbfa1797be9bd115ea)**


### function <a id="1ab81d77ac87bdff6eb945767686eebf70" href="#1ab81d77ac87bdff6eb945767686eebf70">isOpen</a>

```cpp
virtual bool GridDrawingVisitor::isOpen ()
```

is the screen window open? 



**Returns:**

true 




**Returns:**

false 




Implements **[AbstractDrawingVisitor::isOpen](class_abstract_drawing_visitor.md#1ae9abaeedd78440c6a0cccf6e36020602)**


### function <a id="1acdf1185e8a82d2a8495d8c18b65ee2b2" href="#1acdf1185e8a82d2a8495d8c18b65ee2b2">visit</a>

```cpp
virtual void GridDrawingVisitor::visit (
    std::shared_ptr< Sprite > s
)
```

cache a sprite for later drawing 



**Parameters:**


* **s** 



Implements **[AbstractDrawingVisitor::visit](class_abstract_drawing_visitor.md#1a173022c880329a1203eb8243816dbcd4)**




----------------------------------------
The documentation for this class was generated from the following file: `classes/GridDrawingVisitor.h`
