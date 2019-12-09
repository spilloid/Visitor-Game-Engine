---
search:
    keywords: ['WrapBoundsVisitor', 'WrapBoundsVisitor', 'visit']
---

# class WrapBoundsVisitor

[**Class List**](annotated.md) **>** [**WrapBoundsVisitor**](class_wrap_bounds_visitor.md)




Inherits the following classes: **[Visitor](class_visitor.md)**

## Public Functions

|Type|Name|
|-----|-----|
||[**WrapBoundsVisitor**](class_wrap_bounds_visitor.md#1a988575b85dc0c37c9dc24773e9259fc7) (int minX, int maxX, int minY, int maxY) <br>Construct a new Wrap Bounds **[Visitor](class_visitor.md)** object. |
|virtual void|[**visit**](class_wrap_bounds_visitor.md#1a46f7e9f34d56ae845b38b71fe928cca9) (std::shared\_ptr< **[Sprite](class_sprite.md)** > s) override <br>if sprite is outside of bounds, move it into bounds then have it WRAP |


## Public Functions Documentation

### function <a id="1a988575b85dc0c37c9dc24773e9259fc7" href="#1a988575b85dc0c37c9dc24773e9259fc7">WrapBoundsVisitor</a>

```cpp
WrapBoundsVisitor::WrapBoundsVisitor (
    int minX,
    int maxX,
    int minY,
    int maxY
)
```

Construct a new Wrap Bounds **[Visitor](class_visitor.md)** object. 



**Parameters:**


* **minX** minimum X of sprite 
* **maxX** maximum X of sprite 
* **minY** minimum Y of sprite 
* **maxY** maximum Y of sprite 



### function <a id="1a46f7e9f34d56ae845b38b71fe928cca9" href="#1a46f7e9f34d56ae845b38b71fe928cca9">visit</a>

```cpp
virtual void WrapBoundsVisitor::visit (
    std::shared_ptr< Sprite > s
)
```

if sprite is outside of bounds, move it into bounds then have it WRAP 



**Parameters:**


* **s** 



Implements **[Visitor::visit](class_visitor.md#1af941b9cd719ad5d43bb21310fb0795eb)**




----------------------------------------
The documentation for this class was generated from the following file: `classes/WrapBoundsVisitor.h`
