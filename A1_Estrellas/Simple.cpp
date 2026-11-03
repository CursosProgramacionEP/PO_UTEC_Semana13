#include "Simple.h"
#include <iostream>

using namespace std;

Simple::Simple() {
    this->clase_espectral = "G";
}

Simple::Simple(const string& nombre, double magnitud, double distancia,
               const string& clase_espectral)
        : Estrella(nombre, magnitud, distancia) {
    this->clase_espectral = clase_espectral;
}

string Simple::tipo() const {
    return "Simple";
}

// Reusa la parte comun llamando a la version de la superclase.
void Simple::mostrar() const {
    Estrella::mostrar();
    cout << " | clase espectral: " << clase_espectral << endl;
}
