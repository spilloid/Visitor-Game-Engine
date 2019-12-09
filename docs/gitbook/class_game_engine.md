---
search:
    keywords: ['GameEngine', 'GameEngine', '~GameEngine', 'addVisitor', 'addSprite', 'setScene', 'update']
---

# class GameEngine

[**Class List**](annotated.md) **>** [**GameEngine**](class_game_engine.md)


## Public Functions

|Type|Name|
|-----|-----|
||[**GameEngine**](class_game_engine.md#1a64c430f74d72e2745646fdbffbd97930) () <br>Construct a new **[Game](class_game.md)** Engine object. |
||[**~GameEngine**](class_game_engine.md#1a8e59d8341ef9d2dcc62eee1437e37f14) () <br>Destroy the **[Game](class_game.md)** Engine object. |
|void|[**addVisitor**](class_game_engine.md#1aab3035fb0f041131db9d237b3ebc5a7e) (const std::shared\_ptr< **[Visitor](class_visitor.md)** > &) <br>Add visitor operation for scene. |
|void|[**addSprite**](class_game_engine.md#1a353327a50e1016a448156d93a6941b8e) (std::shared\_ptr< **[Sprite](class_sprite.md)** >) <br>Add **[Sprite](class_sprite.md)** to scene. |
|void|[**setScene**](class_game_engine.md#1a3144fb41f147af39a281e18e41e84121) (std::shared\_ptr< **[AbstractScene](class_abstract_scene.md)** > as) <br>Set the Scene object. |
|void|[**update**](class_game_engine.md#1ae03241b464040b659b6a91f27920e8c3) () <br>Let visitors visit the scene. |


## Public Functions Documentation

### function <a id="1a64c430f74d72e2745646fdbffbd97930" href="#1a64c430f74d72e2745646fdbffbd97930">GameEngine</a>

```cpp
GameEngine::GameEngine ()
```

Construct a new **[Game](class_game.md)** Engine object. 


### function <a id="1a8e59d8341ef9d2dcc62eee1437e37f14" href="#1a8e59d8341ef9d2dcc62eee1437e37f14">~GameEngine</a>

```cpp
GameEngine::~GameEngine ()
```

Destroy the **[Game](class_game.md)** Engine object. 


### function <a id="1aab3035fb0f041131db9d237b3ebc5a7e" href="#1aab3035fb0f041131db9d237b3ebc5a7e">addVisitor</a>

```cpp
void GameEngine::addVisitor (
    const std::shared_ptr< Visitor > & 
)
```

Add visitor operation for scene. 


### function <a id="1a353327a50e1016a448156d93a6941b8e" href="#1a353327a50e1016a448156d93a6941b8e">addSprite</a>

```cpp
void GameEngine::addSprite (
    std::shared_ptr< Sprite > 
)
```

Add **[Sprite](class_sprite.md)** to scene. 


### function <a id="1a3144fb41f147af39a281e18e41e84121" href="#1a3144fb41f147af39a281e18e41e84121">setScene</a>

```cpp
void GameEngine::setScene (
    std::shared_ptr< AbstractScene > as
)
```

Set the Scene object. 



**Parameters:**


* **as** 



### function <a id="1ae03241b464040b659b6a91f27920e8c3" href="#1ae03241b464040b659b6a91f27920e8c3">update</a>

```cpp
void GameEngine::update ()
```

Let visitors visit the scene. 




----------------------------------------
The documentation for this class was generated from the following file: `classes/GameEngine.h`
