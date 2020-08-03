cmake_minimum_required(VERSION 3.13)
project(c C)

set(CMAKE_C_STANDARD 99)

project(HELLO)
set(SRC_LIST main.c sort/bubble.c sort/selection.c)
add_executable(main ${SRC_LIST})