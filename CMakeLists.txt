cmake_minimum_required(VERSION 3.26)
project(cpp_exercises)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_STANDARD 20)

enable_testing()

# Create a library for your application code
add_library(myapp
        matrix.cpp
        matrix.hpp
        deck_of_cards.cpp
        deck_of_cards.hpp
)

add_executable(cpp_exercises main.cpp)
target_link_libraries(cpp_exercises PRIVATE myapp)

# Include Google Test
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Create the test target
add_executable(
        deck_of_cards_test
        deck_of_cards_test.cc
)
target_link_libraries(
        deck_of_cards_test
        GTest::gtest_main
        myapp  # Link your application code
)

include(GoogleTest)
gtest_discover_tests(deck_of_cards_test)
