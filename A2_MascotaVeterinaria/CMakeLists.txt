cmake_minimum_required(VERSION 3.20)
project(A2_MascotaVeterinaria)

set(CMAKE_CXX_STANDARD 20)

add_executable(A2_MascotaVeterinaria main.cpp
        Mascota.cpp
        Mascota.h
        Gato.cpp
        Gato.h
        Perro.cpp
        Perro.h
        Veterinaria.cpp
        Veterinaria.h
        imprimir_datos.h
)
