#ifndef VETERINARIA_H
#define VETERINARIA_H

#include <string>
#include <vector>
#include "Mascota.h"

class Veterinaria {
private:
    std::string nombre;
    std::vector<Mascota*> pacientes;

public:
    Veterinaria();
    Veterinaria(const std::string& nombre);

    void registrar(Mascota* mascota);
    bool retirar(const std::string& nombre);

    // El enunciado pide imprimir desde un metodo de la clase, no desde una funcion externa.
    void imprimir_pacientes() const;

    int total_pacientes() const;
};

#endif
