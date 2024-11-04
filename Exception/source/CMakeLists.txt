cmake_minimum_required(VERSION 3.5)
project(Exception
        VERSION 0.0.1
        DESCRIPTION "Exceprtion handling"
        LANGUAGES CXX)
add_executable(excute 
            main.cpp
            ./src/Rectangle.cpp
            ./src/AccountLocked.cpp
            )
target_compile_features(excute PRIVATE cxx_std_23)
target_include_directories(excute PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)