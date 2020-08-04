# Set the minimum version of CMake that can be used
# To find the cmake version run
# $ cmake --version
cmake_minimum_required(VERSION 3.13)

# Set the project name
project(C_EXAMplE)

set(CMAKE_C_STANDARD 99)
set(SRC_LIST main.c sort/bubble.c sort/selection.c math/fibonacci.c test/t01.c test/t02.c test/t03.c test/t04.c string/s01.c operator/o01.c)

# Add an executable
ADD_EXECUTABLE(main ${SRC_LIST})