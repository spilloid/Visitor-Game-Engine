# Visitor Game Engine

A C++ game engine where every behavior is a Visitor and every entity is a Sprite. No entity subclasses. No switch statements on type. Just clean double dispatch — two virtual calls per sprite per frame — and composition all the way down.

Built for CS400 Game Development. Powered by [SFML](https://www.sfml-dev.org/).

---

## The Idea

Most game engines model behavior through inheritance: `Enemy extends Character`, `FlyingEnemy extends Enemy`, and so on until the hierarchy collapses under its own weight. This engine takes the opposite approach.

**Sprites are pure data.** They hold position, velocity, size, and a texture path — nothing else. They know nothing about physics, collision, or rendering.

**Visitors are pure behavior.** Each Visitor implements one operation across all sprites in the scene. Want gravity? Add a `GravityVisitor`. Want collision detection? Add a `BoundingBoxCollisionVisitor`. Want to draw everything? Add a `SimpleDrawingVisitor` last.

```
GameEngine::update()
    for each Visitor:
        Scene::accept(visitor)          ← first dispatch: which scene?
            for each Sprite:
                visitor::visit(sprite)  ← second dispatch: which visitor?
```

This is the **Visitor pattern** — and that two-level dispatch is the entire engine loop.

---

## How Double Dispatch Works

The core loop in `GameEngine.cpp` is five lines:

```cpp
void GameEngine::update() {
    for (auto &sceneVisitor : this->sceneVisitors)
        this->scene->accept(sceneVisitor);
}
```

`scene->accept()` is a virtual call. At runtime the vtable resolves which `accept()` to run — `SimpleScene`, `LayeredScene`, or anything else you write. Inside `SimpleScene::accept()`:

```cpp
void SimpleScene::accept(std::shared_ptr<Visitor> v) {
    for (auto &i : this->spriteList)
        v->visit(i);   // second virtual call
}
```

`v->visit()` is the second virtual call. Each concrete Visitor has its own `visit()` — the vtable picks the right one. No `dynamic_cast`. No `typeid`. No if-else chains. Just pointer indirection the CPU is very good at.

Adding a new behavior means writing a new class. The `Sprite`, `Scene`, and `GameEngine` classes never change.

---

## Architecture

```
┌─────────────────────────────────────────────────┐
│                  GameEngine                     │
│                                                 │
│  scene ──► AbstractScene                        │
│               ├── SimpleScene                   │
│               └── LayeredScene                  │
│                                                 │
│  visitors ──► list<Visitor>                     │
│                 ├── SimpleDrawingVisitor         │
│                 ├── BoundingBoxCollisionVisitor  │
│                 ├── ForceVisitor                 │
│                 ├── BounceBoundsVisitor          │
│                 ├── WrapBoundsVisitor            │
│                 └── GravityVisitor              │
└─────────────────────────────────────────────────┘
         │ update()
         ▼
  scene->accept(visitor)  ──►  visitor->visit(sprite)
  [Scene dispatch]              [Visitor dispatch]
```

The renderer and input handler are also abstracted behind interfaces (`AbstractRenderer`, `AbstractInputWrapper`) so the SFML backend can be swapped out without touching game logic.

---

## Visitor Catalog

| Visitor | What it does |
|---|---|
| `SimpleDrawingVisitor` | Draws each sprite to the renderer at its (x, y) position |
| `GridDrawingVisitor` | Same, but converts grid coordinates to pixel coordinates first |
| `ForceVisitor` | Moves each sprite by its `(dx, dy)` velocity each frame |
| `GravityVisitor` | Adds a downward acceleration to `dy` each frame |
| `BounceBoundsVisitor` | Reflects `dx`/`dy` when a sprite hits the scene boundary |
| `WrapBoundsVisitor` | Teleports sprites from one edge to the opposite |
| `BoundingBoxCollisionVisitor` | AABB test: tracks which sprites overlap a single watched sprite |
| `RayCastCollisionVisitor` | *(stub — unimplemented)* |

---

## Building a Game: Pong

Pong demonstrates the full engine in about 40 lines of setup. Here's how it's built.

### 1. Declare Sprites

Sprites are data. Construct them with a texture path, position, and size:

```cpp
auto player1     = make_shared<Sprite>(black, MINX+100, MAXY/2, paddleWidth, paddleHeight);
auto player2     = make_shared<Sprite>(black, MAXX-100, MAXY/2, paddleWidth, paddleHeight);
auto player1Goal = make_shared<Sprite>(black, MINX+10,  0,      5,           MAXY*2);
auto player2Goal = make_shared<Sprite>(black, MAXX-10,  0,      5,           MAXY*2);
auto ball        = make_shared<Sprite>(black, MAXX/2,   MAXY/2, 10,          10);
```

No `Ball` class. No `Paddle` class. Just `Sprite`.

### 2. Create Visitors

Each visitor is one responsibility:

```cpp
auto bv   = make_shared<BounceBoundsVisitor>(MINX, MAXX, MINY, MAXY);
auto fv   = make_shared<ForceVisitor>();
auto bbcv = make_shared<BoundingBoxCollisionVisitor>();
auto draw = make_shared<SimpleDrawingVisitor>(renderer);
```

### 3. Wire Into the Engine

```cpp
auto ge = make_shared<GameEngine>();

// Sprites into scene
ge->addSprite(player1);
ge->addSprite(player2);
ge->addSprite(player1Goal);
ge->addSprite(player2Goal);
ge->addSprite(ball);

// Visitors run in order — drawing must come last
ge->addVisitor(bbcv);
ge->addVisitor(fv);
ge->addVisitor(bv);
ge->addVisitor(draw);
```

Tell the collision visitor which sprite to track:

```cpp
bbcv->setWatched(ball);
fv->applyForce(ball, 10, rand()); // kick the ball at a random angle
```

### 4. Game Loop

```cpp
while (draw->isOpen()) {
    if (tick.getElapsedTime().asMilliseconds() > 50) {
        ge->update();   // runs all visitors across all sprites
        tick.restart();

        // Player 1 input
        for (int key : in->getKeyPresses()) {
            if (key == 73) fv->applyForce(player1, 1, 0);   // up
            if (key == 74) fv->applyForce(player1, 1, 180); // down
        }

        // Collision response
        for (auto &c : bbcv->getCollisions()) {
            if (c == player1Goal) { /* player 2 scores */ }
            if (c == player2Goal) { /* player 1 scores */ }
            if (c == player1) {
                // angle bounce off paddle face based on hit position
                ball->setDXY(
                    fabs(ball->getDX()),
                    PADDLESPRING * ((ball->getY() - player1->getY()) / paddleHeight - 0.5f)
                );
            }
        }

        // Perfect AI: track ball
        player2->setXY(player2->getX(), ball->getY() - paddleHeight/2 - 20);

        draw->draw();
    }
}
```

`ge->update()` runs every visitor over every sprite. The collision visitor accumulates hits; you drain them after the update and respond. The engine doesn't know what a paddle is. It just dispatches.

---

## Games

| Game | Status | Notes |
|---|---|---|
| Pong | Complete | Two-player with perfect AI on player 2 |
| Quoridor | Demo | Shows `GridDrawingVisitor`; movement works, win condition absent |
| TicTacToe | Unfinished | Grid renders; no game logic |

---

## Build & Run

**Dependencies:** SFML (`libsfml-graphics`, `libsfml-window`, `libsfml-system`)

```bash
# build
make

# build + run
make run

# release build
make release
```

The binary launches an interactive menu to select a game.

---

## Design Notes & Known Limitations

**What works well:**
- `shared_ptr` throughout — no manual memory management, no leaks
- `TextureFactory` caches loaded textures by path so the same asset is never loaded twice
- Renderer and input are fully abstracted; SFML could be replaced with SDL2 or WebAssembly without touching game code

**Known issues:**
- **SFML clock in game code** — `sf::Clock` is used directly in `Pong.cpp` and `Quoridor.cpp`, which leaks the SFML dependency into game logic. A `GameEngine::setTargetFPS()` method would fix this.
- **Raw keycodes** — input handling uses integer keycodes (`73 = up`, `74 = down`) rather than a named enum. Readable but fragile.
- **`GravityVisitor` subtracts Y** — in SFML's coordinate system Y increases downward, so the gravity implementation subtracts from `dy` to move *up*, which is counterintuitive from the class name. Works correctly; just reads backwards.
- **`LayeredScene` has no bounds check** on the layer index passed to `addSprite()` — an out-of-range layer silently does nothing.
- **Text rendering** — not implemented. `AbstractRenderer` has no text API.
- **Click events** — input wrapper returns the last observed click position rather than queuing events, so fast clicks can be missed.
- **`RayCastCollisionVisitor`** — stubbed but unimplemented.

---

## Structure

```
classes/
  Visitor.h / Sprite.h          ← the two base types everything builds on
  GameEngine.h                  ← composes scene + visitor list
  AbstractScene / SimpleScene / LayeredScene
  AbstractDrawingVisitor / SimpleDrawingVisitor / GridDrawingVisitor
  AbstractCollisionVisitor / BoundingBoxCollisionVisitor / RayCastCollisionVisitor
  ForceVisitor / GravityVisitor / BounceBoundsVisitor / WrapBoundsVisitor
  AbstractRenderer / SFMLRenderer / TextureFactory
  AbstractInputWrapper / SFMLInputWrapper
  games/
    Game.h  Pong  Quoridor  TicTacToe
hello.cpp   ← game selection menu
assets/
  img/bbox.png  img/greySquare.png
  fonts/RobotoMono-Regular.ttf
```
