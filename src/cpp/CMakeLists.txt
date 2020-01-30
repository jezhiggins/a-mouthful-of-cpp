cmake_minimum_required(VERSION 3.14)
project(mouthful)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/..)

add_executable(00_hello_world 00/hello-world.cpp)

add_executable(01_fizzbuzz 01/fizzbuzz.cpp)