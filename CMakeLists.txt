cmake_minimum_required(VERSION 3.26)
project(Ejerciciosprogramacionestructurada)

set(CMAKE_CXX_STANDARD 14)

add_executable(main "main.cpp"
        estudiante.h
        estudiante.cpp)