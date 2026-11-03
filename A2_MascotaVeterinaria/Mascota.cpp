#include "Mascota.h"
#include <iostream>

using namespace std;

Mascota::Mascota() {
    this->nombre = "sin nombre";
    this->edad = 0;
    this->peso = 0.0;
}

Mascota::Mascota(const string& nombre, int edad, double peso) {
    this->nombre = nombre;
    this->edad = edad;
    this->peso = peso;
}

Mascota::~Mascota() {
}

string Mascota::get_nombre() const {
    return nombre;
}

string Mascota::especie() const {
    return "Mascota";
}

string Mascota::sonido() const {
    return "...";
}

void Mascota::mostrar() const {
    cout << especie() << " | " << nombre
         << " | edad: " << edad << " anios"
         << " | peso: " << peso << " kg"
         << " | dice: " << sonido() << endl;
}
