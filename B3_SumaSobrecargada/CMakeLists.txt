cmake_minimum_required(VERSION 3.20)
project(B3_SumaSobrecargada)

set(CMAKE_CXX_STANDARD 20)

add_executable(B3_SumaSobrecargada main.cpp
        tipos.h
        operaciones.cpp
        operaciones.h
)
