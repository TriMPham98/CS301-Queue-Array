cmake_minimum_required(VERSION 3.17)
project(Queue-Array-template)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}")

add_executable(DynamicQue QueDr.cpp Queue.h)