cmake_minimum_required (VERSION 3.10)

project(bracket_test)


include_directories(lib/${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR} "include/" "lib/stack")




ADD_SUBDIRECTORY(lib/gtest lib/stack)
enable_testing()

#find_package(stack REQUIRED)

set(SOURCES src/bracket.cpp src/analyzer.cpp src/builder.cpp src/round.cpp src/square.cpp src/triangular.cpp src/curly.cpp)

add_executable(bracket_test ${SOURCES} tests/bracketTest.cpp)






target_link_libraries(bracket_test gtest gtest_main)
#target_include_directories(bracket_test "lib/stack")
