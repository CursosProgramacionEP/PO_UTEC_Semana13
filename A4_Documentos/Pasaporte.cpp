#include "Pasaporte.h"
#include <iostream>

using namespace std;

Pasaporte::Pasaporte() {
    this->huella_digital = "00000000";
}

Pasaporte::Pasaporte(const string& numero, const string& fecha_caducidad,
                     const string& huella_digital)
        : Documento(numero, fecha_caducidad) {
    this->huella_digital = huella_digital;
}

// La huella es una cadena binaria: solo puede contener ceros y unos.
bool Pasaporte::huella_valida() const {
    if (huella_digital.empty()) {
        return false;
    }
    for (size_t i = 0; i < huella_digital.size(); i++) {
        if (huella_digital[i] != '0' && huella_digital[i] != '1') {
            return false;
        }
    }
    return true;
}

string Pasaporte::tipo() const {
    return "Pasaporte";
}

void Pasaporte::mostrar() const {
    cout << "[" << tipo() << "] numero: " << numero
         << " | caduca: " << fecha_caducidad
         << " | huella: " << huella_digital
         << " (" << (huella_valida() ? "valida" : "invalida") << ")" << endl;
}
