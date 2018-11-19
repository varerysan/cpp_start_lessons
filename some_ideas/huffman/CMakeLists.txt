cmake_minimum_required(VERSION 3.8)
set(PROJECT_NAME_STR huffman)
project(${PROJECT_NAME_STR} CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(huffman main.cpp)


