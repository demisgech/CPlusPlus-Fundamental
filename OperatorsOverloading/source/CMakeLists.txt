cmake_minimum_required(VERSION 3.5)
project(OperatorOverloading
        VERSION 0.0.1
        DESCRIPTION "Operator overlaoding"
        LANGUAGES CXX)
add_executable(excute #ArrayMain.cpp 
                #       SmartPointerMain.cpp
                #       PointMain.cpp
                #       LengthMain.cpp
                #       CustormerMain.cpp
                        # LinearMain.cpp
                        # SumMain.cpp
                        Array3DMain.cpp
                      ./src/Length.cpp
                      ./src/Point.cpp
                      ./src/Customer.cpp
                      ./src/Array.cpp
                      ./src/SmartPointer.cpp
                      ./src/Linear.cpp
                      ./src/Sum.cpp
                      ./src/Array3D.inl) 
target_compile_features(excute PRIVATE cxx_std_20) 
target_include_directories(excute PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)  