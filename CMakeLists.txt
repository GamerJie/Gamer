cmake_minimum_required(VERSION 3.10)


set(extlibs ${CMAKE_SOURCE_DIR}/extlibs)

set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH "${CMAKE_SOURCE_DIR}/bin/")

set(Engine_Include ${CMAKE_SOURCE_DIR}/Engine/include)

add_subdirectory(engine)
add_subdirectory(editor)