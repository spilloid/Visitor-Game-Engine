---
search:
    keywords: ['AbstractCollisionVisitor', 'collisions', 'watched', 'visit', 'getCollisions', 'setWatched']
---

# class AbstractCollisionVisitor

[**Class List**](annotated.md) **>** [**AbstractCollisionVisitor**](class_abstract_collision_visitor.md)


Provides an abstraction for handling visitor based collisions where algorithm is separate from visitation. 


Inherits the following classes: **[Visitor](class_visitor.md)**



Inherited by the following classes: **[BoundingBoxCollisionVisitor](class_bounding_box_collision_visitor.md)**, **[RayCastCollisionVisitor](class_ray_cast_collision_visitor.md)**

## Protected Attributes

|Type|Name|
|-----|-----|
|std::list< std::shared\_ptr< **[Sprite](class_sprite.md)** > >|[**collisions**](class_abstract_collision_visitor.md#1a812239222979d680afd12fb35fe2e132)<br>list of sprites colliding with watched since last check |
|std::shared\_ptr< **[Sprite](class_sprite.md)** >|[**watched**](class_abstract_collision_visitor.md#1aeeaa2ebce5b6c29df1c3fcf285aa7d82)<br>sprite to watch and compare for collisions |


## Public Functions

|Type|Name|
|-----|-----|
|virtual void|[**visit**](class_abstract_collision_visitor.md#1a9ee08837ba4a531782bb9a1c8466a5b3) (std::shared\_ptr< **[Sprite](class_sprite.md)** > s) override = 0<br>update currently colliding list based on algorithm |
|std::list< std::shared\_ptr< **[Sprite](class_sprite.md)** > >|[**getCollisions**](class_abstract_collision_visitor.md#1afb4c52cacaaf486be84e8b527cec202a) () |
|void|[**setWatched**](class_abstract_collision_visitor.md#1a17262b2403c9e1b0e11f25603dd415d6) (std::shared\_ptr< **[Sprite](class_sprite.md)** > s) <br>Set the Watched object. |


## Protected Attributes Documentation

### variable <a id="1a812239222979d680afd12fb35fe2e132" href="#1a812239222979d680afd12fb35fe2e132">collisions</a>

```cpp
std::list<std::shared_ptr<Sprite> > AbstractCollisionVisitor::collisions;
```

list of sprites colliding with watched since last check 


### variable <a id="1aeeaa2ebce5b6c29df1c3fcf285aa7d82" href="#1aeeaa2ebce5b6c29df1c3fcf285aa7d82">watched</a>

```cpp
std::shared_ptr<Sprite> AbstractCollisionVisitor::watched;
```

sprite to watch and compare for collisions 


## Public Functions Documentation

### function <a id="1a9ee08837ba4a531782bb9a1c8466a5b3" href="#1a9ee08837ba4a531782bb9a1c8466a5b3">visit</a>

```cpp
virtual void AbstractCollisionVisitor::visit (
    std::shared_ptr< Sprite > s
) = 0
```

update currently colliding list based on algorithm 



**Parameters:**


* **s** 



Implements **[Visitor::visit](class_visitor.md#1af941b9cd719ad5d43bb21310fb0795eb)**


### function <a id="1afb4c52cacaaf486be84e8b527cec202a" href="#1afb4c52cacaaf486be84e8b527cec202a">getCollisions</a>

```cpp
std::list< std::shared_ptr< Sprite > > AbstractCollisionVisitor::getCollisions ()
```




**Returns:**

std::list<Sprite\*> list of all sprites that collided with watched since last check 




### function <a id="1a17262b2403c9e1b0e11f25603dd415d6" href="#1a17262b2403c9e1b0e11f25603dd415d6">setWatched</a>

```cpp
void AbstractCollisionVisitor::setWatched (
    std::shared_ptr< Sprite > s
)
```

Set the Watched object. 



**Parameters:**


* **s** 





----------------------------------------
The documentation for this class was generated from the following file: `classes/AbstractCollisionVisitor.h`
