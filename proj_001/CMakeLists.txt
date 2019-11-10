cmake_minimum_required(VERSION 2.8)

project(proj_001)

include_directories(F:/cg_opengl/freeglut/include)
link_directories(F:/cg_opengl/freeglut/lib)

add_executable(${PROJECT_NAME} "main.cpp")

target_link_libraries(${PROJECT_NAME} freeglutd.lib)
