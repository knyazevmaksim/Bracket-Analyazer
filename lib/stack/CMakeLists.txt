# Note: CMake support is community-based. The maintainers do not use CMake
# internally.

cmake_minimum_required(VERSION 3.10)

project(test1)

ADD_SUBDIRECTORY(gtest)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(test1 testStack.cpp)
target_link_libraries(test1 gtest gtest_main)
#add_test()
