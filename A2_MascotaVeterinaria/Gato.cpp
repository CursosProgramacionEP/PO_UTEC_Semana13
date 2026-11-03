#include "Gato.h"
#include <iostream>

using namespace std;

Gato::Gato() {
    this->pelo_largo = false;
}

Gato::Gato(const string& nombre, int edad, double peso, bool pelo_largo)
        : Mascota(nombre, edad, peso) {
    this->pelo_largo = pelo_largo;
}

string Gato::especie() const {
    return "Gato";
}

string Gato::sonido() const {
    return "Miau";
}

void Gato::mostrar() const {
    Mascota::mostrar();
    cout << "    pelo: " << (pelo_largo ? "largo" : "corto") << endl;
}
