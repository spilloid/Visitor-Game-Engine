cmake_minimum_required(VERSION 3.11)

project(VisitorGameEngine VERSION 0.1 LANGUAGES CXX)

add_executable(VisitorGameEngine hello.cpp
        ./classes/games/Game.h
        ./classes/games/Pong.h
        ./classes/games/Pong.cpp
        ./classes/games/Quoridor.h
        ./classes/games/Quoridor.cpp
        ./classes/AbstractCollisionVisitor.cpp
        ./classes/AbstractInputWrapper.h
        ./classes/SFMLInputWrapper.h
        ./classes/SFMLInputWrapper.cpp
        ./classes/GridDrawingVisitor.h
        ./classes/AbstractCollisionVisitor.h
        ./classes/LayeredScene.cpp
        ./classes/AbstractDrawingVisitor.h
        ./classes/LayeredScene.h
        ./classes/AbstractRenderer.cpp
        ./classes/RayCastCollisionVisitor.cpp
        ./classes/AbstractRenderer.h
        ./classes/RayCastCollisionVisitor.h
        ./classes/AbstractScene.h
        ./classes/SFMLRenderer.cpp
        ./classes/BounceBoundsVisitor.cpp
        ./classes/SFMLRenderer.h
        ./classes/BounceBoundsVisitor.h
        ./classes/SimpleDrawingVisitor.h
        ./classes/BoundingBoxCollisionVisitor.cpp
        ./classes/SimpleDrawingVisitor.cpp
        ./classes/BoundingBoxCollisionVisitor.h
        ./classes/SimpleScene.cpp
        ./classes/EasyGameEngine.cpp
        ./classes/SimpleScene.h
        ./classes/EasyGameEngine.h
        classes/Sprite.cpp
        ./classes/ForceVisitor.cpp
        classes/Sprite.h
        ./classes/ForceVisitor.h
        ./classes/TextureFactory.cpp
        ./classes/GameEngine.cpp
        ./classes/TextureFactory.h
        ./classes/GameEngine.h
        ./classes/Visitor.cpp
        ./classes/Visitor.h
        ./classes/GravityVisitor.cpp
        ./classes/WrapBoundsVisitor.cpp
        ./classes/GravityVisitor.h
        ./classes/WrapBoundsVisitor.h
        ./classes/GridDrawingVisitor.cpp
        )

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


# Find SFML
find_package(SFML COMPONENTS audio graphics window system REQUIRED)

#Include SOL2 header files
include_directories(${CMAKE_SOURCE_DIR}/sol2/include)

#add_subdirectory(ECS)

target_link_libraries(VisitorGameEngine
        PUBLIC
        sfml-graphics sfml-audio sfml-window sfml-system)