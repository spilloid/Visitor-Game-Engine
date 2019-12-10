#Acknowledged Issues:
* Sprite creation/manipulation on grids is flaky
* Game Engine is unsure of where to go. Either make it do more or get rid of it since all it does is tightly couple scene with visitors 
* sf clock use in games tightly couples sfml with games
* Text does NOT work
* Input handler uses keycodes, not an enum
* Input handler click is based on last click not event orient