cmake_minimum_required(VERSION 3.5)
project(classroom_test)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(googletest gtest-build EXCLUDE_FROM_ALL)

add_executable(public_tests solution.cpp tests.cpp)
target_link_libraries(public_tests gtest_main)
