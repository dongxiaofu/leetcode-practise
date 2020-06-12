cmake_minimum_required(VERSION 3.16)
project(leetcode_practise)

set(CMAKE_CXX_STANDARD 14)
#栈
add_executable(test_225_01
        stack/225/01/Solution.h
        stack/225/01/Solution.cpp
        stack/225/01/test.cpp)

add_executable(test_1441_01
        stack/1441/01/Solution.h
        stack/1441/01/Solution.cpp
        stack/1441/01/test.cpp)

add_executable(test_496_01
        stack/496/01/Solution.h
        stack/496/01/Solution.cpp
        stack/496/01/test.cpp)

add_executable(test_496_02
        stack/496/02/Solution.h
        stack/496/02/Solution.cpp
        stack/496/02/test.cpp)
