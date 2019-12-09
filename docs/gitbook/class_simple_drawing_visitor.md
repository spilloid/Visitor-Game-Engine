---
search:
    keywords: ['SimpleDrawingVisitor', 'SimpleDrawingVisitor', 'visit', 'isOpen', 'draw']
---

# class SimpleDrawingVisitor

[**Class List**](annotated.md) **>** [**SimpleDrawingVisitor**](class_simple_drawing_visitor.md)




Inherits the following classes: **[AbstractDrawingVisitor](class_abstract_drawing_visitor.md)**

## Public Functions

|Type|Name|
|-----|-----|
||[**SimpleDrawingVisitor**](class_simple_drawing_visitor.md#1a81fbd8aa6a098d1dad0152658a15d103) (std::shared\_ptr< **[AbstractRenderer](class_abstract_renderer.md)** > renderer) <br>Construct a new **[SimpleDrawingVisitor](class_simple_drawing_visitor.md)** object. |
|virtual void|[**visit**](class_simple_drawing_visitor.md#1ad87126c3a56da728da1cf72d326d28ee) (std::shared\_ptr< **[Sprite](class_sprite.md)** > s) override <br>Caches sprite for next draw. |
|virtual bool|[**isOpen**](class_simple_drawing_visitor.md#1af73054a881c2cd62e2482e05e767bb7c) () override <br>check if window is open |
|virtual void|[**draw**](class_simple_drawing_visitor.md#1a36a45596ebf8c96e6e9e60b84caf404f) () override <br>draw all sprites from scene to screen; clears renderList |


## Public Functions Documentation

### function <a id="1a81fbd8aa6a098d1dad0152658a15d103" href="#1a81fbd8aa6a098d1dad0152658a15d103">SimpleDrawingVisitor</a>

```cpp
explicit SimpleDrawingVisitor::SimpleDrawingVisitor (
    std::shared_ptr< AbstractRenderer > renderer
)
```

Construct a new **[SimpleDrawingVisitor](class_simple_drawing_visitor.md)** object. 



**Parameters:**


* **renderer** that which draws to things 



### function <a id="1ad87126c3a56da728da1cf72d326d28ee" href="#1ad87126c3a56da728da1cf72d326d28ee">visit</a>

```cpp
virtual void SimpleDrawingVisitor::visit (
    std::shared_ptr< Sprite > s
)
```

Caches sprite for next draw. 



**Parameters:**


* **s** sprite to visit 



Implements **[AbstractDrawingVisitor::visit](class_abstract_drawing_visitor.md#1a173022c880329a1203eb8243816dbcd4)**


### function <a id="1af73054a881c2cd62e2482e05e767bb7c" href="#1af73054a881c2cd62e2482e05e767bb7c">isOpen</a>

```cpp
virtual bool SimpleDrawingVisitor::isOpen ()
```

check if window is open 



**Returns:**

true yep 




**Returns:**

false nope 




Implements **[AbstractDrawingVisitor::isOpen](class_abstract_drawing_visitor.md#1ae9abaeedd78440c6a0cccf6e36020602)**


### function <a id="1a36a45596ebf8c96e6e9e60b84caf404f" href="#1a36a45596ebf8c96e6e9e60b84caf404f">draw</a>

```cpp
virtual void SimpleDrawingVisitor::draw ()
```

draw all sprites from scene to screen; clears renderList 


Implements **[AbstractDrawingVisitor::draw](class_abstract_drawing_visitor.md#1a08ecda9a55f34afbfa1797be9bd115ea)**




----------------------------------------
The documentation for this class was generated from the following file: `classes/SimpleDrawingVisitor.h`
