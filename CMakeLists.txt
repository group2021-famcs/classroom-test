cmake_minimum_required(VERSION 3.5)
project(classroom_test)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(googletest gtest-build EXCLUDE_FROM_ALL)

option(PRIVATE_TESTS "Builds private tests instead of public" OFF)

if(NOT PRIVATE_TESTS)
    set(tests_srcs "tests.cpp")
else()
    set(tests_srcs "private_tests/tests.cpp")
endif()

add_executable(tests solution.cpp ${tests_srcs})
target_link_libraries(tests gtest_main gmock)
