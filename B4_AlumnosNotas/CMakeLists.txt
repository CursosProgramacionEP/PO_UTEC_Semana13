cmake_minimum_required(VERSION 3.20)
project(B4_AlumnosNotas)

set(CMAKE_CXX_STANDARD 20)

add_executable(B4_AlumnosNotas main.cpp
        Alumno.cpp
        Alumno.h
        AlumnoPregrado.cpp
        AlumnoPregrado.h
        AlumnoPostgrado.cpp
        AlumnoPostgrado.h
        Curso.cpp
        Curso.h
)
