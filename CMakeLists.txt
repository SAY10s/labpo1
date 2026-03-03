cmake_minimum_required(VERSION 4.1)
project(labpo1)

set(CMAKE_CXX_STANDARD 20)

add_executable(labpo1 main.cpp
        FiguraPlaska.cpp
        FiguraPlaska.hpp
        Prostakat.cpp
        Prostakat.hpp
        Trojkat.cpp
        Trojkat.hpp
        Kolo.cpp
        Kolo.hpp
)
