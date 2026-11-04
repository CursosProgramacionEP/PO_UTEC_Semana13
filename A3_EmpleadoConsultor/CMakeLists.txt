cmake_minimum_required(VERSION 3.20)
project(A3_EmpleadoConsultor)

set(CMAKE_CXX_STANDARD 20)

add_executable(A3_EmpleadoConsultor main.cpp
        Empleado.cpp
        Empleado.h
        Consultor.cpp
        Consultor.h
        imprimir_datos.h
)
