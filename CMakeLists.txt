cmake_minimum_required(VERSION 3.0.0)
project(Planks VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
add_subdirectory(googletest)
include_directories(googletest/include)

add_executable(Planks main.cpp fun.cpp)
add_executable(Test uTest.cpp fun.cpp)

target_link_libraries(Test PRIVATE gtest)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
