#ifndef EASYGAMEENGINE_H
#define EASYGAMEENGINE_H
#include <iostream>
#include <memory>
#include <vector>
#include "AbstractDrawingVisitor.h"
#include "SimpleDrawingVisitor.h"
#include "AbstractRenderer.h"
#include "AbstractCollisionVisitor.h"
#include "BoundingBoxCollisionVisitor.h"
#include "RayCastCollisionVisitor.h"
#include "AbstractScene.h"
#include "SimpleScene.h"
#include "ForceVisitor.h"


class EasyGameEngine{
    private:
        std::shared_ptr<AbstractDrawingVisitor> drawer;
        std::shared_ptr<AbstractRenderer> renderer;
        std::shared_ptr<AbstractCollisionVisitor> collisions;
        std::vector<std::shared_ptr<AbstractScene>> scenes;
        std::shared_ptr<ForceVisitor> forces;
        int curScene;
        bool forcesOn;
    public:
        EasyGameEngine();
        /**
         * @brief Set collision type to be bounding box
         * 
         */
        void setBoundingBoxCollisions();
        /**
         * @brief Set collision type to be raycasted
         * 
         */
        void setRayCastCollisions();
        /**
         * @brief turn on/off physics
         * 
         * @param yn 
         */
        void setForces(bool yn);
        /**
         * @brief 
         * 
         * @param scene 
         * @return int Index of scene in Engine
         */
        int addScene(std::shared_ptr<AbstractScene> scene);
        /**
         * @brief Sets currently rendered scene
         * 
         * @param id 
         */
        void setScene(int id);
        /**
         * @brief Set the Rendererer object
         * 
         * @param ar 
         */
        void setRendererer(std::shared_ptr<AbstractRenderer> ar);
        void update();
};
#endif