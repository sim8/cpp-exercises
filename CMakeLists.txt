cmake_minimum_required(VERSION 3.26)
project(cpp_exercises)

set(CMAKE_CXX_STANDARD 20)

add_executable(cpp_exercises main.cpp
        matrix.cpp
        matrix.hpp
        deck_of_cards.cpp
        deck_of_cards.hpp
)
