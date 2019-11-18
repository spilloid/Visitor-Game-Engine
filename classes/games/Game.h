#ifndef GAME_H
#define GAME_H
#include "../GameEngine.h"
#include "../SpriteProxy.h"
#include "../GravityVisitor.h"
#include "../BounceBoundsVisitor.h"
#include "../WrapBoundsVisitor.h"
#include "../ForceVisitor.h"
#include "../BoundingBoxCollisionVisitor.h"
#include "../SFMLDrawingVisitor.h"
#include <list>
#include <memory>
class Game{
    private:
    public:
        virtual void start()=0;
};
#endif