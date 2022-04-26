cmake_minimum_required(VERSION 3.21)
project(matrix_calculator_b)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(sources)

add_executable(matrix_calculator_b
        sources/Matrix.cpp
        sources/Matrix.hpp
        doctest.h
        StudentTest1.cpp
        StudentTest2.cpp
        StudentTest3.cpp
        Test.cpp
        TestRunner.cpp)
