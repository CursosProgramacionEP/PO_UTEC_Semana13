#include "Perro.h"
#include <iostream>

using namespace std;

Perro::Perro() {
    this->raza = "mestizo";
}

Perro::Perro(const string& nombre, int edad, double peso, const string& raza)
        : Mascota(nombre, edad, peso) {
    this->raza = raza;
}

string Perro::especie() const {
    return "Perro";
}

string Perro::sonido() const {
    return "Guau";
}

void Perro::mostrar() const {
    Mascota::mostrar();
    cout << "    raza: " << raza << endl;
}
