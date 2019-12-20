cmake_minimum_required (VERSION 3.10)

project(bracket_test)
ADD_SUBDIRECTORY(gtest)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(bracket_test bracketTest.cpp task2.cpp)
target_link_libraries(bracket_test gtest gtest_main)
