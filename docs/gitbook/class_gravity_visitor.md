---
search:
    keywords: ['GravityVisitor', 'GravityVisitor', 'visit']
---

# class GravityVisitor

[**Class List**](annotated.md) **>** [**GravityVisitor**](class_gravity_visitor.md)




Inherits the following classes: **[Visitor](class_visitor.md)**

## Public Functions

|Type|Name|
|-----|-----|
||[**GravityVisitor**](class_gravity_visitor.md#1ae22e7ba086e20c0e33849798dc1898a4) (double intensity) <br>Construct a new Gravity **[Visitor](class_visitor.md)** object. |
|virtual void|[**visit**](class_gravity_visitor.md#1ae4b8bb78b47d9ab88d5c4b03d0d3816b) (std::shared\_ptr< **[Sprite](class_sprite.md)** >) override <br>add arbitrary dy up to move sprite simulating gravity |


## Public Functions Documentation

### function <a id="1ae22e7ba086e20c0e33849798dc1898a4" href="#1ae22e7ba086e20c0e33849798dc1898a4">GravityVisitor</a>

```cpp
explicit GravityVisitor::GravityVisitor (
    double intensity
)
```

Construct a new Gravity **[Visitor](class_visitor.md)** object. 



**Parameters:**


* **intensity** intensity of gravity 



### function <a id="1ae4b8bb78b47d9ab88d5c4b03d0d3816b" href="#1ae4b8bb78b47d9ab88d5c4b03d0d3816b">visit</a>

```cpp
virtual void GravityVisitor::visit (
    std::shared_ptr< Sprite > 
)
```

add arbitrary dy up to move sprite simulating gravity 


Implements **[Visitor::visit](class_visitor.md#1af941b9cd719ad5d43bb21310fb0795eb)**




----------------------------------------
The documentation for this class was generated from the following file: `classes/GravityVisitor.h`
