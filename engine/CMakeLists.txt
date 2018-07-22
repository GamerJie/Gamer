cmake_minimum_required(VERSION 3.10)
project(Engine)

#set(CMAKE_CXX_STANDARD 14)

set(STATIC_SFML TRUE)
set(BUILD_SHARED_LIBS FALSE)

add_definitions(-DSFML_STATIC)
add_definitions(-DEngineAPI)

add_subdirectory(extlibs/Lua lua)
add_subdirectory(extlibs/SFML sfml)
add_subdirectory(extlibs/Box2D box2d)

include_directories(extlibs/Sol2)
include_directories(extlibs/Lua/src)
include_directories(extlibs/SFML/include)
include_directories(extlibs/Box2D/Include)

include_directories(${Engine_Include})

file(GLOB root src/*)

add_library(engine SHARED ${root})
# add_library(EngineS ${root})

# set_target_properties(Engine PROPERTIES OUTPUT_NAME "Engine")

target_link_libraries(engine
        lualib
        box2Dlib
        sfml-audio
        sfml-system
        sfml-window
        sfml-network
        sfml-graphics)