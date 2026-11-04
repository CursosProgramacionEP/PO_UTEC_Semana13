#include "Veterinaria.h"
#include "imprimir_datos.h"
#include <iostream>

using namespace std;

Veterinaria::Veterinaria(const string& nombre) {
    this->nombre = nombre;
}

// La veterinaria guarda el puntero: no copia la mascota ni se hace duenia de ella.
void Veterinaria::agregar_mascota(Mascota* mascota) {
    if (mascota != nullptr) {
        mascotas.push_back(mascota);
    }
}

void Veterinaria::imprimir() {
    cout << "=== Veterinaria " << nombre << " ===" << endl;
    for (size_t i = 0; i < mascotas.size(); i++) {
        cout << i + 1 << ". ";
        imprimir_datos(*mascotas[i]);
    }
    cout << "Total de mascotas: " << mascotas.size() << endl;
}
