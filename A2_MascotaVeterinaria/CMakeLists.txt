cmake_minimum_required(VERSION 3.20)
project(A2_MascotaVeterinaria)

set(CMAKE_CXX_STANDARD 20)

add_executable(A2_MascotaVeterinaria main.cpp
        Mascota.cpp
        Mascota.h
        Perro.cpp
        Perro.h
        Gato.cpp
        Gato.h
        Veterinaria.cpp
        Veterinaria.h
)
