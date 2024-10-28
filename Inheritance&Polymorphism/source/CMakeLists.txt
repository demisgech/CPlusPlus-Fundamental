cmake_minimum_required(VERSION 3.30)
project(InheeritanceAndPlymorphism
        VERSION 0.0.1
        DESCRIPTION "Inheritance and Polymorphism"
        LANGUAGES CXX)

add_executable(excute 
              # main.cpp
              # ShapeMain.cpp
                # TextBoxMain.cpp
                # polymorphicMain.cpp
                FileIOMain.cpp
              ./src/TextBox.cpp
              ./src/Widget.cpp
              ./src/Shape.cpp
              ./src/Square.cpp
              ./src/Circle.cpp
              ./src/CheckBox.cpp
              ./src/MaskedCircle.cpp
              ./src/FileReader.cpp
              ./src/FileWriter.cpp
              ./src/FileIO.cpp)
target_compile_features(excute PRIVATE cxx_std_20)
target_include_directories(excute PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)