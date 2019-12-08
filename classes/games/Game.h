#ifndef GAME_H
#define GAME_H
#include "../GameEngine.h"
#include "../SpriteProxy.h"
#include "../GravityVisitor.h"
#include "../BounceBoundsVisitor.h"
#include "../WrapBoundsVisitor.h"
#include "../ForceVisitor.h"
#include "../BoundingBoxCollisionVisitor.h"
#include "../SimpleDrawingVisitor.h"
#include "../GridDrawingVisitor.h"
#include "../SFMLRenderer.h"
#include "../SFMLInputWrapper.h"
#include <list>
#include <memory>
class Game{
    private:
    public:
        virtual void start()=0;
};
#endif