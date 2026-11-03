cmake_minimum_required(VERSION 3.20)
project(A5_Figuras)

set(CMAKE_CXX_STANDARD 20)

add_executable(A5_Figuras main.cpp
        tipos.h
        AbstractPoligono.h
        Poligono.cpp
        Poligono.h
        Elipse.cpp
        Elipse.h
        Triangulo.cpp
        Triangulo.h
        Paralelogramo.cpp
        Paralelogramo.h
)
