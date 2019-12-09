---
search:
    keywords: ['RayCastCollisionVisitor']
---

# class RayCastCollisionVisitor

[**Class List**](annotated.md) **>** [**RayCastCollisionVisitor**](class_ray_cast_collision_visitor.md)




Inherits the following classes: **[AbstractCollisionVisitor](class_abstract_collision_visitor.md)**

## Additional Inherited Members

#### Protected Attributes inherited from [AbstractCollisionVisitor](class_abstract_collision_visitor.md)

|Type|Name|
|-----|-----|
|std::list< std::shared\_ptr< **[Sprite](class_sprite.md)** > >|[**collisions**](class_abstract_collision_visitor.md#1a812239222979d680afd12fb35fe2e132)<br>list of sprites colliding with watched since last check |
|std::shared\_ptr< **[Sprite](class_sprite.md)** >|[**watched**](class_abstract_collision_visitor.md#1aeeaa2ebce5b6c29df1c3fcf285aa7d82)<br>sprite to watch and compare for collisions |


#### Public Functions inherited from [AbstractCollisionVisitor](class_abstract_collision_visitor.md)

|Type|Name|
|-----|-----|
|virtual void|[**visit**](class_abstract_collision_visitor.md#1a9ee08837ba4a531782bb9a1c8466a5b3) (std::shared\_ptr< **[Sprite](class_sprite.md)** > s) override = 0<br>update currently colliding list based on algorithm |
|std::list< std::shared\_ptr< **[Sprite](class_sprite.md)** > >|[**getCollisions**](class_abstract_collision_visitor.md#1afb4c52cacaaf486be84e8b527cec202a) () |
|void|[**setWatched**](class_abstract_collision_visitor.md#1a17262b2403c9e1b0e11f25603dd415d6) (std::shared\_ptr< **[Sprite](class_sprite.md)** > s) <br>Set the Watched object. |




----------------------------------------
The documentation for this class was generated from the following file: `classes/RayCastCollisionVisitor.h`
