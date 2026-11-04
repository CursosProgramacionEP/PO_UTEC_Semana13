cmake_minimum_required(VERSION 3.20)
project(A1_Estrellas)

set(CMAKE_CXX_STANDARD 20)

add_executable(A1_Estrellas main.cpp
        Estrella.cpp
        Estrella.h
        Simple.cpp
        Simple.h
        Binaria.cpp
        Binaria.h
        imprimir_datos.h
)
