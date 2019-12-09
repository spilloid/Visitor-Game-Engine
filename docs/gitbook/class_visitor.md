---
search:
    keywords: ['Visitor', 'visit']
---

# class Visitor

[**Class List**](annotated.md) **>** [**Visitor**](class_visitor.md)




Inherited by the following classes: **[AbstractCollisionVisitor](class_abstract_collision_visitor.md)**, **[AbstractDrawingVisitor](class_abstract_drawing_visitor.md)**, **[BounceBoundsVisitor](class_bounce_bounds_visitor.md)**, **[ForceVisitor](class_force_visitor.md)**, **[GravityVisitor](class_gravity_visitor.md)**, **[WrapBoundsVisitor](class_wrap_bounds_visitor.md)**

## Public Functions

|Type|Name|
|-----|-----|
|virtual void|[**visit**](class_visitor.md#1af941b9cd719ad5d43bb21310fb0795eb) (std::shared\_ptr< **[Sprite](class_sprite.md)** > sp) = 0<br>visit sprite |


## Public Functions Documentation

### function <a id="1af941b9cd719ad5d43bb21310fb0795eb" href="#1af941b9cd719ad5d43bb21310fb0795eb">visit</a>

```cpp
virtual void Visitor::visit (
    std::shared_ptr< Sprite > sp
) = 0
```

visit sprite 



**Parameters:**


* **sp** 





----------------------------------------
The documentation for this class was generated from the following file: `classes/Visitor.h`
