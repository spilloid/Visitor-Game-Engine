---
search:
    keywords: ['ForceVisitor', 'visit', 'applyForce', 'stop']
---

# class ForceVisitor

[**Class List**](annotated.md) **>** [**ForceVisitor**](class_force_visitor.md)




Inherits the following classes: **[Visitor](class_visitor.md)**

## Public Functions

|Type|Name|
|-----|-----|
|virtual void|[**visit**](class_force_visitor.md#1a31b87fc4fa7f6ec429abd8d305189c7d) (std::shared\_ptr< **[Sprite](class_sprite.md)** > s) override <br>update force data on sprite (move it dx/dy) |


## Public Static Functions

|Type|Name|
|-----|-----|
|static void|[**applyForce**](class_force_visitor.md#1a2849e388698ccad7b92d70c9a62004c7) (const std::shared\_ptr< **[Sprite](class_sprite.md)** > & s, double magnitude, float angle) <br>apply a force to the sprite |
|static void|[**stop**](class_force_visitor.md#1a1b541137dff68c59fb10e9d8ccf49631) (const std::shared\_ptr< **[Sprite](class_sprite.md)** > & s) <br>Stop the sprite from moving. |


## Public Functions Documentation

### function <a id="1a31b87fc4fa7f6ec429abd8d305189c7d" href="#1a31b87fc4fa7f6ec429abd8d305189c7d">visit</a>

```cpp
virtual void ForceVisitor::visit (
    std::shared_ptr< Sprite > s
)
```

update force data on sprite (move it dx/dy) 



**Parameters:**


* **s** 



Implements **[Visitor::visit](class_visitor.md#1af941b9cd719ad5d43bb21310fb0795eb)**


## Public Static Functions Documentation

### function <a id="1a2849e388698ccad7b92d70c9a62004c7" href="#1a2849e388698ccad7b92d70c9a62004c7">applyForce</a>

```cpp
static void ForceVisitor::applyForce (
    const std::shared_ptr< Sprite > & s,
    double magnitude,
    float angle
)
```

apply a force to the sprite 



**Parameters:**


* **s** sprite to be operated on 
* **magnitude** force magnitude 
* **angle** angle of operation, in degrees 



### function <a id="1a1b541137dff68c59fb10e9d8ccf49631" href="#1a1b541137dff68c59fb10e9d8ccf49631">stop</a>

```cpp
static void ForceVisitor::stop (
    const std::shared_ptr< Sprite > & s
)
```

Stop the sprite from moving. 



**Parameters:**


* **s** 





----------------------------------------
The documentation for this class was generated from the following file: `classes/ForceVisitor.h`
