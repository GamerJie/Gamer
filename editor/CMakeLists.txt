cmake_minimum_required(VERSION 3.10)
project(Editor)

#set(CMAKE_CXX_STANDARD 14)

#if(CMAKE_SYSTEM_NAME MATCHES "Window")
#    set(CMAKE_EXE_LINKER_FLAGS -static)
#    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static -static-libgcc -static-libstdc++")
#endif()
include_directories(${Engine_Include})

file(GLOB root src/*)

add_executable(Editor ${root})

target_link_libraries(Editor engine)