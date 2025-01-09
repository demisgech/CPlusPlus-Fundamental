cmake_minimum_required(VERSION 3.10)
project(MiniProject
        VERSION 0.0.1
        DESCRIPTION "The template method pattern"
        LANGUAGES CXX)

add_executable(execute main.cpp
        ./src/AuditTrail.cpp 
        ./src/MoneyTransferTask.cpp 
        ./src/GenerateReportTask.cpp
        ./src/Task.cpp)

target_compile_features(execute PRIVATE cxx_std_23)
target_include_directories(execute PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)