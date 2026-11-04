#ifndef VETERINARIA_H
#define VETERINARIA_H

#include <string>
#include <vector>
#include "Mascota.h"

class Veterinaria {
private:
    std::string nombre;
    std::vector<Mascota*> mascotas;

public:
    Veterinaria();
    Veterinaria(const std::string& nombre);

    void agregar_mascota(Mascota* mascota);

    // El enunciado pide imprimir desde un metodo de clase, no desde el main.
    void imprimir();
};

#endif
