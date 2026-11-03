#include "Estrella.h"
#include <iostream>

using namespace std;

Estrella::Estrella() {
    this->nombre = "sin nombre";
    this->magnitud = 0.0;
    this->distancia = 0.0;
}

Estrella::Estrella(const string& nombre, double magnitud, double distancia) {
    this->nombre = nombre;
    this->magnitud = magnitud;
    this->distancia = distancia;
}

// El destructor es virtual porque las estrellas se liberan a traves de un Estrella*.
Estrella::~Estrella() {
}

string Estrella::get_nombre() const {
    return nombre;
}

string Estrella::tipo() const {
    return "Estrella";
}

void Estrella::mostrar() const {
    cout << tipo() << " | " << nombre
         << " | magnitud: " << magnitud
         << " | distancia: " << distancia << " al";
}
