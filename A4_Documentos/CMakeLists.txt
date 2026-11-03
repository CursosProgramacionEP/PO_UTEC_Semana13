cmake_minimum_required(VERSION 3.20)
project(A4_Documentos)

set(CMAKE_CXX_STANDARD 20)

add_executable(A4_Documentos main.cpp
        Documento.cpp
        Documento.h
        DNI.cpp
        DNI.h
        CEX.cpp
        CEX.h
        Pasaporte.cpp
        Pasaporte.h
        Brevete.cpp
        Brevete.h
        Persona.cpp
        Persona.h
)
