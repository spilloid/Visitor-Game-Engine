---
search:
    keywords: ['BounceBoundsVisitor', 'BounceBoundsVisitor', 'visit']
---

# class BounceBoundsVisitor

[**Class List**](annotated.md) **>** [**BounceBoundsVisitor**](class_bounce_bounds_visitor.md)




Inherits the following classes: **[Visitor](class_visitor.md)**

## Public Functions

|Type|Name|
|-----|-----|
||[**BounceBoundsVisitor**](class_bounce_bounds_visitor.md#1a7123995ee7023ec20cab4b188e9602ff) (int minX, int maxX, int minY, int maxY) <br>Construct a new Bounce Bounds **[Visitor](class_visitor.md)** object. |
|virtual void|[**visit**](class_bounce_bounds_visitor.md#1a155ab3b2fd3f187daf63e640a08e74eb) (std::shared\_ptr< **[Sprite](class_sprite.md)** > sp) override <br>if sprite is outside of bounds, move it into bounds then have it BOUNCE |


## Public Functions Documentation

### function <a id="1a7123995ee7023ec20cab4b188e9602ff" href="#1a7123995ee7023ec20cab4b188e9602ff">BounceBoundsVisitor</a>

```cpp
BounceBoundsVisitor::BounceBoundsVisitor (
    int minX,
    int maxX,
    int minY,
    int maxY
)
```

Construct a new Bounce Bounds **[Visitor](class_visitor.md)** object. 



**Parameters:**


* **minX** minimum X of sprite 
* **maxX** maximum X of sprite 
* **minY** minimum Y of sprite 
* **maxY** maximum Y of sprite 



### function <a id="1a155ab3b2fd3f187daf63e640a08e74eb" href="#1a155ab3b2fd3f187daf63e640a08e74eb">visit</a>

```cpp
virtual void BounceBoundsVisitor::visit (
    std::shared_ptr< Sprite > sp
)
```

if sprite is outside of bounds, move it into bounds then have it BOUNCE 



**Parameters:**


* **sp** 



Implements **[Visitor::visit](class_visitor.md#1af941b9cd719ad5d43bb21310fb0795eb)**




----------------------------------------
The documentation for this class was generated from the following file: `classes/BounceBoundsVisitor.h`
