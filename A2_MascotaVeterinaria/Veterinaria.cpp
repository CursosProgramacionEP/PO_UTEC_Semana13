#include "Veterinaria.h"
#include <iostream>

using namespace std;

Veterinaria::Veterinaria() {
    this->nombre = "sin nombre";
}

Veterinaria::Veterinaria(const string& nombre) {
    this->nombre = nombre;
}

// La veterinaria guarda el puntero: no copia la mascota ni se hace duenia de ella.
void Veterinaria::registrar(Mascota* mascota) {
    if (mascota != nullptr) {
        pacientes.push_back(mascota);
    }
}

bool Veterinaria::retirar(const string& nombre) {
    for (size_t i = 0; i < pacientes.size(); i++) {
        if (pacientes[i]->get_nombre() == nombre) {
            pacientes.erase(pacientes.begin() + i);
            return true;
        }
    }
    return false;
}

void Veterinaria::imprimir_pacientes() const {
    cout << "=== Veterinaria " << nombre << " ===" << endl;
    for (size_t i = 0; i < pacientes.size(); i++) {
        cout << i + 1 << ". ";
        pacientes[i]->mostrar();
    }
    cout << "Total de pacientes: " << pacientes.size() << endl;
}

int Veterinaria::total_pacientes() const {
    return static_cast<int>(pacientes.size());
}
