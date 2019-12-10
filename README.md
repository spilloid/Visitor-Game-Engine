# About
I wanted to make a game engine which stored all sprites in an abstract data structure "scene", and then have all game based operations stored in visitors which operate on the scene. I also thought it would be fun to abstract away all implementation specific code into a "renderer" and "inputWrapper" so this could be easily ported to SFML, Web Assembly, or otherwise.
## Games
* pong - full game
* Quoridor - grid visitor demo
* TicTacToe - Unfinished. 
# Gotchas
* Use the makefile to compile (need sfml), 
* look at the [Wiki](https://github.iu.edu/jdspille/Visitor-Game-Engine/wiki) for documentation 

# Canvas Documentation Requirements

* Game Design Document - See [Wiki](https://github.iu.edu/jdspille/Visitor-Game-Engine/wiki), specifically [UML Diagram](https://github.iu.edu/jdspille/Visitor-Game-Engine/wiki/UML-Diagram)
* Software Engineering Plan - I do everything since no one wanted to work on my engine D:
* State Transition Diagram - N/A ?
* User Instructions - This <3


# Acknowledged Issues:
* Sprite creation/manipulation on grids is flaky
* Game Engine is unsure of where to go. Either make it do more or get rid of it since all it does is tightly couple scene with visitors 
* sf clock use in games tightly couples sfml with games
* Text does NOT work
* Input handler uses keycodes, not an enum
* Input handler click is based on last click not event orient
