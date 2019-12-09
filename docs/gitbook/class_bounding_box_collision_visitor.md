---
search:
    keywords: ['BoundingBoxCollisionVisitor', 'BoundingBoxCollisionVisitor', 'visit']
---

# class BoundingBoxCollisionVisitor

[**Class List**](annotated.md) **>** [**BoundingBoxCollisionVisitor**](class_bounding_box_collision_visitor.md)




Inherits the following classes: **[AbstractCollisionVisitor](class_abstract_collision_visitor.md)**

## Public Functions

|Type|Name|
|-----|-----|
||[**BoundingBoxCollisionVisitor**](class_bounding_box_collision_visitor.md#1a36c48ca3b6f9f94d1113a17d27016b92) () |
|virtual void|[**visit**](class_bounding_box_collision_visitor.md#1a3c6f65b79cb857a00e75382d7cd1e365) (std::shared\_ptr< **[Sprite](class_sprite.md)** > s) override <br>update currently colliding list based on algorithm |


## Public Functions Documentation

### function <a id="1a36c48ca3b6f9f94d1113a17d27016b92" href="#1a36c48ca3b6f9f94d1113a17d27016b92">BoundingBoxCollisionVisitor</a>

```cpp
BoundingBoxCollisionVisitor::BoundingBoxCollisionVisitor ()
```



### function <a id="1a3c6f65b79cb857a00e75382d7cd1e365" href="#1a3c6f65b79cb857a00e75382d7cd1e365">visit</a>

```cpp
virtual void BoundingBoxCollisionVisitor::visit (
    std::shared_ptr< Sprite > s
)
```

update currently colliding list based on algorithm 



**Parameters:**


* **s** 



Implements **[AbstractCollisionVisitor::visit](class_abstract_collision_visitor.md#1a9ee08837ba4a531782bb9a1c8466a5b3)**




----------------------------------------
The documentation for this class was generated from the following file: `classes/BoundingBoxCollisionVisitor.h`
