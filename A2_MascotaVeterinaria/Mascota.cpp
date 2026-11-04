#include "Mascota.h"

using namespace std;

Mascota::Mascota(const string& nombre, const string& vacuna) {
    this->nombre = nombre;
    this->vacuna = vacuna;
}

Mascota::~Mascota() {
}

string Mascota::getNombre() {
    return nombre;
}

string Mascota::getVacuna() {
    return vacuna;
}

// En el caso generico basta con tener alguna vacuna registrada.
bool Mascota::vacunado() {
    return !vacuna.empty();
}
