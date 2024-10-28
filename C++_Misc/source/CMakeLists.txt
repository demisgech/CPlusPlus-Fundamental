cmake_minimum_required(VERSION 3.5)
project(Helloworld
        VERSION 0.0.1
        DESCRIPTION "Hello world app"
        LANGUAGES CXX)
add_executable(excute main.cpp ./src/Carpet.cpp) 
target_compile_features(excute PRIVATE cxx_std_23) 
target_include_directories(excute PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)  