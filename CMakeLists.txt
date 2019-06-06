cmake_minimum_required(VERSION 3.14)
project(FinalProject_test)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(FinalProject_test
        Board.cpp
        Board.hpp
        Coast.cpp
        Coast.hpp
        Forest.cpp
        Forest.hpp
        Knapsack.cpp
        Knapsack.hpp
        main.cpp
        Menu.cpp
        Menu.hpp
        Mountain.cpp
        Mountain.hpp
        Space.cpp
        Space.hpp)
