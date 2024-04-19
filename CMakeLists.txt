cmake_minimum_required(VERSION 3.5)

project(HelloWorld 
        VERSION 0.0.1 
        DESCRIPTION "Build a hello world project"
        LANGUAGES CXX)
add_executable(Hello main.cpp 
               Shapes/diamond.cpp
               Shapes/rectangularSquence.cpp
               Shapes/xPyramid.cpp )