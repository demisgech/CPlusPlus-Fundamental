cmake_minimum_required(VERSION 3.5)
project(MiniProject
        VERSION 0.0.1
        DESCRIPTION "Bank Account Management"
        LANGUAGES CXX)

add_executable(excute main.cpp
                ./src/BankAccount.cpp
                ./src/CheckingAccount.cpp
                ./src/SavingAccount.cpp
                ./src/InsufficientBalance.cpp
                ./src/WithdrawTransaction.cpp
                ./src/DepositeTransaction.cpp
                ./src/Customer.cpp
                )

target_compile_features(excute PRIVATE cxx_std_23)
target_include_directories(excute PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)