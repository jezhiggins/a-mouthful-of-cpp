cmake_minimum_required(VERSION 3.14)
project(mouthful)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/..)

add_executable(00_hello_world 00/hello-world.cpp)

add_executable(01_fizzbuzz 01/fizzbuzz.cpp)

add_executable(02_fizzbuzz 02/fizzbuzz.cpp)

add_executable(03_fizzbuzz 03/fizzbuzz.cpp)

add_executable(04_fizzbuzz 04/fizzbuzz.cpp)

add_executable(05_fizzbuzz 05/fizzbuzz.cpp)

add_executable(06_fizzbuzz 06/fizzbuzz.cpp)

add_executable(07_fizzbuzz_to_file 07/fizzbuzz-to-file.cpp)

add_executable(08_fizzbuzz_out 08/fizzbuzz-out.cpp)

add_executable(09_mayfly 09/everyone-dies-at-the-end.cpp)

add_executable(10_fizzbuzz_generator 10/fizzbuzz-generator.cpp)